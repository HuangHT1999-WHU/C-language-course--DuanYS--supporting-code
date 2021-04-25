// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"
void selection_sort(int a[], int n) {
	int persist = 0, num;
	for (int i = 0; i < n; i++) {
		if (a[i] > persist) {
			persist = a[i];
			num = i;
		}
	}
	persist = a[n-1];
	a[n-1] = a[num];
	a[num] = persist;
}
int main(void)
{
	int number[10];
	printf("请录入一串（10个）整数，中间用空格隔开：\n");
	for (int i = 0; i < 10; i++) {
		printf("录入第%d个整数：", i + 1);
		scanf("%d", &number[i]);
	}

	//排序
	for (int p = 10; p > 0; p--) {
		selection_sort(number, p);
	}
	//输出
	for (int q = 0; q < 10; q++) {
		printf("%d  ", number[q]);
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
