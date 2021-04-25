// 编译器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

#define PI 3.1415926

using namespace std;

double mymax(double x,double y){
	if (x >= y) { return x; }
	else { return y; }
}
double mymin(double x, double y) {
	if (x <= y) { return x; }
	else { return y; }
}
double myabs(double x) {
	if (x >= 0) { return x; }
	else { return (-x); }
}

double Get_perimeter(double radium) {
	double perimeter;
	perimeter = 2.0*PI*radium;
	return perimeter;
}

double Get_area(double radium) {
	double area;
	area = PI*radium*radium;
	return area;
}

double Get_distance(double x_1, double y_1, double x_2, double y_2) {
	double distance;
	distance = sqrt((x_1 - x_2)*(x_1 - x_2) + (y_1 - y_2)*(y_1 - y_2));
	return distance;
}

double factorial(int n) {
	int a=1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}

//计算这一秒是这一年中的第几秒，以1月1日0时0分0秒为初始的第0秒
double Get_seconds(int month, int day, int hour, int minute, int second) {
	double seconds;
	if (month > 12) { cout << "please enter proper months" << endl; return -1; }
	if (day > 31) { cout << "please enter proper days" << endl; return -1; }
	if (hour > 60) { cout << "please enter proper hours" << endl; return -1; }
	if (minute > 60) { cout << "please enter proper minutes" << endl; return -1; }
	if (second > 60) { cout << "please enter proper seconds" << endl; return -1; }
	
	for(int months=1;months<month;months++){
	if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12) { day += 31; }
	if (months == 4 || months == 6 || months == 9 || months == 11) { day += 30; }
	if (months == 2) { day += 28; }
	}
	hour += day * 24;
	minute += hour * 60;
	seconds = second + minute * 60 - 24*60*60;
	return seconds;
}

void Sort(double a[], int sz) {
	//等价于void Sort(double *a,int sz)
	double t;
	for (int i = 0; i < sz; i++) {
		for (int j = i + 1; j < sz; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

double Get_middle(double *a,int n) {
	double middle;
	double *number_line;
	number_line = new double[n];
	number_line = a;
	double temp;
	for (int i = 0; i < n; i++) {
		for (int y = i; y < n; y++) {
			if (*(number_line + i) > *(number_line + y)) {
				temp = *(number_line + i);
				*(number_line + i) = *(number_line + y);
				*(number_line + y) = temp;
			}
		}
	}
	if (n % 2 == 0) {
		middle=(*(number_line + (n / 2 - 1)) + *(number_line + (n / 2))) / 2.0;
	}
	else {
		middle=*(number_line + (n / 2));
	}
	delete[]number_line;
	return middle;
}


double Get_Sinx(double x) {
	double sinx = 0;
	int n=1;
	for (int count=0; myabs(pow(x, n) / factorial(n)) >= 1e-6; n+=2,count++) {
		if(count%2==0){ sinx += pow(x, n) / factorial(n); }
		else
		{
			sinx -= pow(x, n) / factorial(n);
		}
		
	}
	return sinx;
}

int main()
{
	/*double a;
	double pai = 3.1415926535897932384626433;
	a = Get_Sinx(pai/2);
	cout << a;*/

	int n;
	cout << "Please enter n:" << endl;
	cin >> n;
	double *test;
	test = new double[n];
	double number;
	cout << "Please enter " << n << " numbers:" << endl;
	for (int i = 0; i < n; i++, test++) {
		cin >> number;
		*test = number;
	}
	test -= n;
	for (int i = 0; i < n; i++, test++) {
		cout << *test << "  ";
	}
	test -= n;
	double a;
	a=Get_middle(test, 4);
	
	cout << a;
	delete[]test;


	system("pause");
	return 0;
}
