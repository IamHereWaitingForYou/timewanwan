#include<iostream>
#include"Time2.h"
#include<ctime>
//using namespace std;
Time::Time()
{
	totalsecs=time(0);
}
Time::Time(int a)
{
	totalsecs=a; 
} 
Time::Time(int ksec,int kmin,int khour)
{
	sec=ksec;
	min=kmin;
	hour=khour;
}
void Time::dealTime()
{
		sec=totalsecs%60;
		totalmins=totalsecs/60;
		min=totalmins%60;
		totalhours=totalmins/60;
		hour=totalhours%24;
}
int Time::getSec()
{
	return sec;
}
int Time::getMin()
{
	return min;
}

int Time::getHour()
{
	return hour;
}
//void Time::setTime(int elapseTime)
//{
//	totalsecs=elapseTime;
//}
