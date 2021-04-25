// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"

int main(void)
{
	printf("Enter phone number:");
	char ch;
	ch = getchar();
	while (ch!='\n')
	{
		switch (ch)
		{
		case('A'):printf("2"); break;
		case('B'):printf("2"); break;
		case('C'):printf("2"); break;
		case('D'):printf("3"); break;
		case('E'):printf("3"); break;
		case('F'):printf("3"); break;
		case('G'):printf("4"); break;
		case('H'):printf("4"); break;
		case('I'):printf("4"); break;
		case('J'):printf("5"); break;
		case('K'):printf("5"); break;
		case('L'):printf("5"); break;
		case('M'):printf("6"); break;
		case('N'):printf("6"); break;
		case('O'):printf("6"); break;
		case('P'):printf("7"); break;
		case('Q'):printf("7"); break;
		case('R'):printf("7"); break;
		case('S'):printf("7"); break;
		case('T'):printf("8"); break;
		case('U'):printf("8"); break;
		case('V'):printf("8"); break;
		case('W'):printf("9"); break;
		case('X'):printf("9"); break;
		case('Y'):printf("9"); break;
		case('Z'):printf("9"); break;
		default:
			printf("%c", ch);
			break;
		}
		ch = getchar();
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
