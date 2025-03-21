/*Test Average

Write a program that asks for five test scores. The program should calculate the average test score and display
it. The number displayed should be formatted in fixed-point notation, with one decimal point of precision.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float total = 0.0;
	float average = 0.0;
	const int size = 5;
	float array[size];

	for (int i = 0; i < size; i++)
	{
		cout << " What is the score for test #" << i + 1  << ":" << endl;
		cin >> array[i];
		while (array[i] < 0 || array[i] > 100)
		{
			cout << "ERROR! Please enter a number betwen 0 and 100" << endl;
			cin >> array[i];
			
		}
		total += array[i];
		
	}
	average = total / size;
	
	cout << setprecision(1) << fixed << showpoint << endl;
	cout << "The average for the five test scores you have entered is " << average << endl;

	return 0;
}