/*
Team#: ___
Team Member-1:________________________ Member’s Contribution (in %) __
Team Member-2:________________________ Member’s Contribution (in %) __
Team Member-3:________________________ Member’s Contribution (in %) __
Problem Statement: Design a class called NumDays. The class’s purpose is to
store a value that represents a number of work hours and convert it to a number
of days. For example, 8 hours would be converted to 1 day, 12 hours would be
converted to 1.5 days, and 18 hours would be converted to 2.25 days. The class
should have a constructor that accepts a number of hours [20 points], as well as
member functions for storing and retrieving the hours and days [20 points].
*/
#include <iostream>
#include "NumDays.h"
using namespace std;

int main()
{
	float hours1;
	float hours2;

	cout << " Value 1 in hours" << endl;
	cin >> hours1;

	cout << " Value 2 in hours" << endl;
	cin >> hours2;

	NumDays Value1(hours1);
	NumDays Value2(hours2);
	NumDays Value3;
	Value3 = Value1 + Value2;

	cout << "Value 1 in days : " << Value1.getDays() << endl;
	cout << "Value 2 in days : " << Value2.getDays() << endl;
	cout << "Sum of the Values in days(Value3): " << Value3.getDays() << endl;



	return 0;
}