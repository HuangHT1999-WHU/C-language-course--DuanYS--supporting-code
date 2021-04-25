// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"

int main(void)
{
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number(奇数） between 1 and 99.\n");
	printf("Enter size of magic square:");
	int n;
	scanf("%d", &n);
	int magic_square[99][99];
	bool magic_square_seen[99][99] = { false };
	int p = 0, q = n / 2;
	int p_persist, q_persist;
	for (int i = 1; i <= n * n; i++) {
	
		magic_square[p][q]=i;
		magic_square_seen[p][q] = true;

		p_persist = p;
		q_persist = q;

		p--;
		q++;

		//边界轮回
		if (p < 0) {
			p = n - 1;
		}
		if (q == n) {
			q = 0;
		}
		
		//如果数组元素被占用的情况
		if (magic_square_seen[p][q] == true) {
			p = p_persist + 1;
			q = q_persist;
			if (p < 0) {
				p = n - 1;
			}
			if (q == n) {
				q = 0;
			}
		}
		
	}
	//展示magic_square
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n; b++) {
			printf("%d\t", magic_square[a][b]);
			if (b == n - 1) {
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
