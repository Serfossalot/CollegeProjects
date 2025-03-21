#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Vehicle
{
protected:
	string make;
	string model;
	int year;
public:
	//Constructors
	Vehicle();
	Vehicle(string, string, int);
	//CopyConstructor
	Vehicle(const Vehicle& obj);
	//Display Functions
	virtual void displayInfo()const =0;
};
#endif