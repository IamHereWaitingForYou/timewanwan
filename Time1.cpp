#include<iostream>
#include"Time2.h" 
#include"Time3.cpp"
using namespace std;
int main()
{
	Time time1;
	time1.dealTime();
	cout<<"当前秒数："<<time1.getSec()<<endl;
	cout<<"当前分钟数："<<time1.getMin()<<endl;
	cout<<"当前小时数："<<time1.getHour()<<endl;
	 Time time2(555550);
	 time2.dealTime();
	cout<<"当前秒数："<<time2.getSec()<<endl;
	cout<<"当前分钟数："<<time2.getMin()<<endl;
	cout<<"当前小时数："<<time2.getHour()<<endl;
	Time time3(23,24,25);
	cout<<"当前秒数："<<time3.getSec()<<endl;
	cout<<"当前分钟数："<<time3.getMin()<<endl;
	cout<<"当前小时数："<<time3.getHour()<<endl;
	return 0;
 } 
