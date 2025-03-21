/*
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
The number of millimeters higher than the current level that the ocean’s level will be in 7 years.
The number of millimeters higher than the current level that the ocean’s level will be in 10 years.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float five = 1.5 * 5;
	float seven = 1.5 * 7;
	float ten = 1.5 * 10;
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The ocean will be " << five << " millimeters higher than it is now in five years" << endl;
	cout << "The ocean will be " << seven << " millimeters higher than it is now in seven years" << endl;
	cout << "The ocean will be " << ten << " millimeters higher than it is now in ten years" << endl;
	return 0;
}