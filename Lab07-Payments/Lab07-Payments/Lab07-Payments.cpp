#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string lastName, firstName;
	int qty;
	double itemPrice;
	double totalPayment;
	double totalAmt = 0;

	ifstream payments;

	payments.open("Payments.txt");
	if (!payments)
	{
		cout << endl << "Error opening file" << endl;
		system("pause");
		return(-1);
	}

	payments >> lastName;

	while (!payments.eof())
	{
		payments >> firstName >> qty >> itemPrice;

		totalPayment = qty * itemPrice;
		totalAmt += totalPayment;

		cout << endl << setw(4) << right << qty << "   @   " << fixed << setprecision(2) << setw(10) << itemPrice
			<< "  " << setw(10) << totalPayment << "  " << left << lastName << ", " << firstName;

		payments >> lastName;
	}

	cout << "\n\n" << "      Total Amount:  $ " << totalAmt;

	payments.close();


	cout << endl << endl;
	system("pause");
    return 0;
}

