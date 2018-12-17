#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double BASIC_RESIDENTIAL = 18.50;
	const double BASIC_BUSINESS	= 75.00;
	const double CONNECT_RESIDENTIAL = 6.50;
	const double CONNECT_BUSINESS = 5.00;
	const double PREMIUM_RESIDENTIAL = 7.50;
	const double PREMIUM_BUSINESS = 50.00;
	double setCost, additionalCost, premiumCost, total;
	char type;
	int additionalConnections, premiumChannels;

	cout << endl << "Residential or Business [R or B]?  ";
	cin >> type;
	cout << endl << "How many  Additional Connections?  ";
	cin >> additionalConnections;
	cout << endl << "Total number of Premium Channels:  ";
	cin >> premiumChannels;


	if (type == 'B' || type == 'b')
	{
		setCost = BASIC_BUSINESS;
		additionalCost = CONNECT_BUSINESS;
		premiumCost = PREMIUM_BUSINESS;
	}
	else
	{
		setCost = BASIC_RESIDENTIAL;
		additionalCost = CONNECT_RESIDENTIAL;
		premiumCost = PREMIUM_RESIDENTIAL;
	}

	if (type == 'B' && additionalConnections <= 10 || type == 'b' && additionalConnections <= 10)
		additionalConnections = 0;
	else if (type == 'B' && additionalConnections > 10 || type == 'b' && additionalConnections > 10)
		additionalConnections = additionalConnections - 9;

	total = setCost + (additionalConnections * additionalCost) + (premiumChannels * premiumCost);

	cout << endl << fixed << setprecision(2) << "Total amount of Cable Bill:  $ " << total;

	cout << endl << endl;
	system("pause");
    return 0;
}

