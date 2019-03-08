#ifndef HEAD1_H
#define HEAD_H
#include<ctime>
class Time
{
	public:
	Time();
	int Gethour();
	int Getmin();
	int Getsec();
	void Settime();
	private:	
	long sec;
	long totalmins;
	long min;
	long totalhours,totalsecs;
	long hour;
	void gettime()
		{
		totalsecs=time(0);
		sec=totalsecs%60;
		totalmins=totalsecs/60;
		min=totalmins%60;
		totalhours=totalmins/60;
		hour=totalhours%24; 
		}
};
#endif
