#include<iostream>
#include<cstring>
#include"golf.h"
using namespace std;

void setgolf(const char* name, golf& g, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	cout << "enter name: ";
	cin.getline(g.fullname,Len);
	if (strcmp(g.fullname,"")==0)
		return 0;
	cout << "enter handicap: ";
	cin >> g.handicap;
	cin.get();
	return 1;
}

void showgolf(const golf& g)
{
	cout << "fullname: " << g.fullname << "   handicap: " << g.handicap << endl;
}