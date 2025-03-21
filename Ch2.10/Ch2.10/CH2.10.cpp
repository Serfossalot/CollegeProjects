/*
How Much Paint

A particular brand of paint covers 340 square feet per gallon. Write a program to determine and report
approximately how many gallons of paint will be needed to paint two coats on a wooden fence that is 6 feet
high and 100 feet long*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int paint = 340;
	int height = 6;
	int length = 100;
	float PaintNeeded = height * length * 2;
	float totalPaint = PaintNeeded / paint;
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The amount of paint you will need to cover " << height * length << " square feet of fence " << endl;
	cout << "with two coats of paint is " << totalPaint << " cans" << endl;
}