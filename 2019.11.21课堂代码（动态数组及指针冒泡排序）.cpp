// ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	//��һ�δ��룺��̬�����new��delete
	/*int n;
	cout << "enter n : " << endl;
	cin >> n;
	double *p;
	p = new double[n]; */

	/*for (int i = 0; i < n; i++) {
		p[i] = i;
		cout << p + i << endl;
		cout << p[i] << endl;
	}*/

	/*for (int i = 0; i < n; i++,p++) {
		*p = i;
		cout << p << endl;
		cout << *p << endl;
	}
	p -= n;
	delete[]p;*/

	//�ڶ��δ��룺���������ַ�����������һ��
	/*char char_1[100], char_2[100];
	char char_temp[100];
	int count;
	cout << "�������һ���ַ���" << endl;
	cin >> char_1;
	getchar();
	count = strlen(char_1);
	cout << "������ڶ����ַ���" << endl;
	cin >> char_2;
	getchar();
	count += strlen(char_2);
	for (int i=0; i < count; i++) {
		if (i < strlen(char_1)) {
			char_temp[i]= char_1[i];
		}
		else {
			char_temp[i] = char_2[i- strlen(char_1)];
		}
	}
	for (int i = 0; i < count; i++) {
		cout << char_temp[i];
	}
	cout << endl;*/
	
	//�����δ��룺����ָ������λ��
	int n;
	cout << "Please enter n:" << endl;
	cin >> n;
	double *number_line;
	number_line = new double[n];
	double number;
	cout << "Please enter "<<n<<" numbers:" << endl;
	for (int i = 0; i < n; i++, number_line++) {
		cin >> number;
		*number_line = number;
	}
	number_line -= n;
	for (int i = 0; i < n; i++, number_line++) {
		cout<<*number_line<<"  ";
	}
	cout << endl;
	number_line -= n;
	double temp;
	for (int i = 0; i < n; i++) {
		for (int y = i; y < n; y++) {
			if (*(number_line +i) > *(number_line +y) ){
				temp = *(number_line + i);
				*(number_line + i) = *(number_line + y);
				*(number_line + y) = temp;
			}
		}	
	}
	for (int i = 0; i < n; i++, number_line++) {
		cout << *number_line << "  ";
	}
	cout << endl;
	number_line -= n;
	if (n % 2 == 0) {
		cout << (*(number_line + (n / 2 - 1))+ *(number_line + (n / 2)))/2.0;
	}
	else {
		cout << *(number_line + (n / 2));
	}
	delete[]number_line;
	system("pause");
    return 0;
}

