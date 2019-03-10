#include "sore1.cpp"
#include "head1.h"
#include <iostream>
using namespace std;
int main()
{
	Clock Time1;
	cout << "当前sec是：" << Time1.getsec() << endl;
	cout << "当前分钟是：" << Time1.getmin() << endl;
	cout << "当前小时是：" << Time1.gethour() << endl;
	return 0;
}
