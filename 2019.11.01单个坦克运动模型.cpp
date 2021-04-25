// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>

void goto_xy(int x, int y)  {
	//定位光标位置到指定坐标
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(hOut,pos);
}

void draw(int x, int y) {
	//绘制一辆坦克
	goto_xy(x, y + 0); printf("****");
	goto_xy(x, y + 1); printf("*  ****");
	goto_xy(x, y + 2); printf("****");
}

int main(void){
	printf("这是单个坦克运动模型\n请使用英文模式下w、a、s、d四个键控制坦克移动，空格键开炮\n只有炮弹弹超出右边界后才能进行下一次装填炮弹\n此提示将在10秒内销毁");
	Sleep(10000);
	system("cls");

	int nQuit=0;
	int counter_y = 0, counter_x = 0;//坦克位置参数
	int gun_x=-1,gun_y= -1;//炮弹位置参数
	int gun_commond = 0;//开炮与否命令
	int gun_range = 200;//炮弹射程即界面右边界
	char commond;
	for (;;) {
		system("cls");//清除屏幕

		//绘制坦克
		goto_xy(counter_x, counter_y);
		draw(counter_x, counter_y);

		if (gun_commond == 1) {
			//判断开炮与否命令，若判断开炮则执行炮弹装填工作
			//装填完毕后gun_x和gun_y参数均不为-1
			gun_x = counter_x + 7; gun_y = counter_y + 1;
			Beep(700, 200);
			gun_commond = 2;
		}

			if (gun_x != -1 && gun_y != -1&& gun_commond == 2) {
				//炮弹运动，且炮弹若没超出屏幕范围则持续飞行
				goto_xy(gun_x, gun_y);
				printf("&");
				gun_x += 3;
				Sleep(10);
			}
			if (gun_x > gun_range) {
				//只有子弹超出右边界后才能进行下一次装填
				gun_commond = 0;
			}
			
		if (_kbhit() != 0) {     //判断有键盘输入
			commond = _getch();  //获取键盘输入
			switch (commond)
			{
				//命令控制
			case 'w':
				if (counter_y >= 0) { //判断坦克运动没有超出屏幕范围，下面同理
					counter_y -= 1;
				}
				break;
			case 's':counter_y += 1;
				break;
			case 'a':
				if (counter_x >= 0) {
					counter_x -= 1;
				}
				break;
			case 'd':counter_x += 2;
				break;
			case VK_ESCAPE:nQuit = 1;
				break;
			case VK_SPACE:
				if (gun_commond == 0) {
					gun_commond = 1;
				}
				break;
			}
		}	
		if (nQuit != 0) {
			//强制结束游戏
			break;
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
