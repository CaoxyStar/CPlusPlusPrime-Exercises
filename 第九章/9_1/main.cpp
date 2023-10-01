#include<iostream>
#include<cstring>
#include"golf.h"
using namespace std;

int main()
{
	golf g[10];
	int n = 0;
	cout << "enter players: " << endl;
	while ((n < 10) && (setgolf(g[n])))
	{
		n++;
		cout << "enter next player: " << endl;
	}

	cout << endl << "show all players: " << endl;
	for (int i = 0; i < n; i++)
	{
		showgolf(g[i]);
	}
}