// 编译器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

struct point
{
	double x;
	double y;
};

double GetDistance(point p1, point p2) {
	double dis;
	dis = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
	return dis;
}

bool GetCrossPoint(point L1_p1, point L1_p2, point L2_p1, point L2_p2, double *x, double *y) {
	double k1, k2, b1, b2;
	point cP;
	double dis1, dis2, dis3, dis4, dis5, dis6;
	dis1 = GetDistance(L1_p1, L1_p2);
	dis2 = GetDistance(L2_p1, L2_p2);
	k1 = (L1_p2.y - L1_p1.y) / (L1_p2.x - L1_p1.x);
	b1 = L1_p1.y - k1*(L1_p1.x);
	k2 = (L2_p2.y - L2_p1.y) / (L2_p2.x - L2_p1.x);
	b2 = L2_p1.y - k2*(L2_p1.x);
	if (k1 == k2) { return false; }
	else {
		cP.x = (b2 - b1) / (k1 - k2);
		cP.y = k1*(cP.x) + b1;
		dis3 = GetDistance(cP, L1_p1);
		dis4 = GetDistance(cP, L1_p2);
		dis5 = GetDistance(cP, L2_p1);
		dis6 = GetDistance(cP, L2_p2);
		if (dis3 <= dis1 && dis4 <= dis1 && dis5 <= dis2 && dis6 <= dis2) {
			*x = cP.x;
			*y = cP.y;
			return true;
		}
		else
		{
			return false;
		}
	}
}
int main()
{
	point p1_1, p1_2, p2_1, p2_2;
	p1_1.x = 0;
	p1_1.y = 0;
	p1_2.x = 2;
	p1_2.y = 2;
	p2_1.x = 0;
	p2_1.y = 2;
	p2_2.x = 2;
	p2_2.y = 0;
	double Crossx, Crossy;
	double *x = &Crossx;
	double *y = &Crossy;
	if (GetCrossPoint(p1_1, p1_2, p2_1, p2_2, x, y) == true) {
		cout << "x = " << *x << "  ";
		cout << "y = " << *y;
	}
	else { cout << "Crosspoint is not exist."; }
	system("pause");
	return 0;
}
