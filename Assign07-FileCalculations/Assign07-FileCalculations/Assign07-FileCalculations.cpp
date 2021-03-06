#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string	name;
	int	completeness, efficiency, creativity, safety, courtesy;		//all data values from file
	int	cnt = 0;													//counter starts at 0
	double	averagePer,	overallAvg;					//averagePer is per person and overallAvg is calculated after loop
	double	averageAccum = 0.0;						//accumulates all the averages from all employees

	ifstream inputStream;							//create variable name for ifstream 

	inputStream.open("Performance.txt");			//open file
	if (!inputStream)								//if file not found then send error message
	{
		cout << endl << "Error opening file";
		system("pause");
		return -1;									//error code "-1" means file not found
	}

	cout << endl << "Employee       Avg";
	cout << endl << "------------   ---";

	while (!inputStream.eof())						//while not end of file, run the loop
	{
		inputStream >> name >> completeness >> efficiency >> creativity >> safety >> courtesy;	//gather all data
		averagePer = (completeness + efficiency + creativity + safety + courtesy) / 5.0;		//calculate average for the employee
		cnt++;										//collects number of employees
		averageAccum += averagePer;					//collects value of all averages		

		cout << endl << fixed << setprecision(1) << setw(12) << name << "   " << setw(3) << averagePer;
	}

	overallAvg = averageAccum / cnt;				//accumulation of all averages / number of employees

	cout << "\n\n" << "Overall Avg:   " << overallAvg;		//split the "\n\n" and text to make easier to read

	cout << "\n\n";
	system("pause");
    return 0;
}

