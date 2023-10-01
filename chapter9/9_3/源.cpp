#include<iostream>
#include"БъЭЗ.h"
using namespace std;

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double total = 0.0;
		double max = ar[0];
		double min = ar[0];

		for (int i = 0; i < n; i++)
		{
			total += ar[i];
			s.sales[i] = ar[i];

			if (max < ar[i])
				max = ar[i];
			if (min > ar[i])
				min = ar[i];
		}
		s.average = total / n;
		s.max = max;
		s.min = min;
	}

	void setSales(Sales& s)
	{
		double total = 0.0;
		double max = 0.0;
		double min = 0.0;
		double input = 0.0;

		cout << "enter 4 double number: " << endl;
		for (int i = 0; i < quarters; i++)
		{
			cin >> input;
			if (i == 0)
			{
				min = input;
				max = input;
			}
			if (min > input)
				min = input;
			if (max < input)
				max = input;
			total += input;
			s.sales[i] = input;
		}
		s.average = total / quarters;
		s.max = max;
		s.min = min;
	}

	void showSales(const Sales& s)
	{
		int len = sizeof(s.sales) / sizeof(s.sales[0]);
		cout << "Sales: ";
		for (int i = 0; i < len; i++)
			cout << s.sales[i] << "  ";
		cout << endl;
		cout << "average: " << s.average << endl;
		cout << "max: " << s.max << endl;
		cout << "min: " << s.min << endl;
	}
}
