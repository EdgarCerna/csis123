// SetwidthExamples.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int		cnt = 0;
	string	lastName;
	string	firstName;
	int		age;
	double	balance;

	cout << fixed << setprecision(2);		//display all real numbers with two fixed decimal places

	cout << endl << "Last name:  ";
	cin >> lastName;

	while (lastName != "quit")
	{
		cnt ++;
		cout << endl << "First name:  ";
		cin >> firstName;
		cout << endl << "Current age:  ";
		cin >> age;
		cout << endl << "New balance $ ";
		cin >> balance;

		cout << endl << endl << setw(3) << cnt << ".  "
			 << left << setw(20) << lastName << setw(15) << firstName << "  "
			 << right << setw(3) << age << "   $" << setw(8) << balance << endl << endl;

		cout << endl << "  Last name:  ";		//prompt for next input
		cin >> lastName;						//accept next input
	}

	cout << endl;
	system("pause");
    return 0;
}

