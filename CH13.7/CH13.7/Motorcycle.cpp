#include "Vehicle.h"
#include "Motorcycle.h"

Motorcycle::Motorcycle(string mk, string mod, int y, bool s)
{
	make = mk;
	model = mod;
	year = y;
	hasSideCar = s;

}
void Motorcycle::displayInfo() const
{
	cout << "***Motorcycle Details***" << endl;
	cout << "Year: " << year << endl;
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "T/F? This motorcycle has a side car? " << hasSideCar << endl;
}
