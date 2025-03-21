/*Test Scores #1

Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores. 
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order. 
Another function should be called that calculates the average score. The program should display the sorted list
of scores and averages with appropriate headings. Use pointer notation rather than array notation whenever
possible.
Input Validation: Do not accept negative numbers for test scores.
*/
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void sortArray(int*, int);
void averageArray(int*, int);

int main()
{
	int size;
	cout << "How many elements would you like the array to hold?" << endl;
	cin >> size;
	while (size < 1) {
		cout << "ERROR! Please enter a value greater than zero for the size." << endl;
		cin >> size;
	}
	int* myarray = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "What is the score for test #" << i + 1 << "?" << endl;
		cin >> myarray[i];
		while (myarray[i] < 0)
		{
			cout << "ERROR! Please enter a non negative value for test score #" << i + 1 << endl;
			cin >> myarray[i];
		}
	}
	sortArray(myarray, size);
	averageArray(myarray, size);
	delete[] myarray;
	myarray = nullptr;

	return 0;
}
void sortArray(int* arr, int s)
{
	
	sort(arr, arr + s);
	cout << "*********Sorted Array**************" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << "Element #" << i + 1 << " is " << arr[i] << "." << endl;
	}
	cout << endl;
}
void averageArray(int* arr, int s)
{
	float total = 0.0;
	float average;
	for (int i = 0; i < s; i++)
	{
		total += arr[i];
	}
	average = total / s;
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The averaged value of all elements in the array is " << average << "." << endl;
	cout << "The lowest test score in the array is " << arr[0] << endl;
	float newAverage;
	total = 0.0;
	for (int i = 1; i < s; i++)
	{
		total += arr[i];
	}
	newAverage = total / (s - 1);
	cout << "The recalculated average with the lowest score dropped is " << newAverage << "." << endl;
}
