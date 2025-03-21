/*Miles per Gallon

Write a program that calculates a car’s gas mileage. The program should ask the user to enter the number of
gallons of gas the car can hold, and the number of miles it can be driven on a full tank. It should then display
the number of miles that may be driven per gallon of gas.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float numGallons = 0.0;
	float numDriven = 0.0;

	cout << "How many gallons of gas can your car hold? (Enter positve values only)" << endl;
	cin >> numGallons;

	while (numGallons < 0) {
		cout << "You have entered a negative value, please enter a positive value" << endl;
		cin >> numGallons;
	}

	cout << "The value you entered is " << numGallons << endl;
	cout << endl;

	cout << "How many miles can you drive on a full tank of gas? (Enter positve values only)" << endl;
	cin >> numDriven;
	cout << endl;

	while (numDriven < 0) {
		cout << "You have entered a negative value, please enter a positive value" << endl;
		cin >> numDriven;
	}

	cout << "The value you entered is " << numDriven << endl;
	cout << endl;
	
	cout << setprecision(2) << showpoint << fixed << endl;
	cout << "Your car gets " << numDriven / numGallons << " miles per gallon" << endl;

	return 0;
}