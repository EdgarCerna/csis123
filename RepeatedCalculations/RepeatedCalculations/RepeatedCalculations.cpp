#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double addValue = 100;
	double subValue = 100;
	double mltValue = 1;
	double divValue = 1048576;

	int loopCnt = 0;

	while (loopCnt <= 20)
	{
		cout << endl << setw(3) << loopCnt << ".   ";
		cout << fixed << setprecision(0);
		cout << setw(10) << addValue << setw(10) << subValue;
		cout << setw(10) << mltValue << setprecision(6) << setw(20) << divValue;

		addValue += 5;		// equivalent to addValue = addValue + 5
		subValue -= 5;		// equivalent to subValue = subValue - 5
		mltValue *= 2;		// equivalent to mltValue = mltValue * 5
		divValue /= 2;		// equivalent to divValue = divVlaue / 5

		loopCnt++;			// equivalent to loopCnt = loopCnt + 1
	}

	cout << endl;
	system("pause");
    return 0;
}

