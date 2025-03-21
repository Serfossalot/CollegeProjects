/*
6. Ingredient Adjuster

A cookie recipe calls for the following ingredients:
- 1.5 cups of sugar
- 1 cup of butter
- 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the user how
many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the
specified number of cookies.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float cookies;
	cout << "How many cookies would you like to bake today?" << endl;
	cin >> cookies;
	while (cookies < 0)
	{
		cout << "ERROR! Please type a positive number of cookies" << endl;
		cin >> cookies;
	}
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The amount of sugar needed to make " << cookies << " cookies is " << 1.5 * (cookies / 48) << " cups." << endl;
	cout << "The amount of butter needed to make " << cookies << " cookies is " << (cookies / 48) << " cups." << endl;
	cout << "The amount of flour needed to make " << cookies << " cookies is " << 2.75 * (cookies / 48) << " cups." << endl;
	return 0;
}
