// TutorialC++.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int iBase, n = 0;
	int iCalculate = 1;
	
	cout << "Zahl eingeben:" << endl;
	cin >> iBase;

	cout << "Potenz:" << endl;
	cin >> n;

	for (int i = 0; i < n;i = i + 1)
		iCalculate = iCalculate * iBase;

	cout << "\n\n" << iBase << "hoch" << n << "=" << iCalculate << "\n\n" <<endl;

	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();

    return 0;
}

