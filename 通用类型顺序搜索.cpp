#include "pch.h"
#include<iostream>
#include<string>
using namespace std;
template<typename T>
int SearchCertain(T shuzu[], const int size, T key)
{
	for (int i = 0;i < size; i++)
	{
		if (key == shuzu[i])
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	const int n = 5;
	int a[n] = { 1,3,5,7,2 };
	double b[n] = { 1.2,2.4,3.6,10.24,20.48 };
	string c[n] = { "Baidequan","Youguangxing","Baidezhi","Baideshun","Baideling" };
	if (SearchCertain(a, n, 5)!=-1)
		cout << "位置是：" << SearchCertain(a,n, 5) << endl;
	else
		cout << "int类型没找到！" << endl;
	if (SearchCertain(b,  n, 2.4)!=-1)
		cout << "位置是：" << SearchCertain(b,n, 2.4) << endl;
	else
		cout << "double类型没找到！" << endl;
	if (SearchCertain(c,n,string("Baideshun"))!=-1)
		cout << "位置是：" << SearchCertain(c,n,string("Baideshun")) << endl;
	else
		cout << "string类型没找到！" << endl;
	return 0;
}