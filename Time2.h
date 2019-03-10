#ifndef TIME2_H
#define TIME2_H
class Time
{
	public:
		Time();
		Time(int);
		Time(int,int,int);
		int getSec();
		int getMin();
		int getHour();
		void dealTime();
	//	void setTime(int elapseTime);
	private:
		int sec;
		int min;
		int hour;
		
	public:
		int totalsecs;
		int totalmins;
		int totalhours;
};
#endif
