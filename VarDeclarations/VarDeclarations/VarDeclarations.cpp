// VarDeclarations.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const double SALES_CHARGE = 8.95;
	char orderCode;
	int qty;
	string customerName;
	double salesChargeAmount;

	cout << endl;
	cout << "Enter order code [A-H]:  ";
	cin >> orderCode;
	cout << endl << endl;

	cout << "Enter quantity ordered:  ";
	cin >> qty;
	cout << endl << endl;

	cout << "Enter name of customer:  ";
	cin >> customerName;
	cout << endl << endl;

	salesChargeAmount = SALES_CHARGE * qty;

	cout << fixed << setprecision(2);		//two digits to the right of the decimal
	cout << orderCode << " " << left << setw(20) << customerName 
		 << "    $ " << right << setw(10) << salesChargeAmount << endl;

	cout << endl;
	system("pause");
    return 0;
}

