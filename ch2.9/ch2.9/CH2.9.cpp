/*
Energy Drink Consumption

A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent
of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks,
approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the
following:
The approximate number of customers in the survey who purchase one or more energy drinks per week.
The approximate number of customers in the survey who prefer citrus-flavored energy drinks.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int customers = 16500;
	float oneplus = .15 * customers;
	float citrus = .58 * oneplus;
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << oneplus << " customers surveyed purchase one or more energy drinks per week.\n";
	cout << citrus << " of them prefer the citrus flavor.\n";
	return 0;
}