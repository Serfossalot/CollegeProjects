#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "Vehicle.h"
class Motorcycle : public Vehicle
{
private:
	bool hasSideCar;
public:
	Motorcycle(string, string, int, bool);
	void displayInfo() const;
};
#endif
