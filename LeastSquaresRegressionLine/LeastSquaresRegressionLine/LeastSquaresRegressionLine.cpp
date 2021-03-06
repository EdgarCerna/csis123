#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int nullVal = -999;		//used to decide if variable has a valid value

double bOneFunc(double r, double sy, double sx)
{
	double bOne;
	if (r != nullVal && sy != nullVal && sx != nullVal)
		bOne = r * (sy / sx);
	return bOne;
}

double bZeroFunc(double yBar, double xBar, double bOne)
{
	double bZero;
	if (yBar != -999 && xBar != -999 && bOne != -999)
	bZero = yBar - bOne * xBar;
	return bZero;
}

void leastSquareRLFunc(double bOne, double bZero)
{
	if (bOne != -999 && bZero != -999)
		cout << endl << "Least Square Regression Line:";
		cout << endl << fixed << setprecision(4) << "The equation is " << bZero << " + " << bOne << "x";
}

//void savingDataValues()

/*
double inputVal(string valType)
{
	double val;
	cout << "Input " << valType << ":  ";
	cin >> val;
	return val;
}
*/

int main()
{
	string nameValue;
	char response;
	double dataValue;

	double xBar = nullVal;			//list of all values possible in program
	double sx = nullVal;
	double yBar = nullVal;
	double sy = nullVal;
	double r = nullVal;
	double bOne = nullVal;
	double bZero = nullVal;

	cout << endl << "Welcome to Edgar's Statistics Program!";		//intro				
	cout << "\n\n\n" << "Enter QUIT to stop entering values and find answer" << endl
		<< "[Case Sensitive] Possible Values: xBar, sx, yBar, sy, r";
	cout << "\n\n" << "What type of value you are entering:  ";		//prompt user for name of the value
	cin >> nameValue;												//input name of the value

	while (nameValue != "QUIT")										//exit program by entering QUIT
	{
		cout << endl << "Enter the value of " << nameValue << ":  ";		//prompt use for value of the variable
		cin >> dataValue;													//input value

		if (nameValue == "xBar")											//set value to correct variable
		{
			xBar = dataValue;
		}
		else if (nameValue == "sx")
		{
			sx = dataValue;
		}
		else if (nameValue == "yBar")
		{
			yBar = dataValue;
		}
		else if (nameValue == "sy")
		{
			sy = dataValue;
		}
		else if (nameValue == "r")
		{
			r = dataValue;
		}
		else
		{
			cout << endl << "Invalid entry, try again";
		}

		cout << "\n\n\n" << "Enter N to stop entering values and find answer" << endl
			<< "[Case Sensitive] Possible Values: xBar, sx, yBar, sy, r";
		cout << "\n\n" << "What type of value you are entering:  ";
		cin >> nameValue;
	}

	bOne = bOneFunc (r, sy, sx);

	bZero = bZeroFunc(yBar, xBar, bOne);

	leastSquareRLFunc(bOne, bZero);

	cout << endl;
	system("pause");
    return 0;
}

