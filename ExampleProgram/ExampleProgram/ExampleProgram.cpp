// ExampleProgram.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double DISCOUNT = 0.15;
	int qty;
	double price;
	char itemCode;
	string lastName;
	double orderAmt;

	cout << endl << "Enter quantity:  ";
	cin >> qty;
	cout << endl << "Enter the price:  ";
	cin >> price;

	orderAmt = (price * qty) * (1.0 - DISCOUNT);

	cout << endl << endl << '$' << orderAmt << endl;

	cout << endl;
	system("pause");
    return 0;
}

