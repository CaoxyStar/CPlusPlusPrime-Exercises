#include<iostream>;
#include<string>;
#include<cctype>;
#include<cstring>;
using namespace std;

void fun_of_p8_1(char* str, int print_times=-1)
{
	if (print_times == -1)
		cout << "string: " << str << " , print_times: " << endl;
	else if (print_times >0 )
	{
		cout << "string: " << str << " , print_times: " << print_times << endl;
		print_times--;
		fun_of_p8_1(str, print_times);
	}
	return;
}

void p8_1()
{
	char str[128];
	int print_times = 0;
	cout << "enter the string: ";
	cin.getline(str, 128);
	cout << "enter the times: ";
	cin >> print_times;
	cout << "#1: " << endl;
	fun_of_p8_1(str, print_times);
	cout << "#2: " << endl;
	fun_of_p8_1(str);
}


struct CandyBar
{
	string name;
	double weight;
	int heat;
};

void p8_2_fill(CandyBar& candy, string name, double weight, int heat)
{
	candy.name = name;
	candy.weight = weight;
	candy.heat = heat;
}

void p8_2_show(CandyBar& candy)
{
	cout << "brand : " << candy.name << endl;
	cout << "weight : " << candy.weight << endl;
	cout << "heat : " << candy.heat << endl;
}

void p8_2()
{
	CandyBar candy;
	string name = "Stephen Curry";
	double weight = 27.3;
	int heat = 37;
	p8_2_fill(candy, name, weight, heat);
	p8_2_show(candy);
}


void p8_3_upper(string& str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

void p8_3()
{
	string str;
	cout << "enter string(q to quit) : ";
	getline(cin, str);
	while (str != "q")
	{
		p8_3_upper(str);
		cout << str << endl;
		cout << "enter string(q to quit) : ";
		getline(cin, str);
	}
	cout << "Bye!" << endl;
	return;
}


struct stringy {
	char* str;
	int ct;
};

void set(stringy& in_stringy, char in_string[])
{
	int string_lenth = strlen(in_string);
	in_stringy.str = new char[string_lenth + 1];
	in_stringy.str = in_string;
	in_stringy.ct = string_lenth;
}

void show(const char* str, int print_times = 1)
{
	for (int i = 0; i < print_times; i++)
		cout << str << endl;
}

void show(const stringy& pt, int print_times = 1)
{
	for (int i = 0; i < print_times; i++)
		cout << pt.str << endl;
}

void p8_4()
{
	stringy beany;
	char testing[] = "Reality isn't what it uesd to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return;
}


template<typename T>
T max5(const T arr[])
{
	T temp = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > temp)
			temp = arr[i];
	}
	return temp;
}

void p8_5()
{
	int arr1[5] = { 1,2,3,4,5 };
	double arr2[5] = { 1.2,5.7,3.4,56.5,79.2 };
	cout << max5(arr1) << endl;
	cout << max5(arr2) << endl;
}


template<typename T>
T maxn(T arr[], int size)
{
	T temp = 0;
	for (int i = 0; i < size; i++)
	{
		if (temp < arr[i])
			temp = arr[i];
	}
	return temp;
}

template<>const char* maxn(const char* in_str[],int n)
{
	const char* str = in_str[0];
	for (int i = 0; i < n; i++)
	{
		if (strlen(str) < strlen(in_str[i]))
		{
			str = in_str[i];
		}
	}
	return str;
}

void p8_6()
{
	int arr1[6] = { 1,2,3,4,5,6 };
	double arr2[4] = { 1.1,2.2,3.3,4.4 };
	const char* stringarr[5] = { "asd","qdqda","sdqddqqd","ad","qe" };
	cout<<maxn(arr1, 6)<<endl;
	cout << maxn(arr2, 4) << endl;
	cout << maxn(stringarr, 5) << endl;
}


int main()
{
	p8_6();
	return 0;
}
