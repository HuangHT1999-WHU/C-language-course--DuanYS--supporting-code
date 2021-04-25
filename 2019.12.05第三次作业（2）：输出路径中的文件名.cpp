// 编译器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

void GetFileTitle(const char* strPathName, char* strTitle, int num_chars) {
	char* temp;
	temp = new char[num_chars];
	int p;
	for (int i = 0; i < num_chars; i++) {
		*(temp + i) = *(strPathName + i);
		if (*(temp + i) == '\\') { p = i; }
	}
	for (int i = 0; i < num_chars - p; i++) {
		*(strTitle + i) = *(temp + p + 1 + i);
	}
	delete[]temp;
}

int main()
{
	const char* PathName = "d:\\Test\\sub01\\main.cpp";
	int count = strlen(PathName);
	int name_count = 0;
	for (int i = count - 1; i >= 0; i--) {
		if (*(PathName + i) == '\\') { break; }
		name_count++;
	}
	char* Title;
	Title = new char[name_count];
	GetFileTitle(PathName, Title, count);
	cout << Title;
	delete Title;
	system("pause");
	return 0;
}
