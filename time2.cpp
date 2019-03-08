#include "sore1.cpp"
#include "head1.h"
#include <iostream>
using namespace std;
int main()
{
	Time Time1;
	cout << "当前sec是：" << Time1.Getsec() << endl;
	cout << "当前分钟是：" << Time1.Getmin() << endl;
	cout << "当前小时是：" << Time1.Gethour() << endl;
	return 0;
}
