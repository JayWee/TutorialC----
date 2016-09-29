// TutorialC++.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int iLoop = 1;

	while (iLoop)
	{
		int a;
		cout << "Zahl eingeben:" << endl;
		cin >> a;
		cout << "int:" << sizeof(int) << endl;
		cout << "char:" << sizeof(char) << endl;
		cout << "double" << sizeof(double) << endl;
		cout << "a:" << a << endl;
		cin >> iLoop;
	}

    return 0;
}

