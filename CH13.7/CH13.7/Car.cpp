#include "Vehicle.h"
#include "Car.h"

//Constructor
Car::Car(string mk, string mod, int y, int nd)
{
	make = mk;
	model = mk;
	year = y;
	numdoors = nd;
}

void Car::displayInfo() const
{
	cout << "***Car Details***" << endl;
	cout << "Year :" << year << endl;
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Number of doors: " << numdoors << endl;
}