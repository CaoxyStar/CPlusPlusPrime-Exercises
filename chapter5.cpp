#include<iostream>
#include<string>
#include<cstring>
#include<array>
using namespace std;


void p1()
{
	int a = 0;
	int b = 0;
	int allnumber = 0;

	cout << "enter the start number: \n";
	cin >> a;
	cout << "enter the end number: \n";
	cin >> b;

	for (int i = a; i < b + 1; i++)
	{
		allnumber += i;
	}

	cout << "the sum number: " << allnumber << endl;
}


const int Arsize = 100;
void p2()
{
	array<long double, Arsize+1>factorials;
	factorials[0] = factorials[1] = 1;

	for (int i = 2; i <= Arsize ; i++)
	{
		factorials[i] = factorials[i - 1] * i;
	}

	for (int j = 0; j <=  Arsize; j++)
	{
		cout << j << "!=" << factorials[j] << endl;
	}
}


void p3()
{
	int number = 0;
	int sum = 0;

	cout << "enter number (enter 0 to exit)]: ";
	cin >> number;
	while (number != 0)
	{
		sum += number;
		cout << "now sum = " << sum << endl;
		cout << "enter number (enter 0 to quit)]: ";
		cin >> number;
	}
}


void p4()
{
	int a = 100;
	int b = 100;
	int year = 0;
	while (a>=b)
	{
		a += 10;
		b *= 1.05;
		year += 1;
	}
	cout << year << " years b exceed a , and this year a = " << a
		<< " , b = " << b << endl;
}


void p5_6()
{
	int sellsum[3] = { 0 };
	string month[12] = { "Jan","Feb","Mar","Apr","May","Jun","Jul",
		"Aug","Sept","Oct","Nov","Dec" };
	int sellsize[3][12] = { 0 };

	for (int j = 0; j < 3; j++)
	{
		cout << "the " << j +1<< " year sale: \n";
		for (int i = 0; i < 12; i++)
		{
			cout << "enter " << month[i] << "'s sellnumber: ";
			cin >> sellsize[j][i];
			sellsum[j] += sellsize[j][i];
		}
		cout << "the " << j + 1 << " year sellsize is : " << sellsum[j] << endl;
	}
	
	
	cout << "the all year sellsize is " << 
		sellsum[0] + sellsum[1] + sellsum[2] << endl;
	
}


struct Car
{
	string brand;
	int year;
};

void p7()
{ 
	int size = 0;
	cout << "how many cars do you wish to catalog?";
	cin >> size;
	cin.get();

	Car *cararray = new Car[size] ;
	cout << "please enter your cars datas: \n";
	
	for (int i = 0; i < size; i++)
	{
		cout << "enter the "<<i+1<<" car's brand: ";
		getline(cin, cararray[i].brand);
		cout << "enter the " << i + 1 << " car's year: ";
		cin >> cararray[i].year;
		cin.get();
	}

	cout << "here is your collection: \n";
	for (int i = 0; i < size; i++)
	{
		cout << cararray[i].brand << "\t" << cararray[i].year << endl;
	}
}


void p8()
{
	int n_word = 0;
	char input[128];
	cout << "enter words: \n";
	while (cin >> input)
	{
		if (strcmp(input, "done"))
		{
			n_word++;
		}
		else
			break;
	}
	cout << "your entered a total of " << n_word << " words." << endl;
}


void p9()
{
	int n_word = 0;
	string input;
	cout << "enter words: \n";
	while (cin >> input)
	{
		if (input != "done")
		{
			n_word++;
		}
		else
			break;
	}
	cout << "your entered a total of " << n_word << " words." << endl;
}


void p10()
{
	int row = 0;
	cout << "enter your aimed rows: ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < (row - i - 1); j++)
		{
			cout << ".";
		}
		for (int k = 0; k < (i + 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}


int main()
{
	p5_6();
	return 0;
}