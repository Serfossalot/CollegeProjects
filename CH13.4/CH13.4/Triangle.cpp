#include "Triangle.h"
//Constructor
Triangle::Triangle(double b, double h)
{
			base = b;
			height = h;
}
//Copy Constructor
Triangle::Triangle(const Triangle& obj)
{
	base = obj.base;
	height = obj.height;
}
//Setters
void Triangle::setBase(double b)
{
	if (b > 0)
	{
		base = b;
	}
	else
		cout << "ERROR! Base cannot be negative." << endl;
}
void Triangle::setHeight(double h)
{
	if (height > 0)
	{
		height = h;
	}
	else
		cout << "ERROR! Height cannot be negative." << endl;
}
//Getters
double Triangle::getBase()
{
	return base;
}
double Triangle::getHeight()
{
	return height;
}
double Triangle::getArea()
{
	return (.5 * base * height);
}
double Triangle::getPerimeter(double s1, double s2) {
	return base + s1 + s2;
}