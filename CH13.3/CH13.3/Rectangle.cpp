#include "Rectangle.h"

//Constructors
Rectangle::Rectangle() : length(0.0), width(0.0){}

Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
}

//Setters
void Rectangle::setLength(double l)
{
	if (l > 0)
	{
		length = l;
	}
	else
		cout << "ERROR! Invalid input. Length must be positive." << endl;
}
void Rectangle::setWidth(double w)
{
	if (w > 0)
	{
		width = w;
	}
	else
		cout << "ERROR! Invalid input. Width must be positive." << endl;

	
}
//Copy Constructor
Rectangle::Rectangle(const Rectangle& obj)
{
	length = obj.length;
	width = obj.width;
}
//Getters
double Rectangle::getLength()
{
	return length;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getArea()
{
	return length * width;
}
double Rectangle::getPerimeter()
{
	return 2 * (length + width);
}

