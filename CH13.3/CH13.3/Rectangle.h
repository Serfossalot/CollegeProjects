#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
public:
	//Constructors
	Rectangle();
	Rectangle(double, double);
	//Copy Constructor
	Rectangle(const Rectangle& obj);
	//Setters
	void setLength(double);
	void setWidth(double);
	//Getters
	double getLength();
	double getWidth();
	double getArea();
	double getPerimeter();
};
#endif
