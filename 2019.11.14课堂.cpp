// 12588.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//float a[2][2];
	//int i,j;
	//float sum;
	//for(int i=0;i<2;i++){
	//	for(int j=0;j<2;j++){
	//		sum+=a[i][j];
	//	}
	//}
	//float t;
	//cin>>t;
	//
	//for(int i=0;i<2;i++){
	//	for(int j=0;j<2;j++){
	//		a[i][j]=t*a[i][j];
	//	}
	//}

	//for(int i=0;i<2;i++){
	//	for(int j=0;j<2;j++){
	//		cout<<a[i][j];
	//	}
	//}


	//float ss=1/a[0][0]*a[1][1]-a[0][1]*a[1][0];

	/*int a=50;
	int *p;
	p=&a;
	cout<<p<<endl;
	cout<<p[0]<<endl;
	*p=100;
	cout<<a<<endl;
	getchar();*/

	/*int a[10];
	int *p,i;
	p=a;
	for(i=0;i<10;i++,p++){
		cin>>*p;
	}
	for(i=0;i<10;i++){
		cout<<a[i]<<" ";
	}*/

	/*char *a,a_s;
	int *b,b_s;
	float *c,c_s;
	double *d,d_s;

	a=&a_s;
	b=&b_s;
	c=&c_s;
	d=&d_s;

	cin>>*a;
	cin>>*b;
	cin>>*c;
	cin>>*d;*/
	
	float a[10];
	float *p;
	p=a;
	int n=5;
	for(int i=0;i<n;i++,p++){
		cin>>*p;
	}
	float temp;
	p=a;
	for(int i=0;i<n;i++){
		temp=a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				a[i]=a[j];
				a[j]=temp;
				temp=a[i];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n/2+1];
	system("pause");
	return 0;
	
}

