/*Problem:

A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and 28.9 miles per 
gallon when driven on the highway. Write a program that calculates and displays the distance the car
can travel on one tank of gas when driven in town and when driven on the highway.
Hint: The following formula can be used to calculate the distance:
Distance = Number of Gallons × Average Miles per Gallon*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float CITY = 23.5;
	const float HWY = 28.9;
	const int TANK = 20;
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "You can drive " << (CITY * static_cast<float>(TANK)) << " miles when you are driving in town.\n";
	cout <<"\n";
	cout << "You can drive " << (HWY * static_cast<float>(TANK)) << " miles when you are driving on the highway.\n"; 
}