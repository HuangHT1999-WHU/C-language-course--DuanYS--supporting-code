// 编译器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

int sun_n(int n) {
	int sum=0;
	for (int i = 1; i <= n; i++) { sum += i; }
	return sum;
}

double Get_numbers_max(double a[], int length){
	//利用动态数组对数组进行排序并输出最大值
	double* temp;
	temp = new double[length];
	for (int i = 0; i < length; i++) {
		*(temp + i) = a[i];
	}
	double temp_s;
	for (int i = 0; i < length; i++) {
		for (int j = i; j < length; j++) {
			if (*(temp + i) > *(temp + j)){
				temp_s = *(temp + i);
				*(temp + i) = *(temp + j);
				*(temp + j) = temp_s;
			}
		}
	}
	double max = *(temp + length - 1);
	delete[]temp;
	return max;
}

double Get_numbers_min(double a[],int length) {
	//利用动态数组对数组进行排序并输出最小值
	double* temp;
	temp = new double[length];
	for (int i = 0; i < length; i++) {
		*(temp + i) = a[i];
	}
	double temp_s;
	for (int i = 0; i < length; i++) {
		for (int j = i; j < length; j++) {
			if (*(temp + i) > *(temp + j)) {
				temp_s = *(temp + i);
				*(temp + i) = *(temp + j);
				*(temp + j) = temp_s;
			}
		}
	}
	double min = *(temp);
	delete[]temp;
	return min;
}

double fac(int n) {
	//递归求阶乘
	static int time=1;
	static double result=1;
	if (time > n) { return result; }
	else{
		result *= time;
		time++;
		fac(n);
	}	
}

void char_resv(char s[],int n) {
	//字符串倒转函数
	char* temp;
	temp = new char[n];
	for (int i = 0; i < n; i++) {
		*(temp + n - i - 1) = s[i];
	}
	for (int i = 0; i < n; i++) {
		s[i] = *(temp + i);
	}
}

int main()
{
	//验证排序和最大最小值
	double test_max;
	double test_min;
	double test[6] = { 100,2,3,4.5,2.5,7.8 };
	int length = sizeof(test) / sizeof(test[0]);
	test_max = Get_numbers_max(test,length);
	test_min = Get_numbers_min(test, length);
	cout << "test_max = " << test_max << endl;
	cout << "test_min = " << test_min << endl;

	//验证递归求阶乘
	cout << fac(4);

	//验证字符串倒转函数
	char* a;
	int n;
	cout << "请输入字符串长度" << endl;
	cin >> n;
	a = new char[n];
	cin >> a;
	char_resv(a, n);
	cout << a;

	system("pause");
	return 0;
}
