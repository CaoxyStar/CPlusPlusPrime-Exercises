#include<iostream>
#include<string>
#include<cstring>
#include<array>
using namespace std;

void p1()
{
	char first_name[128];
	char last_name[128];
	char letter;
	int age;

	cout << "what age:";
	cin >> age;
	cin.get();
	cout << "what first_name:";
	cin.getline(first_name, 128);
	cout << "what last_name:";
	cin.getline(last_name, 128);
	cout << "what grade:";
	cin >> letter;


	cout << "name:" << first_name << " " << last_name << endl;
	cout << "grade:" << char(letter+1)<< endl;
	cout << "age:" << age << endl;

	return;
}


void p2()
{
	const int Arsize = 20;   //¿ÉÈ¥µô
	string name;
	string dessert;

	cout << "enter your name:\n";
	getline(cin, name);
	cout << "enter your dessert:\n";
	getline(cin, dessert);

	cout <<name<< " , i have some decious " << dessert << " for you. \n";

	return;
}


void p3()
{
	char first_name[128];
	char last_name[128];
	
	cout << "enter your first_name: ";
	cin.getline(first_name, 128);
	cout << "enter your last_name: ";
	cin.getline(last_name, 128);

	cout << "your name is " << first_name << " " << last_name << endl;

	return;
}


void p4()
{
	string first_name;
	string last_name;

	cout << "enter your first name:";
	cin >> first_name;
	cout << "enter your last name:";
	cin >> last_name;

	cout<<" your name is " << first_name << " " << last_name << endl;

	return;
}


struct CandyBar
{
	string brand;
	double weight;
	int price;
};

void p5()
{
	CandyBar snack = { "Mocha Munch",2.3,350 };
	cout << "brand:" << snack.brand << "\tweight:" 
		<< snack.weight << "\tprice:" << snack.price << endl;
}


void p6()
{
	CandyBar candybar[3] =
	{
		{"nike",500,300},
		{"adiddas",500,250},
		{"lining",500,150}
	};

	cout << "brand:" << candybar[0].brand << "\tweight:"
		<< candybar[0].weight << "\tprice:" << candybar[0].price << endl;
	cout << "brand:" << candybar[1].brand << "\tweight:"
		<< candybar[1].weight << "\tprice:" << candybar[1].price << endl;
	cout << "brand:" << candybar[2].brand << "\tweight:"
		<< candybar[2].weight << "\tprice:" << candybar[2].price << endl;

	return;
}


struct Pizza
{
	string name;
	double size;
	double weight;
};

void p7()
{
	Pizza mypizza;
	cout << "enter the name of pizza:";
	getline(cin, mypizza.name);
	cout << "enter size:";
	cin >> mypizza.size;
	cout << "enter weight:";
	cin >> mypizza.weight;

	cout << "the pizza of " << mypizza.name << " is " << mypizza.size << " and "
		<< mypizza.weight << endl;

	return;
}


void p8()
{
	Pizza* pizza = new Pizza;

	cout << "enter size:";
	cin >> pizza->size;
	cin.get();
	cout << "enter name:";
	getline(cin, pizza->name);
	cout << "enter weight:";
	cin >> pizza->weight;

	cout << "the pizza of " << pizza->name << " is " << pizza->size << " and "
		<< pizza->weight << endl;

	return;
}


void p9()
{
	CandyBar* candybar9 = new CandyBar[3]{
		{"nike",500,300},
		{"adiddas",500,250},
		{"lining",500,150}
	};
	
	for (int i = 0; i < 3; i++)
	{
		cout << "brand:" << candybar9[0].brand << "\tweight:"
			<< candybar9[0].weight << "\tprice:" << candybar9[0].price << endl;
	}

	return;
}


void p10()
{
	array<double, 3>time;
	double avg_time;

	cout << "enter your grade:\n";
	cin >> time[0];
	cin >> time[1];
	cin >> time[2];

	avg_time = (time[0] + time[1] + time[2]) / 3;
	cout << "your three grade are: " << time[0] 
		<< "," << time[1] << "," << time[2] << endl;
	cout << "your avg_time is " << avg_time << endl;

	return;
}


int main()
{

	return 0;
}