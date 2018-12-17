#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

string nameFormat(string lastName, string firstName);
double	orderAmount(double itemPrice, int qty);
double	salesTaxAmount(double orderTotal, double SALES_TAX_RATE);
void	displayOutput(string nameString, double orderTotal, double salesTax);

int main()
{
	const double SALES_TAX_RATE = 0.09265;

	string lastName, firstName;
	int qty;
	double itemPrice;

	string nameString;		//hold returned formatted name string: lastName, firstName
	double orderTotal;		//hold returned value of order total (qty * itemPrice)
	double salesTax;		//hold returned shipping cost calculated from qty and order amount
	ifstream salesTrans;

	salesTrans.open("SalesTransactions.txt");
	if (!salesTrans)
	{
		cout << endl << "Could not find file  SalesTransactions.txt  check file directory" << endl;
		system("pause");
		return -1;
	}

	salesTrans >> lastName;
	while (!salesTrans.eof())
	{
		salesTrans >> firstName >> qty >> itemPrice;
		
		nameString = nameFormat(lastName, firstName);
		orderTotal = orderAmount(itemPrice, qty);
		salesTax = salesTaxAmount(orderTotal, SALES_TAX_RATE);

		displayOutput(nameString, orderTotal, salesTax);

		salesTrans >> lastName;
	}
	salesTrans.close();

	cout << endl << endl;
	system("pause");
    return 0;
}

string nameFormat(string lastName, string firstName)
{
	string fullName;
	fullName = lastName + ", " + firstName;

	return fullName;
}

double orderAmount(double itemPrice, int qty)
{
	double total;
	total = itemPrice * qty;

	if (total > 300.00)
	{
		total *= 0.9;
	}

	return total;
}

double salesTaxAmount(double orderTotal, double SALES_TAX_RATE)
{
	double total;
	total = orderTotal * SALES_TAX_RATE;

	return total;
}

void displayOutput(string nameString, double orderTotal, double salesTax)
{
	cout << endl << fixed << setprecision(2) << left << setw(25) << nameString << right << setw(9) << orderTotal << setw(8) << salesTax;
}