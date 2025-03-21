#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	int numdoors;

public:
	//Constructor
	Car(string, string, int, int);
	void displayInfo() const override;
};
#endif