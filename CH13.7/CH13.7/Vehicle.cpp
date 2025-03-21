#include "Vehicle.h"
Vehicle::Vehicle(): make(""), model(""), year(0) {}
Vehicle::Vehicle(string mk, string mod, int y)
{
	make = mk;;
	model = mod;
	year = y;
}
Vehicle::Vehicle(const Vehicle& obj)
{
	make = obj.make;
	model = obj.model;
	year = obj.year;
}
