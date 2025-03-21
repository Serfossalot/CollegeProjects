/*Circle Class
Write a Circle class that has the following member variables:

radius—a double
pi—a double initialized with the value 3.14159
The class should have the following member functions:

Default Constructor: A default constructor that sets radius to 0.0.
Constructor: Accepts the radius of the circle as an argument.
setRadius: A mutator function for the radius variable.
getRadius: An accessor function for the radius variable.
getArea: Returns the area of the circle, which is calculated as:
area = pi * radius * radius
getDiameter: Returns the diameter of the circle, which is calculated as:
diameter = radius * 2
getCircumference: Returns the circumference of the circle, which is calculated as

circumference = 2 * pi * radius
Program Requirements
Write a program that demonstrates the Circle class by:

Asking the user for the circle’s radius.
Creating a Circle object.
Reporting the circle’s:
Area
Diameter
Circumference
*/
#include "Circle.h"

int main()
{
	Circle j1;
	j1.setRadius(5);
	cout << setprecision(2) << fixed << showpoint << endl; 
	cout << "The area for the first circle is " << j1.getArea() << " inches." << endl;
	cout << "The diameter of the first cirlce is " << j1.getDiameter() << " inches." << endl;
	cout << "The circumference of the first circle is " << j1.getCircumference() << " inches." << endl;
	cout << endl;
	Circle j2;
	j2.setRadius(10);
	cout << "The area for the second circle is " << j2.getArea() << " inches." << endl;
	cout << "The diameter of the second cirlce is " << j2.getDiameter() << " inches." << endl;
	cout << "The circumference of the second circle is " << j2.getCircumference() << " inches." << endl;
	cout << endl;
	return 0;

}