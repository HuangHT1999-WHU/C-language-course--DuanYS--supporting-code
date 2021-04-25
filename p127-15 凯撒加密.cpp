// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"

int main(void)
{
	char ch1[80]; 
	char ch2[80];
	printf("Enter message to be encrypted:");
	for (int i = 0;i<=79; i++) {
		scanf("%1c", &ch1[i]);
		if (ch1[i] == '\n') {
			break;
		}
	}
	
	//设置移位计数
	printf("Enter shift amount(1-25):");
	int shift_number;
	scanf("%d", &shift_number);

	//进行加密
	for (int p = 0;p<=79; p++) {
		if (ch1[p] >= 65 && ch1[p] <= 90) {
			ch2[p] = (ch1[p] - 'A' + shift_number) % 26 + 'A';
		}
		else if (ch1[p] >= 97 && ch1[p] <= 122) {
			ch2[p] = (ch1[p] - 'a' + shift_number) % 26 + 'a';
		}
		else {
			ch2[p] = ch1[p];
		}
	}
	
	printf("Encrypted message:");
	for (int q = 0;q<=79; q++) {
		printf("%1c", ch2[q]);
		if (ch2[q] == '\n') { break; }
	}
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
