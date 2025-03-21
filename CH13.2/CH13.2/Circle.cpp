#include "Circle.h"
//Constructors
Circle::Circle() : radius(0.0) {}
Circle::Circle(double r) : radius(r) {}
//Copy Constructor
Circle::Circle(const Circle& obj)
{
	radius = obj.radius;
}
//Setters
void Circle::setRadius(double r)
{
	if (r >= 0)
		radius = r;
	else
		cout << "Radius cannot be negative! Keeping current value." << endl;
}
//Getters
double Circle::getArea()
{
return pi * radius * radius;
}
double Circle::getDiameter()
{
return  2 * radius;
}
	
double Circle::getCircumference()
{
	return 2 * pi * radius;
}
	