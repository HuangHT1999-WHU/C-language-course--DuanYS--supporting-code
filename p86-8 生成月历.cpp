// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"


int main(void)
{
	int daynumber, startingday;
	printf("Enter number of days in month:");
	scanf("%d", &daynumber);
	printf("\nEnter starting day of the week(1=mon,7=sun):");
	scanf("%d", &startingday);
	for (int i = 1; i <= daynumber; i++) {
		if (i == 1) {
			for (int p = 1; p <= startingday-1; p++) {
				printf("  ");
			}
			if (startingday == 7) {
				printf("%d \n", i);
				startingday = 1;
			}
			else {
				printf("%d ", i);
				startingday++;
			}
		}
		else {
			if (startingday == 7) {
			printf("%d \n", i);
			startingday = 1;
			}
			else {		
				startingday++;
				printf("%d ", i);
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
