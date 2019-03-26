#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double *p = new double[n];
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		sum += p[i];
	}
	double a = sum / n;
	cout << a << endl;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i] > a)
			count++;
	}
	cout << count << endl;
	return 0;
}

