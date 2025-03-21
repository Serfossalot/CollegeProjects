#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
int main()
{
	//Create an array of base class pointers
	Vehicle* vehicles[2];
	//Create dynamic objects and assign them to the array
	vehicles[0] = new Car("Nissan", "Altima", 2016, 4);
	vehicles[1] = new Motorcycle("Ducati", "Douchebag", 2024, true);


	for (int i = 0; i < 2; i++)
	{
		vehicles[i]->displayInfo();
	}

	for (int i = 0; i < 2; i++)
	{
		delete vehicles[i];
	}
	return 0;
}