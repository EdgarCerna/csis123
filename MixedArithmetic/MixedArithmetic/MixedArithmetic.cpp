// MixedArithmetic.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int		iOne = 17;
	int		iTwo = 3;
	int		iValue;
	double	dValue;
	int		cnt = 0;

	dValue = iOne / static_cast<double>(iTwo);
	cout << endl << iOne << " / " << iTwo << " = " << dValue;

	cout << endl << endl;

	cout << endl << cnt   << endl;
	cout << endl << ++cnt << endl;
	cout << endl << cnt   << endl;

	cout << endl;
	system("pause");
    return 0;
}

