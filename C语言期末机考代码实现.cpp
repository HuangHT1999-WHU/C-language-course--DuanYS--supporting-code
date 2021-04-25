// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>

using namespace std;

struct STU {
	//定义学生类
	char name[256];
	int score[5];
};

void Sort(STU *p, int n) {
	//排序
	int sum[10];
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < 5;j++) {
			sum[i] += p[i].score[j];
		}
	}
	STU temp = p[0];
	int k = sum[0];
	for (int i = 0;i < n;i++) {
		for (int j = i;j < n;j++) {
			if (sum[j] < sum[i]) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
				k = sum[i];
				sum[i] = sum[j];
				sum[j] = k;
			}
		}
	}
}

int main()
{
	//实现根据总分从低到高输出
	int n = 0;
	FILE *fp = fopen("d:\\test.txt", "r");
	fscanf(fp,"%d", &n);
	STU *p = new STU[n];
	for (int i = 0;i < n;i++) {
		fscanf(fp, "%s", &p[i].name);
		for (int j = 0;j < 5;j++) {
			fscanf(fp, "%d""%d""%d""%d""%d", &p[i].score[0], &p[i].score[1], &p[i].score[2], &p[i].score[3], &p[i].score[4]);
		}
	}
	Sort(p, n);
	cout << "总共有" << n << "条数据"<<endl;
	for (int i = 0;i < n;i++) {
		cout << p[i].name << "  ";
		cout << p[i].score[0] << "  " << p[i].score[1] << "  " << p[i].score[2] << "  " << p[i].score[3] << "  " << p[i].score[4] << endl;
	}
	delete p;
	fclose(fp);
	//实现在文件末尾写数据
	FILE *fp1 = fopen("D:\\test.txt", "a");
	fprintf(fp, "%s %d %d %d %d %d\n", "李四", 67, 86, 35, 63, 74);
	fprintf(fp, "%s %d %d %d %d %d\n", "孟庆祥", 66, 96, 95, 93, 74);
	fclose(fp1);

	system("pause");
    return 0;
}

