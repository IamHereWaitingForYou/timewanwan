#include "sore1.cpp"
#include "head1.h"
#include <iostream>
using namespace std;
int main()
{
	Clock Time1;
	cout << "��ǰsec�ǣ�" << Time1.getsec() << endl;
	cout << "��ǰ�����ǣ�" << Time1.getmin() << endl;
	cout << "��ǰСʱ�ǣ�" << Time1.gethour() << endl;
	return 0;
}
