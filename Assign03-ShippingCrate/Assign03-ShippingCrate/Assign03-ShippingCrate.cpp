#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int length, width, height;
	double edgeLength, surfaceArea, interiorVolume, plywoodCost, strappingCost, manufacturingCost, estimatedCost;
	const double PLYWOOD_COST = 0.54;
	const double STRAP_COST = 1.03;
	const double LABOR_COST = 3.37;
	const double MARKUP_RATE = .35;

	cout << endl << "== Cost Estimate for Custom Crate ==";
	cout << endl << "Enter length in inches:  ";
	cin >> length;
	cout << endl << "Enter  width in inches:  ";
	cin >> width;
	cout << endl << "Enter height in inches:  ";
	cin >> height;

	edgeLength = (4 * (length + width + height)) / 12.0;		//linear feet
	surfaceArea = (2 * (length * width + length * height + width * height)) / 144.0;		//square feet
	interiorVolume = (length - 1) * (width - 1) * (height - 1) / 1728.0;		// Cubic feet

	plywoodCost = surfaceArea * PLYWOOD_COST;
	strappingCost = edgeLength * STRAP_COST;
	manufacturingCost = plywoodCost + strappingCost + LABOR_COST;
	estimatedCost = manufacturingCost + (manufacturingCost * MARKUP_RATE);

	cout << endl << "Interior volume of finished crate:  " << fixed << setprecision(2) << setw(8)
		 << interiorVolume << "  cubic feet";
	cout << endl << endl << "Estimated cost  of finished crate:  " << setw(8) << estimatedCost << "  dollars";

	cout << endl << endl;
	system("pause");
    return 0;
}

