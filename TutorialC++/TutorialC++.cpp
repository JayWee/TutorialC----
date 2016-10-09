// TutorialC++.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int i = 0;
	int j = 0;
	int k;
	int iHPGegner;
	int l;
	int iHPTeam;
	int iGegner[5][3] =
	{
		{ 100, 0, 30 },
		{ 80, 1, 40 },
		{ 200, 2, 20 },
		{ 150, 3, 50 },
		{ 130, 4, 15 },
	};
	int iTeam[5][3] =
	{
		{ 100, 0, 30 },
		{ 80, 1, 40 },
		{ 200, 2, 20 },
		{ 150, 3, 50 },
		{ 130, 4, 15 },
	};
	
	cout << "Gegner Nummer:" << endl;
	cin >> i;

	cout << "Team Nummer:" << endl;
	cin >> j;

	k = i - 1;
	l = j - 1;

	cout << "Gegner Nummer " << i << " hat " << iGegner[k][0] << " HP" << endl;
	cout << "Team Nummer " << j << " hat " << iTeam[l][0] << " HP" << endl;

	cout << "Beide Spieler Kämpfen gegeneinander" << endl;

	iGegner[k][0] = iGegner[k][0] - iTeam[l][2];
	iTeam[l][0] = iTeam[l][0] - iGegner[k][2];

	cout << "Gegner Nummer " << i << " hat noch " << iGegner[k][0] << "HP" << endl;
	cout << "Team Nummer " << j << " hat noch " << iTeam[l][0] << "HP" << endl;

	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();

    return 0;
}

