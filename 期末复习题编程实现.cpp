// 期末复习题编程实现.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

//bool IsPrime(int a) {
//	int i;
//	for (i = a - 1;i > 1;i--) {
//		if ((a%i) == 0)return 0;
//	}
//	return 1;
//}

int strcmp1(const char *s1, const char *s2) {
	for (;*s1 != '\0'&&*s2 != '\0';s1++, s2++) {
		if (*s1 != *s2)break;
	}
	return *s1 - *s2;
}

struct RC {
	int left, right, top, bottom;
};

bool RcIntersect(RC r1, RC r2, RC *rc) {
	if ((r1.right > r2.left) && (r1.left < r2.right) && (r1.bottom > r2.top) && (r1.top < r2.bottom)) {
		rc->left = (r1.left > r2.left) ? r1.left : r2.left;
		rc->right = (r1.right < r2.right) ? r1.right : r2.right;
		rc->top = (r1.top > r2.top) ? r1.top : r2.top;
		rc->bottom = (r1.bottom < r2.bottom) ? r1.bottom : r2.bottom;
		return true;
	}
	return false;
}

int main()
{
	//（1）编程实现输入一个自然数，判断它是奇数还是偶数
	//int a;
	//cin >> a;
	//if (a % 2 == 0) { cout << "是偶数"<<endl; }
	//else { cout << "是奇数"<<endl; }
	

	//（2）编程从键盘输入两个整数分别给变量a和b，要求在不借助于其他变量的条件下，将变量a和b的值实现交换
	//int a, b;
	//cin >> a >> b;
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//cout << a << "  " << b;

	//（3）编程从键盘输入圆的半径r，计算出圆的周长和面积
	//float pai = 3.1415926;
	//int r;
	//cin >> r;
	//cout << "周长= " << 2 * pai*r << endl;
	//cout << "面积= " << pai*r*r << endl;

	//（4）已知一元二次方程ax2 + bx + c = 0，编一程序当从键盘输入a、b、c的值后，计算x的值
	//int a, b, c;
	//double x[2];
	//cin >> a >> b >> c;
	//x[0] = ((-b) + (double)sqrt(b*b - 4 * a*c)) / (2 * a);
	//x[1] = ((-b) - (double)sqrt(b*b - 4 * a*c)) / (2 * a);
	//cout << x[0] << "  " << x[1] << endl;

	//（5）输入一个年份和月份，打印出该月份有多少天（考虑闰年），用switch语句
	/*int year, month;
	cin >> year >> month;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << 30;
		break;
	case 2:
		if (year % 4 == 0) { cout << 29; }
		else { cout << 28; }
	default:cout << "error" << endl;
	}*/

	//char a[100] = "It\`s\40a\40C++programe!";
	////cout << sizeof(a) << endl;
	//cout << "\\40这个字符是：" << "\40" << "结束" << endl;
	//cout << "\\`这个字符是：" << "\`" << "结束" << endl;
	//cout << strlen(a)<<endl;
	//cout << "\\2333这个字符是：" << "\2333" << "结束" << endl;

	/*char s1[128],s2[128];
	int i, j;
	cin >> s1 >> s2;*/
	//for (i = 0;s1[i]!=0;i++);
	//for (j = 0;s2[j]!=0;j++) {
	//	s1[i++] = s2[j];
	//}
	//s1[i] = 0;	
	//cout<<s1;

	//char A[] = "abpdefg";
	//char *p = &A[1];
	//cout << *p++ << endl;//b
	//cout << *(p++) << endl;//b
	//cout << *(++p) << endl;//p
	//cout << ++*p << endl;//c
	//cout << *(p)++ << endl;//b
	 
	//int a = 1, b, c=2;
	//b = a+++c;
	//cout << a << b << c;

	//for (int i = 3;i < 100;i++) {
	//	if (IsPrime(i))cout << i << "  ";
	//}

	/*double rr;
	char *p1, *p2, *p3, str[256];
	cin >> str;
	p1 = str;
	p2 = NULL;
	p3 = NULL;
	rr = atof(p1);
	for (;*p1!='\0';p1++) {
		if (*p1 == '+' || *p1 == '-' || *p1 == '*' || *p1 == '/') {
			if (p2) {
				switch (*p2) {
				case'+':rr = rr + atof(p3);break;
				case'-':rr = rr - atof(p3);break;
				case'*':rr = rr * atof(p3);break;
				case'/':rr = rr / atof(p3);break;
				}
			}
			p2 = p1;p3 = p2 + 1;
		}
	}
	if (p2) {
		switch (*p2) {
		case'+':rr = rr + atof(p3);break;
		case'-':rr = rr - atof(p3);break;
		case'*':rr = rr * atof(p3);break;
		case'/':rr = rr / atof(p3);break;
		}
	}
	cout << "Value of expression:" << rr;
*/
//RC r1, r2, r3;
//cin >> r1.left >> r1.right >> r1.top >> r1.bottom;
//cin >> r2.left >> r2.right >> r2.top >> r2.bottom;
//if (RcIntersect(r1, r2, &r3) != false) {
//	cout << r3.left << r3.right << r3.top << r3.bottom;
//}
//else { cout << "NO Intersect."; }

char s[256];
FILE *fp = fopen("d:\\abc.txt", "w");
fprintf(fp, "%s", "this is a test");
fclose(fp);
fp=fopen("d:\\abc.txt", "r");
int count=0;
//while (!feof(fp)) {
//	if (fgetc(fp) != NULL) { count++; }
//}
fseek(fp, 0, 2);
count = ftell(fp)+1;
cout << count;
fseek(fp, 0, 0);
fgets(s,count,fp);//fgets(s,256,fp)
fclose(fp);
cout << s;






	system("pause");
    return 0;
}

