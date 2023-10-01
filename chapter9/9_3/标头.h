#pragma once
namespace SALES
{
	const int quarters = 4;
	struct Sales
	{
		double sales[quarters];
		double average;
		double max;
		double min;
	};

	void setSales(Sales& s, const double ar[], int n);
	void setSales(Sales& s);
	void showSales(const Sales& s);
}