/*
4. Average Rainfall

Write a program that calculates the average rainfall for three months. The program should ask the user to enter
the name of each month, such as June or July, and the amount of rain (in inches) that fell each month.
The program should display a message similar to the following:
The average rainfall for June, July, and August is 6.72 inches*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Monthspecs
{
	string name;
	float inches;
};

int main()
{
	const int size = 3;
	float total = 0.0;
	float average;
	Monthspecs data[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Please enter the name of month #" << i + 1 << endl;
		cin >> data[i].name;
		cout << "Please enter the rainfall in inches for " << data[i].name << ":" << endl;
		cin >> data[i].inches;
		while (data[i].inches < 0)
		{
			cout << "ERROR! Please enter a positive value" << endl;
			cin >> data[i].inches;
		}
		total += data[i].inches;
	}
	average = total / size;
	
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The average rainfall in inches for " << data[0].name << ", " << data[1].name << ", and " << data[2].name << " is " << average << " inches." << endl;
	
	return 0;
	
}