/*
1. Markup
Write a program that asks the user to enter an item’s wholesale cost and its markup percentage.
It should then display the item’s retail price. For example:

If an item’s wholesale cost is 5.00 and its markup percentage is 100 percent, then the item’s retail price
is 10.00.
If an item’s wholesale cost is 5.00 and its markup percentage is 50 percent, then the item’s retail price is
7.50.
The program should have a function named calculateRetail that receives the wholesale cost and the markup
percentage as arguments and returns the retail price of the item.

Input Validation: Do not accept negative values for either the wholesale cost or the markup percentage.*/
#include <iostream>
#include <iomanip>
using namespace std;
float calculateRetail(float, float);

int main()
{
	float wholesale = 0.0;
	float percent = 0.0;
	cout << "Please enter the wholesale dollar amount of the item:" << endl;
	cin >> wholesale;
	while (wholesale < 0)
	{
		cout << "ERROR! Please enter a positive value for wholesale cost" << endl;
		cin >> wholesale;
	}
	cout << "Please enter the markup (if it is 50%, then type 50 and press enter)" << endl;
	cin >> percent;
	while (percent < 0)
	{
		cout << "ERROR! Please enter a positive value for the markup percentage" << endl;
		cin >> percent;
	}
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "Your item's wholesale price is $" << wholesale << "." << endl;
	cout << "Your item is being marked up " << percent << "%." << endl;
	cout << "Your item's price after being marked up is $" << calculateRetail(wholesale, percent) << endl;
	return 0;
}

float calculateRetail(float w_sale, float p_cent)
{
	float totalPrice = w_sale + (w_sale * p_cent / 100);
	return totalPrice;
}