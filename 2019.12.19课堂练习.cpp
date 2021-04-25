// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{
	//char s[256];
	//cin >> s;
	//FILE *fp = fopen("d:\\s.txt", "w");
	//fprintf(fp, "%s", s);
	//fclose(fp);

	/*FILE *fp;
	char str[100];
	char ch[100];
	if ((fp = fopen("D:\\abc.txt", "w")) == NULL)
	{
		printf("file open error.\n");
		exit(0);
	}
	printf("请输入一串字符：\n");
	cin>>str;
	fputs(str, fp);
	fclose(fp);
	if ((fp = fopen("D:\\abc.txt", "r")) == NULL)
	{
		printf("file open error.\n");
		exit(0);
	}
	while (!feof(fp)) {
		fgets(ch, 10, fp);
	}
	cout << ch;
	system("pause");
	fclose(fp);*/

	//FILE *fp;  long  i;
	//if ((fp = fopen("D:\\s.txt","rb")) == NULL)
	//{
	//	printf("file open error.\n");
	//	exit(0);
	//}
	//for (i = 1;i <= 26;i++)
	//{
	//	fseek(fp, -i, 2);	        /*i=1时，定位于字母Z*/
	//	putchar(fgetc(fp));   /*显示读出的字符，位置指针+1*/
	//}
	//system("pause");
	//fclose(fp);

	FILE *fp = fopen("D:\\abc.txt", "wt");
	char s[256];
	fprintf(fp, "This is a test");
	fclose(fp);
	fp = fopen("D:\\abc.txt", "rt");
	//fscanf(fp, "%s", s);
	int temp = 0;
	for (int i = 0;i<255 && !feof(fp);i++) {
		fscanf(fp, "%c", &s[i]);
		temp++;
	}
	s[temp] = '\0';
	fclose(fp);
	cout << s;
	system("pause");
    return 0;
}

