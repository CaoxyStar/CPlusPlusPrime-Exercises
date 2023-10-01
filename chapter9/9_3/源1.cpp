#include"БъЭЗ.h"
#include<iostream>
using namespace std;

int main()
{
	SALES::Sales sale1;
	SALES::Sales sale2;

	double ar[4] = { 32.1,23.2,65.3 ,151};
	SALES::setSales(sale1, ar, 4);
	SALES::setSales(sale2, ar, 4);

	SALES::showSales(sale1);
	SALES::showSales(sale2);
}