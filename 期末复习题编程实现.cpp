// ��ĩ��ϰ����ʵ��.cpp : �������̨Ӧ�ó������ڵ㡣
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
	//��1�����ʵ������һ����Ȼ�����ж�������������ż��
	//int a;
	//cin >> a;
	//if (a % 2 == 0) { cout << "��ż��"<<endl; }
	//else { cout << "������"<<endl; }
	

	//��2����̴Ӽ����������������ֱ������a��b��Ҫ���ڲ����������������������£�������a��b��ֵʵ�ֽ���
	//int a, b;
	//cin >> a >> b;
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//cout << a << "  " << b;

	//��3����̴Ӽ�������Բ�İ뾶r�������Բ���ܳ������
	//float pai = 3.1415926;
	//int r;
	//cin >> r;
	//cout << "�ܳ�= " << 2 * pai*r << endl;
	//cout << "���= " << pai*r*r << endl;

	//��4����֪һԪ���η���ax2 + bx + c = 0����һ���򵱴Ӽ�������a��b��c��ֵ�󣬼���x��ֵ
	//int a, b, c;
	//double x[2];
	//cin >> a >> b >> c;
	//x[0] = ((-b) + (double)sqrt(b*b - 4 * a*c)) / (2 * a);
	//x[1] = ((-b) - (double)sqrt(b*b - 4 * a*c)) / (2 * a);
	//cout << x[0] << "  " << x[1] << endl;

	//��5������һ����ݺ��·ݣ���ӡ�����·��ж����죨�������꣩����switch���
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
	//cout << "\\40����ַ��ǣ�" << "\40" << "����" << endl;
	//cout << "\\`����ַ��ǣ�" << "\`" << "����" << endl;
	//cout << strlen(a)<<endl;
	//cout << "\\2333����ַ��ǣ�" << "\2333" << "����" << endl;

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

