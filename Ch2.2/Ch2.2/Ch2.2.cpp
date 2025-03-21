/*
Programmer: Joel Serfoss

To get the average of a series of values, you add the values up then divide the sum by the number of values.
Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33.
The program should first calculate the sum of these five variables and store the result in a separate variable
named sum. Then, the program should divide the sum variable by 5 to get the average.
Display the average on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
	int x1 = 28, x2 = 32, x3 = 37, x4 = 24, x5 = 33;
	float sum = x1 + x2 + x3 + x4 + x5;
	float average = sum / 5;

	cout << "The average of the values is " << average << endl;

	return 0;
}