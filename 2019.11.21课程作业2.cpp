// 编译器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	//编写程序实现输入n个点（x，y），然后输出重心及最远和最近的点
	int n;
	cout << "请输入预计的点数:" << endl;
	cin >> n;
	cout << "请依次输入n个点的坐标（x，y）：" << endl;
	double *point_x, *point_y;
	point_x = new double[n];
	point_y = new double[n];

	for (int i = 0; i < n; i++) {
		cin >> *(point_x + i);
		cin >> *(point_y + i);
	}

	for (int i = 0; i < n; i++) {
		cout << "第" << i + 1 << "个点坐标为： ( " << *(point_x + i) << " , " << *(point_y + i) << " )" << endl;
	}

	double centX = 0, centY = 0, sum_x = 0, sum_y = 0;
	for (int i = 0; i < n; i++) {
		sum_x += *(point_x + i);
		sum_y += *(point_y + i);
	}
	centX = sum_x / n;
	centY = sum_y / n;
	cout << "重心坐标为：" << "( " << centX << " , " << centY << " ) " << endl;

	double *dis;
	dis = new double[n];
	double temp_max = -10000, temp_min = 10000;
	for (int i = 0; i < n; i++) {
		*(dis + i) = sqrt((*(point_x + i) - centX)*(*(point_x + i) - centX) + (*(point_y + i) - centY)*(*(point_y + i) - centY));
		if (*(dis + i) < temp_min) { temp_min = *(dis + i); }
		if (*(dis + i) > temp_max) { temp_max = *(dis + i); }
	}
	for (int i = 0; i < n; i++) {
		if (*(dis + i) == temp_max) { cout << "离重心最远的点为：( " << *(point_x + i) << " , " << *(point_y + i) << " )"; }
		if (*(dis + i) == temp_min) { cout << "离重心最近的点为：( " << *(point_x + i) << " , " << *(point_y + i) << " )"; }
	}
	system("pause");
    return 0;
}

