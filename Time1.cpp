#include<iostream>
#include"Time2.h" 
#include"Time3.cpp"
using namespace std;
int main()
{
	Time time1;
	time1.dealTime();
	cout<<"��ǰ������"<<time1.getSec()<<endl;
	cout<<"��ǰ��������"<<time1.getMin()<<endl;
	cout<<"��ǰСʱ����"<<time1.getHour()<<endl;
	 Time time2(555550);
	 time2.dealTime();
	cout<<"��ǰ������"<<time2.getSec()<<endl;
	cout<<"��ǰ��������"<<time2.getMin()<<endl;
	cout<<"��ǰСʱ����"<<time2.getHour()<<endl;
	Time time3(23,24,25);
	cout<<"��ǰ������"<<time3.getSec()<<endl;
	cout<<"��ǰ��������"<<time3.getMin()<<endl;
	cout<<"��ǰСʱ����"<<time3.getHour()<<endl;
	return 0;
 } 
