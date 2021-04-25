// 临时.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//test1 输入10个数字并输出最大值、最小值、平均值、方差
	float number[11];
	float temp_max=0, temp_min=0, sum=0, EX=0, DX=0;
	cout << "Enter 10 number." << endl;
	for (int i = 0; i < 10; i++) {
		cin >> number[i];
		if (i == 0) {
			temp_max = temp_min = number[i];
		}
		if (number[i] >= temp_max) {
			temp_max = number[i];
		}
		else {
			temp_min = number[i];
		}
		sum += number[i];
	}
	EX = sum / 10;
	for (int i = 0; i < 10; i++) {
		DX += (number[i] - EX)*(number[i] - EX);
	}
	DX = DX / 10;
	cout << "max=" << temp_max << endl << "min=" << temp_min << endl << "平均值E(x)=" << EX << endl << "反差D(x)=" << DX << endl;

	//test2 输入2个字符串并返回匹配结果
	getchar();
	char ss_1[100];
	char ss_2[100];
	cout << "Enter first string." << endl;
	cin.get(ss_1, 100);
	getchar();
	cout << "Enter second string." << endl;
	cin.get(ss_2, 100);
	int count_1 = 0;
	for (int i = 0; i < 100; i++) {
		if (ss_1[i] != ss_2[i]) {
			cout << "The string is inconsistent." << endl;
			break;
		}
		count_1++;
	}
	if (count_1 = 0) {
		cout << "The string is consistent." << endl;
	}
	
	//test3 输入1个字符串并返回单词数
	getchar();
	char ss_3[100];
	cout << "Enter the string." << endl;
	cin.get(ss_3, 100);
	int count_2=0;
	for (int i = 0; i < 100; i++) {
		if (ss_3[i] == ' ') {
			count_2++;
		}
		if (ss_3[i] == 0) {
			break;
		}
	}
	cout << count_2 + 1 << endl;
	return 0;
}
	

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
