/*Problem:

A car holds 15 gallons of gasoline and can travel 375 miles before refueling.

Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):

MPG = Miles Driven / Gallons of Gas Used
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int gallons = 15;
	int drive = 375;
	float mpg = static_cast<float>(drive) / gallons;
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "Your car gets " << mpg << " miles per gallon" << endl;
 }