/*Problem: Rectangle Dimensions with Pointers
Write a program that does the following:

Dynamically allocates two variables: length and width.
Prompts the user to input the length and width of a rectangle.
Passes pointers to these variables to a function named calculateRectangle, which:
Doubles the length.
Triples the width.
Returns the area of the rectangle (length * width).
After the function call, display the updated length, width, and the calculated area.
*/
#include <iostream>
using namespace std;
int calculateRectangle(int*, int*);

int main()
{
	
	int* lptr = new int(0);
	int* wptr = new int(0);
	cout << "Please enter the desired length." << endl;
	cin >> *lptr;
	cout << "Please enter the desired width." << endl;
	cin >> *wptr;
	cout << "The length you entered is " << *lptr << " inches." << endl;
	cout << "The width you entered is " << *wptr << " inches." << endl;
	cout << "The area using the two original values is " << (*lptr * *wptr) << " square inches." << endl;
	cout << endl;
	cout << "After being altered inside the function the new area is " << calculateRectangle(lptr, wptr) << " square inches." << endl;
	delete lptr;
	delete wptr;
	return 0;
}
int calculateRectangle(int* l, int* w)
{
	int a;
	*l *= 2;
	*w *= 3;
	cout << "The length has been changed inside the function to equal " << *l << " inches." << endl;
	cout << "The width has been changed inside the function to equal " << *w << " inches." << endl;
	a = *l * *w;
	return a;
}