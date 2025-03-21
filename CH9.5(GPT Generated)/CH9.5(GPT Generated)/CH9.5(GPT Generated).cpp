/*
Problem: Circle Properties with Pointers
Write a program that does the following:

Dynamically allocates two variables: radius and circumference.
Prompts the user to input the radius of a circle.
Passes pointers to these variables to a function named calculateCircle, which:
Calculates the circumference using the formula:
circumference = 2 * 3.14159 * radius
Doubles the radius inside the function.
Calculates the new circumference using the doubled radius.
Returns the new circumference.
After the function call, display:
The original radius and circumference.
The updated radius and the new circumference.*/
#include <iostream>
#include<iomanip>
using namespace std;
float calculateCircle(float*);

int main()
{
	float* rad = new float(0);
	float circumference;
	cout << "Please specify the radius of the circle we will be working with." << endl;
	cin >> *rad;
	while (*rad < 0)
	{
		cout << "ERROR! Please enter a non-negative number." << endl;
		cin >> *rad;
	}
	circumference = *rad * 2 * 3.14159;
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The radius before being altered by the function is " << *rad << " inches." << endl;
	cout << "The circumference is " << circumference << " inches before the function runs." << endl;
	cout << "The circumference after the function altered it, is equal to " << calculateCircle(rad) << " inches." << endl;
	delete rad;
	return 0;
}
float calculateCircle(float* r) {
	float circumference2 = (2 * *r) * 2 * 3.14159;
	float radius2 = *r * 2;
	cout << endl;
	cout << "The radius after the function altered it, is now equal to " << radius2 << " inches" << endl;
	return circumference2;
}
