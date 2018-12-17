#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int inputVal;
	int sum = 0;
	int cnt = 0;
	int maxVal = -1;
	int minVal = -1;
	int evenCnt = 0;
	int oddCnt = 0;
	double avg;

	cout << endl << "Enter an integer (negative value to Quit):  ";
	cin >> inputVal;
	while (inputVal >= 0)
	{
		sum = sum + inputVal;
		cnt++;

		if (inputVal < minVal || minVal == -1)
		{
			minVal = inputVal;
		}
		if (inputVal > maxVal)
		{
			maxVal = inputVal;
		}

		if (inputVal % 2 == 0)
		{
			evenCnt++;
		}
		else
		{
			oddCnt++;
		}

		cout << endl << "Enter an integer (negative value to Quit):  ";
		cin >> inputVal;
	}

	avg = sum / static_cast<double>(cnt);

	if (cnt == 0)
	{
		avg = 0;
	}

	cout << endl << "Values Entered:  " << setw(8) << cnt;
	cout << endl << "Sum of Numbers:  " << setw(8) << sum;
	cout << endl << " Average Value:  " << setw(8) << avg;
	cout << endl << " Maximum Value:  " << setw(8) << maxVal;
	cout << endl << " Minimum Value:  " << setw(8) << minVal;
	cout << endl << "  Even Numbers:  " << setw(8) << evenCnt;
	cout << endl << "   Odd Numbers:  " << setw(8) << oddCnt;

	cout << endl << endl;
	system("pause");
    return 0;
}

