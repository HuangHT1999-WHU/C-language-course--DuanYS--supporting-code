// ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	//��д����ʵ������n���㣨x��y����Ȼ��������ļ���Զ������ĵ�
	int n;
	cout << "������Ԥ�Ƶĵ���:" << endl;
	cin >> n;
	cout << "����������n��������꣨x��y����" << endl;
	double *point_x, *point_y;
	point_x = new double[n];
	point_y = new double[n];

	for (int i = 0; i < n; i++) {
		cin >> *(point_x + i);
		cin >> *(point_y + i);
	}

	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << "��������Ϊ�� ( " << *(point_x + i) << " , " << *(point_y + i) << " )" << endl;
	}

	double centX = 0, centY = 0, sum_x = 0, sum_y = 0;
	for (int i = 0; i < n; i++) {
		sum_x += *(point_x + i);
		sum_y += *(point_y + i);
	}
	centX = sum_x / n;
	centY = sum_y / n;
	cout << "��������Ϊ��" << "( " << centX << " , " << centY << " ) " << endl;

	double *dis;
	dis = new double[n];
	double temp_max = -10000, temp_min = 10000;
	for (int i = 0; i < n; i++) {
		*(dis + i) = sqrt((*(point_x + i) - centX)*(*(point_x + i) - centX) + (*(point_y + i) - centY)*(*(point_y + i) - centY));
		if (*(dis + i) < temp_min) { temp_min = *(dis + i); }
		if (*(dis + i) > temp_max) { temp_max = *(dis + i); }
	}
	for (int i = 0; i < n; i++) {
		if (*(dis + i) == temp_max) { cout << "��������Զ�ĵ�Ϊ��( " << *(point_x + i) << " , " << *(point_y + i) << " )"; }
		if (*(dis + i) == temp_min) { cout << "����������ĵ�Ϊ��( " << *(point_x + i) << " , " << *(point_y + i) << " )"; }
	}
	system("pause");
    return 0;
}

