/*
Team#: ___
Team Member-1:________________________ Member’s Contribution (in %) __
Team Member-2:________________________ Member’s Contribution (in %) __
Team Member-3:________________________ Member’s Contribution (in %) __
Submission
1. Work on the following requirements.
2. Create your source file named HW3_Team# (e.g., HW4_ Team1.cpp).
3. Upload your files to Canvas (the class definition file, class implementation file,
and driver program file).
Problem Statement: Create a structure Point with attributes x and y, each of
which defaults to 0. [5 points]
Create a class Rectangle to store the Cartesian coordinates (x, y) of the four
corners of the rectangle. Each corner should be of type Point [5 points]. The
constructor calls a set function that accepts four sets of coordinates and verifies
that each of these is in the first quadrant with no single x- or y-coordinate larger
than 20.0. [10 points]
The set function also verifies that the supplied coordinates do, in fact, specify a
rectangle. The function should generate error message if the four supplied
coordinates specify a shape other than a rectangle.
Provide member functions that calculate the length, width, perimeter and area
[20 points]. The length is the larger of the two dimensions. Include a predicate
function square that determines whether the rectangle is a square [10 points].
Inputs: four coordinate values (x, y). [5 points]
Input verification:
• Make sure the coordinate values are within the rage of 0 and 20.
Otherwise, let the user correct his/her mistakes. [5 points]
• Make sure the coordinates represent a rectangle. Otherwise, display error
message that these are not rectangle coordinates and exit the program. [15
points]
Outputs: Display length, width, perimeter and area. [5 points]
Programming Style: Make sure the programming style is followed. [10 points]
*/
#include "Rectangle.h"
int main()
{
	Point topLeft();
	cout << "x is " << topLeft.x << " and y is " << topLeft.y << endl;
	
}