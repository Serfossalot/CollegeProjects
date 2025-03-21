#include "Rectangle.h"
int main()
{
	double length;
	double width;
	cout << "What would you like the length of the first rectangle to be?" << endl;
	cin >> length;
	while (length < 1)
	{
		cout << "Please enter a non negative non zero value." << endl;
		cin >> length;
	}
	cout << "What would you like the width of the first rectangle to be?" << endl;
	cin >> width;
	while (width < 1)
	{
		cout << "Please enter a non negative non zero value." << endl;
		cin >> width;
	}
	Rectangle j1(length, width);
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "*****Original Rectangle*****" << endl;
	cout << "The length of the original rectangle is " << j1.getLength() << " inches." << endl;
	cout << "The width of the original rectangle is " << j1.getWidth() << " inches." << endl;
	cout << "The area of the original rectangle is " << j1.getArea() << " inches." << endl;
	cout << "The perimeter of the original rectangle is " << j1.getPerimeter() << " inches." << endl;
	cout << endl;
	cout << endl;

	cout << "What would you like the length of the second rectangle to be?" << endl;
	cin >> length;
	while (length < 1)
	{
		cout << "Please enter a non negative non zero value." << endl;
		cin >> length;
	}
	cout << "What would you like the width of the second rectangle to be?" << endl;
	cin >> width;
	while (width < 1)
	{
		cout << "Please enter a non negative non zero value." << endl;
		cin >> width;
	}
	Rectangle j2(length, width);
	cout << "*****Second Rectangle*****" << endl;
	cout << "The length of the second rectangle is " << j2.getLength() << " inches." << endl;
	cout << "The width of the second rectangle is " << j2.getWidth() << " inches." << endl;
	cout << "The area of the second rectangle is " << j2.getArea() << " inches." << endl;
	cout << "The perimeter of the second rectangle is " << j2.getPerimeter() << " inches." << endl;
	return 0;

}