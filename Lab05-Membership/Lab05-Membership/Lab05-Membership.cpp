#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	const double REGULAR_COST = 85.00;
	const double LIFETIME_COST = 495.00;
	const double DISCOUNT = 0.32;
	string familyName;
	char type;
	int membershipCount;
	double membershipCost, totalCost;

	cout << endl << "Enter Family name:  ";
	cin >> familyName;
	cout << endl << "Reg or Life - R/L?  ";
	cin >> type;
	cout << endl << " Membership count:  ";
	cin >> membershipCount;

	if (type == 'L' || type == 'l')
		membershipCost = LIFETIME_COST;
	else
		membershipCost = REGULAR_COST;

	if (membershipCount >= 5)
		membershipCost = membershipCost * (1 - DISCOUNT);

	totalCost = membershipCost * membershipCount;

	cout << endl << endl << fixed << setprecision(2) << membershipCount << " memberships @ $ " << membershipCost
		<< "  =  $ " << totalCost;

	cout << endl << endl;
	system("pause");
    return 0;
}

