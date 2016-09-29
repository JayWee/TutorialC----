// TutorialC++.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int i = 0;
	cout << "Zahl eigeben:" << endl;
	cin >> i;

	switch (i)
	{
	case 0:
	case 1:
	case 2:
		cout << i << endl;
		break;
	default:
		cout << "n>2";
		break;

	}

    return 0;
}

