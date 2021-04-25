// 编译器.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

struct point
{
	double x;
	double y;
};

struct book
{
	char name[100];
	char writer[100];
	double price;
};

struct student
{
	char name[100];
	char num[13];
	int score[4];
};

void search_information(char number[],student stu[]) {
	for (int i = 0; i < 3; i++) {
		if (strcmp(number,stu[i].num)==0) { 
			cout << "The student has been found." << endl;
			cout << "name: " << stu[i].name << "   student number: " << fixed << stu[i].num << endl;
			for (int j = 0; j < 4; j++) {
				cout << "score"<<j+1<<": " << stu[i].score[j]<< endl;
			}
		}
	}
}

int main() {
	//point p1, p2;
	//cin >> p1.x >> p1.y >> p2.x >> p2.y;
	//double dis;
	//dis = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
	//point v1;//两点向量
	//v1.x = p1.x - p2.x;
	//v1.y = p1.y - p2.y;
	//cout << dis << endl;
	//cout << v1.x << "  " << v1.y << endl;

	//book books[3];
	//for (int i = 0; i < 3; i++) {
	//	cout << "enter name:" << endl;
	//	cin >> books[i].name;
	//	cout << "enter writer:" << endl;
	//	cin >> books[i].writer;
	//	cout << "enter price" << endl; 
	//	cin >> books[i].price;
	//}
	//for (int i = 0; i < 3; i++) {
	//	cout << "name: " << books[i].name << "   writer: " << books[i].writer << "   price: " << books[i].price << endl;
	//}
	//cout << endl;
	//char searchname[100];
	//cout << "please enter the name you want to search:" << endl;
	//cin >> searchname;
	//for (int i = 0; i < 3; i++) {
	//	if (strcmp(searchname,books[i].name)==0) {
	//		cout << "The book has been found." << endl;
	//		cout << "name: " << books[i].name << "   writer: " << books[i].writer << "   price: " << books[i].price << endl;
	//	}
	//}
	//cout << endl;

	student stu[3];
	for (int i = 0; i < 3; i++) {
		cout << "enter name:" << endl;
		cin >> stu[i].name;
		cout << "enter student numbers:" << endl;
		cin >> stu[i].num;
		for (int j = 0; j < 4; j++) {
			cout << "enter score" << j+1 << endl;
			cin >> stu[i].score[j];
		}
	}
	char searchnumber[14];
	cout << "please enter the 13 student number" << endl;
	cin >> searchnumber;
	search_information(searchnumber, stu);
	system("pause");
	return 0;
}
