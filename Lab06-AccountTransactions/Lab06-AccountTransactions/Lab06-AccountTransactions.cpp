#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char transCode;
	double balance = 0;
	double amt;

	cout << endl << "Deposit Withdraw Quit - D/W/Q:  ";
	cin >> transCode;
	transCode = toupper(transCode);

	while (transCode != 'Q')
	{
		if (transCode == 'D')
		{
			cout << endl << "Amount to Deposit:  ";
			cin >> amt;
			balance = balance + amt;
		}
		else if (transCode == 'W')
		{
			cout << endl << "Amount to Withdraw:  ";
			cin >> amt;
			balance = balance - amt;
		}
		else
		{
			cout << endl << "Transaction Code " << transCode << " is incorrect, try again.";
		}

		cout << endl << "Deposit Withdraw Quit - D/W/Q:  ";
		cin >> transCode;
		transCode = toupper(transCode);
	}

	cout << endl << fixed << setprecision(2) << "Account Balance:  $ " << balance;

	cout << endl << endl;
	system("pause");
    return 0;
}

