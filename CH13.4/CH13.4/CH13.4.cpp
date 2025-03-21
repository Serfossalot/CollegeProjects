#include "Triangle.h"
int main()
{
	double base = 0.0;
	double height = 0.0;
	double side1 = 0.0;
	double side2 = 0.0;
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "What is the base of the triangle in units?" << endl;
	cin >> base;
	while (base < 0)
	{
		cout << "ERROR! Base cannot be negative. Please enter a positive value." << endl;
		cin >> base;
	}
	cout << "What is the height of the triangle in units?" << endl;
	cin >> height;
	while (height < 0)
	{
		cout << "ERROR! Height cannot be negative. Please enter a positive value." << endl;
		cin >> height;
	}
	cout << "What is value of the first side of the triangle in units?" << endl;
	cin >> side1;
	while (side1 < 0)
	{
		cout << "ERROR! Side 1 cannot be negative. Please enter a positive value." << endl;
		cin >> side1;
	}
	cout << "What is the value of the second side of the triangle in units?" << endl;
	cin >> side2;
	while (side2 < 0)
	{
		cout << "ERROR! Side 2 cannot be negative. Please enter a positive value." << endl;
		cin >> side2;
	}
		
	Triangle j1(base, height);
	cout << "*****Triangle Details*****" << endl;
	cout << "Base: " << j1.getBase() << " units." << endl;
	cout << "Height: " << j1.getHeight() << " units." << endl;
	cout << "Area: " << j1.getArea() << " units." << endl;
	cout << "Perimeter: " << j1.getPerimeter(side1, side2) << " units." << endl;

	return 0; 
}