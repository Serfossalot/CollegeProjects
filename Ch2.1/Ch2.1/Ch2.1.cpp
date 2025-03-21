/*
Programmer: Joel Serfoss

Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax.
Display the meal cost, tax amount, tip amount, and total bill on the screen.*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
	const float TAX = .0675;
	float bill = 88.67;
	const float tip = .2;
	float taxtotal = (TAX * bill);
	float tiptotal = (bill + taxtotal)* tip;
	float billtotal = tiptotal + taxtotal + bill;

	cout << fixed << setprecision(2) << showpoint << endl;

	cout << "The cost of your dinner was $" << bill << endl;
	cout << "The tax on your dinner was $" << taxtotal << endl;
	cout << "The tip you gave was generous and amounted to $" << tiptotal << endl;
	cout << "The total cost to you this evening was $" << billtotal << endl;

	return 0;
}