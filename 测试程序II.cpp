#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int sec;
	int min;
	int hour;
	int totalsecs;
	int totalmins, totalhours;
	totalsecs=time(0);
		sec=totalsecs%60;
		totalmins=totalsecs/60;
		min=totalmins%60;
		totalhours=totalmins/60;
		hour=totalhours%24;
		cout << "当前sec是：" << sec << endl;
		cout << "当前分钟是：" << min << endl;
		cout << "当前小时是：" << hour<< endl;
 } 
