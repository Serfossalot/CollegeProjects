#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <iomanip>
using namespace std;

class Circle
{
private:
	double radius = 0.0;
	const double pi = 3.14159;
public:
	//Constructors
	Circle();
	Circle(double);
	//Copy Constructor
	Circle(const Circle& obj);
	//Setters
	void setRadius(double);
	//Getters
	double getArea();
	double getDiameter();
	double getCircumference();

};
#endif
