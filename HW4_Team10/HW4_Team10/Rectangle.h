#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

struct Point {
    double x; // X coordinate
    double y; // Y coordinate

    // Constructor with default values
    Point(double x = 0.0, double y = 0.0)
        : x(x), y(y) {}
    
};

class Rectangle
{
private:
	Point p1;
	Point p2;
	Point p3;
	Point p4;
public:
    Rectangle(Point, Point, Point, Point);
    void setPoints(Point, Point, Point, Point);
};







#endif

