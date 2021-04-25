// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"


int main(void)
{
	float number;
	printf("请输入收入金额：");
	scanf("%f", &number);
	if (number <= 750)
		printf("税金为：%f", number*0.01);
	else if (number <= 2250)
		printf("税金为：%f", 7.50 + (number - 750)*0.02);
	else if (number <= 3750)
		printf("税金为：%f", 37.5 + (number - 2250)*0.03);
	else if (number <= 5250)
		printf("税金为：%f", 82.5 + (number - 3750)*0.04);
	else if (number <= 7000)
		printf("税金为：%f", 142.5 + (number - 5250)*0.05);
	else
		printf("税金为：%f", 230 + (number - 7000)*0.06);
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
