#include<iostream>
#include<cctype>
#include<array>
#include<string>
#include<fstream>
using namespace std;

void p6_1()
{
	char ch = 0;
	cout << "enter content: \n";
	while ((ch = cin.get()) != '@')
	{
		if (isupper(ch))
			cout << (char)tolower(ch);
		else if (islower(ch))
			cout << (char)toupper(ch);
		else if (isdigit(ch))
			continue;
	}
	cout << ch << endl;
	return;
}


void p6_2()
{
	const int SIZE = 10;
	array<double, SIZE>numberlist;
	double sum = 0;
	int count = 0;
	int new_count = 0;
	cout << "enter number: \n";
	while (count<10&&cin >> numberlist[count])    /*cout<10该条件须在前我还有？*/
	{
		sum += numberlist[count];
		count++;
	}
	double avg = sum / count;
	for (int j = 0; j < count; j++)
	{
		if (numberlist[j] > avg)
			new_count++;
		else
			continue;
	}

	cout << "avg_number = " << avg << "\nnew_count = " << new_count << endl;
	return;
}


void p6_3()
{
	char ch;
	cout << "Please enter one of the following choice: \n";
	cout << "c)carnivore\tp)pianist\t\nt)tree\tg)game\n";
	while (cin >> ch)
	{
		if (ch == 'c' || ch == 'p' || ch == 't' || ch == 'g'||
			ch == 'C' || ch == 'P' || ch == 'T' || ch == 'G')
			break;
		else
			cout << "Please enter valid letter again: ";
	}
	switch (ch)
	{
	case 'c':
	case 'C':cout << "maple is carnivore.\n";
		break;
	case 'p':
	case 'P':cout << "maple is pianist.\n";
		break;
	case 't':
	case 'T':cout << "maple is tree.\n";
		break;
	case 'g':
	case 'G':cout << "maple is game.\n";
		break;
	}
	return;
}


struct Bop {
	char fullname[20];
	char title[20];
	char bopname[20];
	int performance;
};

void p6_4()
{
	Bop arrayname[3] = {
		{"curry","GSW","cxy",0},
		{"james","lal","jjb",1},
		{"durant","okc","xyx",1}
	};
	cout << "enter your way: \na.byname\tb.bytitle\tc.bybopname\td.bypreference\tq.quit\n";
	char ch;
	while (cin >> ch)
	{
		if (ch == 'q')
		{
			cout << "you quit!" << endl;
			break;
		}
			
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 3; i++)
				cout << arrayname[i].fullname << "\t" << endl;
			break;
		case 'b':
			for (int i = 0; i < 3; i++)
				cout << arrayname[i].title << "\t" << endl;
			break;
		case 'c':
			for (int i = 0; i < 3; i++)
				cout << arrayname[i].bopname << "\t" << endl;
			break;
		case 'd':
			for (int i = 0; i < 3; i++)
				if (arrayname[i].performance == 0)
					cout << arrayname[i].title;
				else if (arrayname[i].performance == 1)
					cout << arrayname[i].bopname;
			break;
		default:
			break;
		}
		cout << "choose again: ";
	}
	return;
}


void p6_5()
{
	cout << "enter your salary: " << endl;
	double salary;
	double tax;
	cin >> salary;
	if (salary <= 5000)
		tax = 0;
	else if (salary > 5000 && salary <= 15000)
		tax = (salary - 5000) * 0.1;
	else if (salary > 15000 && salary <= 35000)
		tax = (salary - 15000) * 0.15 + 1000;
	else if (salary > 35000)
		tax = (salary - 35000) * 0.2 + 4000;
	cout << "your tax: " << tax << endl;
	return;
}


struct Pat
{
	string name;
	double amount;
};

void p6_6()
{
	int pat_count;
	cout << "enter the pat_count: ";
	cin >> pat_count;
	cin.get();

	Pat* founderarray = new Pat[pat_count];
	for (int i = 0; i < pat_count; i++)
	{
		cout << "patrons" << i + 1 << "\nname: ";
		getline(cin, founderarray[i].name);
		cout << "amount: ";
		cin >> founderarray[i].amount;
		cin.get();
	}

	cout << "Grand Patrons: \n";
	for (int i = 0; i < pat_count; i++)
	{
		if (founderarray[i].amount >= 10000)
			cout << "name: " << founderarray[i].name << "\tamount: "
			<< founderarray[i].amount << endl;
		else
			continue;
	}

	cout << "Patrons: \n";
	for (int i = 0; i < pat_count; i++)
	{
		if (founderarray[i].amount < 10000)
			cout << "name: " << founderarray[i].name << "\tamount: "
			<< founderarray[i].amount << endl;
		else
			continue;
	}
	return;
}


void p6_7()
{
	int yuan = 0;
	int fuyin = 0;
	int others = 0;
	string word;

	cout << "enter word(q to quit): \n";
	while (cin >> word)
	{
		if (word.length() == 1 && word[0] == 'q')
			break;
		if (isalpha(word[0]))
		{
			if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
				yuan++;
			else
				fuyin++;
		}
		else
			others++;
	}

	cout << yuan << " words beginning with vowels\n";
	cout << fuyin << " words beginning with consonants\n";
	cout << others << " others\n";
	return;
}


void p6_8()
{
	string filename;
	ifstream inFile;
	int sum = 0;
	char ch;

	cout << "enter the filename: ";
	getline(cin, filename);

	inFile.open(filename);
	if (!inFile.is_open())
	{
		exit(EXIT_FAILURE);
	}
	while ((ch = inFile.get()) != EOF)
	{
		sum++;
	}

	cout << "There are " << sum << " characters in " << filename << " file." << endl;
	return;
}


void p6_9()
{
	ifstream infile;
	infile.open("example.txt");

	int pat_count=0;
	infile >> pat_count;
	infile.get();

	Pat* founderarray = new Pat[pat_count];
	for (int i = 0; i < pat_count; i++)
	{
		getline(infile, founderarray[i].name);
		infile >> founderarray[i].amount;
		infile.get();
	}

	cout << "Grand Patrons: \n";
	for (int i = 0; i < pat_count; i++)
	{
		if (founderarray[i].amount >= 10000)
			cout << "name: " << founderarray[i].name << "\tamount: "
			<< founderarray[i].amount << endl;
		else
			continue;
	}

	cout << "Patrons: \n";
	for (int i = 0; i < pat_count; i++)
	{
		if (founderarray[i].amount < 10000)
			cout << "name: " << founderarray[i].name << "\tamount: "
			<< founderarray[i].amount << endl;
		else
			continue;
	}
	return;
}


int main()
{

	return 0;
}