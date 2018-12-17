// InputData.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	lastName;
	string	firstName;
	int		heightInches;
	double	weightPounds;
	int		heightFeet;
	int		remainderInches;

	cout << endl << "Enter First Name:  ";
	cin >> firstName;

	cout << endl << "Enter Last Name:  ";
	cin >> lastName;

	cout << endl << "Height in inches:  ";
	cin >> heightInches;

	cout << endl << "Weight in pounds:  ";
	cin >> weightPounds;

	heightFeet = heightInches / 12;
	remainderInches = heightInches % 12;

	cout << endl << endl;
	cout << lastName << ", " << firstName << "   ";
	cout << heightFeet << " feet  " << remainderInches << " inches    ";
	cout << weightPounds << " pounds";
	cout << endl << endl;

	cout << endl;
	system("pause");
    return 0;
}

