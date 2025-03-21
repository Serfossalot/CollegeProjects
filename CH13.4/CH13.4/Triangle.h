#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include<iomanip>
using namespace std;
class Triangle
{
private:
	double base = 0.0;
	double height = 0.0;
public:
	//Constructor
	Triangle(double, double);
	//Copy Constructor
	Triangle(const Triangle& obj);
	//Setters
	void setBase(double);
	void setHeight(double);
	//Getters
	double getBase();
	double getHeight();
	double getArea();
	double getPerimeter(double, double);
};
#endif


