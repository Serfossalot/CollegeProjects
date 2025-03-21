/*
Date

Design a class called Date. The class should store a date in three integers: month, day, and year. 
There should be member functions to print the date in the following forms:

12/25/2021
December 25, 2021
25 December 2021
Demonstrate the class by writing a complete program implementing it.

Input Validation:

Do not accept values for the day greater than 31 or less than 1.
Do not accept values for the month greater than 12 or less than 1.
*/
#include "Date.h"
int main()
{
	int month, day, year;

	cout << "Please enter the month." << endl;
	cin >> month;
	while (month < 1 || month > 12) //Input Validation
	{
		cout << "ERROR! Please enter a month in between 1 and 12." << endl;
		cin >> month;
	}
	cout << "Please enter the day." << endl;
	cin >> day;
	while (day < 1 || day > 31) //Input Validation
	{
		cout << "ERROR! Please enter a day in between 1 and 31." << endl;
		cin >> day;
	}
	cout << "What year is it?" << endl;
	cin >> year;

	Date date(month, day, year);
	date.printDate1();
	date.printDate2();
	date.printDate3();
}