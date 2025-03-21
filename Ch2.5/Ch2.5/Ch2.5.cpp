/*
A customer in a store is purchasing five items. The prices of the five items are as follows:

Price of item 1 = $15.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $12.95
Price of item 5 = $3.95
Write a program that holds the prices of the five items in five variables. Display each item’s price,
the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 7 percent.

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float TAX = .07;
	float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;
	float subTotal = item1 + item2 + item3 + item4 + item5;
	float totalTax = subTotal * TAX;
	float totalSale = totalTax + subTotal;

	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The price of item 1 is $" << item1 << endl;
	cout << "The price of item 2 is $" << item2 << endl;
	cout << "The price of item 3 is $" << item3 << endl;
	cout << "The price of item 4 is $" << item4 << endl;
	cout << "The price of item 5 is $" << item5 << endl;
	cout << endl;
	cout << "The subtotal for all of your items is $" << subTotal << endl;
	cout << endl;
	cout << "Tax on your purchase amounts to $" << totalTax << endl;
	cout << endl;
	cout << "Bringing the grand total to $" << totalSale << endl;

	return 0;

}