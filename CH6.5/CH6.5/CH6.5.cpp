/* Kinetic Energy
In physics, an object that is in motion is said to have kinetic energy.
The following formula can be used to determine a moving object’s kinetic energy:
KE = 1/2(mv) squared 
The variables in the formula are as follows:

KE is the kinetic energy,
m is the object’s mass in kilograms,
v is the object’s velocity in meters per second.
Write a function named kineticEnergy that accepts an object’s mass (in kilograms) and velocity (in meters per 
second) as arguments. The function should return the amount of kinetic energy that the object has. 
Demonstrate the function by calling it in a program that asks the user to enter values for mass and velocity.*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float KineticEnergy(float, float);
int main()
{
	float mass;
	float velocity;
	cout << "What is the object's mass?" << endl;
	cin >> mass;
	while (mass < 0)
	{
		cout << "ERROR! Please enter a positive value for the object's mass in kilograms." << endl;
		cin >> mass;
	}
	cout << "What is the object's velocity?" << endl;
	cin >> velocity;
	while (velocity < 0)
	{
		cout << "Please enter a positive value for the object's velocity in meters per second" << endl;
		cin >> velocity;
	}
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The object's kinetic energy is " << KineticEnergy(mass, velocity) << " joules." << endl;;
	return 0;

}

float KineticEnergy(float m, float v)
{
	float KE = .5 *m * pow(v, 2);
	return KE;
}