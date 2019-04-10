// 通用最大值寻找.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
template <typename T> 
void FindMax(T shuzu[], const int size)
{
	sort(shuzu, shuzu + size);

	cout << "最大值是：" << shuzu[size - 1] << endl;
}
int main()
{
	int a[5] = { 1,3,5,7,2 };
	double b[5] = { 1.2,2.4,3.6,10.24,20.48 };
	string c[5] = { "Majiangnan","Zhouzhijun","Chenbenxin" ,"Yuchenghao","Lihanghui"};
	const int n = 5;
	FindMax(a, n);
	FindMax(b, n);
	FindMax(c, n);
	return 0;

}
