// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"
#include<stdlib.h>
#include<time.h>

#define MAX_NUMBER 100
//在这里定义神秘数的上限MAX_NUMBER

int secret_number;

void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void)
{
	char command;
	printf("Guess the secret number between 1 and %d.\n", MAX_NUMBER);
	initialize_number_generator();
	do {
		choose_new_secret_number();
		printf("A new number has been chosen.\n");
		read_guesses();
		printf("play again? (y/n) ");
		scanf("%c", &command);
		printf("\n");
	} while (command == 'y' || command == 'Y');
	return 0;
}
void initialize_number_generator(void) {
	srand((unsigned)time(NULL));
}
//使用时间来创建一个随机数

void choose_new_secret_number(void) {
	secret_number = rand() % MAX_NUMBER + 1;
}

void read_guesses(void) {
	int guess, num_guess = 0;
	for (;;) {
		num_guess++;
		printf("Enter guess: ");
		scanf("%d", &guess);
		if (guess == secret_number) {
			printf("You won in %d guesses!\n", num_guess);
			return;
		}
		else if (guess < secret_number) {
			printf("Too low ; try again.\n");
		}
		else {
			printf("Too high ; try again.\n");
		}
	}
}

/*以下是猜数游戏的改进版，把变量secret_number外部化以便choose_new_secret_number(void)和read_guesses(void)都可以访问它。
如果对choose_new_secret_number(void)和和read_guesses(void)稍作改动便可以把变量secret_number移入main函数中。
做法：修改choose_new_secret_number(void)以便函数返回新值，并重写read_guesses(void)以便变量secret_number可以作为参数传递给它。*/


//前面的include和define已省略！带***的部分为有修改部分

//void initialize_number_generator(void);
//int new_secret_number(void);//***
//void read_guesses(int secret_number);//***
//
//int main(void)
//{
//	char command;
//	int secret_number;//***
//	printf("Guess the secret number between 1 and %d.\n", MAX_NUMBER);
//	initialize_number_generator();
//	do {
//		secret_number=new_secret_number();//***
//		printf("A new number has been chosen.\n");
//		read_guesses(secret_number);//***
//		printf("play again? (y/n) ");
//		scanf("%c", &command);
//		printf("\n");
//	} while (command == 'y' || command == 'Y');
//	return 0;
//}
//void initialize_number_generator(void) {
//	srand((unsigned)time(NULL));
//}
///*使用时间来创建一个随机数*/
//
//int new_secret_number(void) { //***
//	return rand() % MAX_NUMBER + 1;//***
//}
//
//void read_guesses(int secret_number) {//***
//	int guess, num_guess = 0;
//	for (;;) {
//		num_guess++;
//		printf("Enter guess: ");
//		scanf("%d", &guess);
//		if (guess == secret_number) {
//			printf("You won in %d guesses!\n", num_guess);
//			return;
//		}
//		else if (guess < secret_number) {
//			printf("Too low ; try again.\n");
//		}
//		else {
//			printf("Too high ; try again.\n");
//		}
//	}
//}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
