#include<iostream>
#include<string>
using namespace std;

void strcount(const string str)
{
	static int total = 0;
	int count = 0;
	count = str.length();
	total += count;
	cout << str << " contains " << count << 
		" characters\n" << total << " characters total" << endl;
}

int main()
{
	string input;
	cout << "enter str(q to quit): ";
	getline(cin,input);
	while (input !="q")
	{
		strcount(input);
		cout << "enter next str(q to quit):";
		getline(cin, input);
	}
	cout << "Bye!" << endl;
}