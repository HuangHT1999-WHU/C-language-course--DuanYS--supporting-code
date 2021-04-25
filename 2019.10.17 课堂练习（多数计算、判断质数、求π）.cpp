// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"
#include<stdio.h>
#include<math.h>
#include<Windows.h>

int main(void) {
	//某个数域内的若干种多数计算
	int s1 = 0, s2 = 0;
	long double s3 = 1, s4 = 1, s5_1 = 1, s5 = 1;
	int start = 1;
	int end = 20;
	for (int p = start; p <= end; p++) {
		s1 += p;
	}
	for (int p = start; p <= end; p++) {
		if (p % 2 == 0) {
			continue;
		}
		else {
			s2+= p;
		}
	}
	for (int p = 1; p <= end; p++) {
		s3 *= p;
	}
	for (int p = start; p <= end; p++) {
		if (p % 2 == 0) {
			continue;
		}
		else {
			s4 *= p;
		}
	}
	for (int p = start; p <= end; p++) {
		if (p % 2 == 0) {
			continue;
		}
		else {
			for (int t = 1; t <= p; t++) {
				s5_1 *= t;
			}
			s5 += s5_1;
		}

	}
	printf("%d到%d的和为:%d\n", start, end, s1);
	printf("%d到%d之间的奇数的总和为:%d\n", start, end, s2);
	printf("%d的阶乘为:%e\n", end, s3);
	printf("%d到%d之间的奇数的乘积为:%e\n", start,end, s4);
	printf("%d到%d之间的奇数的阶乘之和为:%e\n", start,end, s5);

	//判断一个数是否是质数,并以不同的提示音提示
	printf("Enter a number:");
	int num;
	scanf("%d", &num);
	int count=0;
	for (int i = 1; i <= num; i++) {
		if (num%i == 0) {
			count++;
		}
	}
	if (count == 2) {
		Beep(600, 300);
		Sleep(50);
		Beep(500, 300);
		printf("这个数是质数");
	}
	else
	{
		Beep(600,600);
		printf("这个数不是质数");
	}
	
	//求π
	double pai;
	long double total = 0;
	double limit = 1 / ((2 * 1) - 1);

	for (int n = 1; limit >= 10e-15;n++) {
		limit = 1.0 / ((2 * n+1.0) - 1);
		if (n % 2 == 0) {
			total = total - (1 / (2 * n - 1.0));
		}
		else
		{
			total = total + (1 / (2 * n - 1.0));
		}
	}
	pai = 4.0 * total;
	printf("π=%lf",pai);
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
