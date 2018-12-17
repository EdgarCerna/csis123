// TempConvert.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int		fahrenheit;
	double	celsius;

	cout << endl;
	cout << "Enter the temperature in degrees Fahrenheit:   ";
	cin >> fahrenheit;

	celsius = static_cast<int>(5 / 9.0 * (fahrenheit - 32) + 0.5);

	cout << endl << endl;
	cout << "Fahrenheit degrees:  " << setw(3) << fahrenheit << "  Celsius degrees:  " << setw(3) << celsius << endl << endl;

	cout << endl;
	system("pause");
    return 0;
}

