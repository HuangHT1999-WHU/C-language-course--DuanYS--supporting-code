// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"


int main(void)
{
	int h, m, t, close=0,number=0;
	//使用数组储存航班起飞时间
	int table[8] = { 8 * 60,9 * 60 + 43,11 * 60 + 19,12 * 60 + 47,14 * 60,15 * 60 + 45,19 * 60,21 * 60 + 45 };
	int i[8];

	printf("请输入一个24小时制的时间如13:15 ：");
	scanf("%d:%d", &h, &m);
	t = h * 60 + m;
	//对t取绝对值
	for (int p = 0; p <= 7;p++) {
		i[p] = t - table[p];
		if (i[p] < 0)
			i[p] = -i[p];
		else
			i[p] = i[p];
	}
	//用循环来选择最接近的航班号
	close = i[0];
	for (int q = 1; q <= 7; q++) {
		if (close > i[q]) {
			close = i[q];
			number = q;
		}
	}
	//输出航班信息
	switch (number)
	{
	case (0):printf("Closest departure time is 8:00a.m., arriving at 10:16a.m.");
		break;
	case(1):printf("Closest departure time is 9:43a.m., arriving at 11:52a.m.");
		break;
	case(2):printf("Closest departure time is 11:19a.m., arriving at 1:31p.m.");
		break;
	case(3):printf("Closest departure time is 12:47p.m., arriving at 3:00p.m.");
		break;
	case(4):printf("Closest departure time is 2:00p.m., arriving at 4:08p.m.");
		break;
	case(5):printf("Closest departure time is 3:45p.m., arriving at 5:55p.m.");
		break;
	case(6):printf("Closest departure time is 7:00p.m., arriving at 9:20p.m.");
		break;
	case(7):printf("Closest departure time is 9:45p.m., arriving at 11:58p.m.");
		break;
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
