// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"

int main(void)
{
	char checker_board[8][8];
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			if ((i + j) % 2 == 0) {
				checker_board[i][j] = 'B';
			}
			else 
				checker_board[i][j] = 'R';
		}
	}
	printf("展示checker_board[8][8]:\n");
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			printf("%c\t", checker_board[i][j]);
			if (j == 7) {
				printf("\n");
			}
		}
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
