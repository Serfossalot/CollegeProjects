/*
Team#: 10
Team Member-1:Joel Serfoss Member’s Contribution (in %) 33
Team Member-2:Esmeralda Nuno Cortez Member’s Contribution (in %) 33
Team Member-3:King Olutowoju Member’s Contribution (in %) 33

Problem Statement: Write a program that can be used to gather statistical data
about the number of movies college students see in a month. The program should
perform the following steps:
1. Ask the user how many students were surveyed [5 points]. Create a
dynamically allocated array of integers to store the survey data. For
example, the program should work if the user enters 100 for the number of
students. The same program should work if the user enters 10 for the
number of students. You must use pointers. [15 points].
2. Allow the user to enter the number of movies each student saw into the
array [10 points].
3. Calculate and display the average [10 points] and median [20 points] of
the values entered. Use a function for each operation. In statistics, when a
set of values is sorted in ascending or descending order, its median is the
middle value. If the set contains an even number of values, the median is
the mean, or average, of the two middle values. Please use one of the
sorting algorithms that we discussed in class.
4. Draw a bar graph of the input data [10 points]. For example, let's assume
the following inputs:*/
#include<iostream>
#include<iomanip>

using namespace std;

void selectionSort(double* arr, int size);
double findMedian(double* arr, int size);
double findAverage(double* arr, int size);
void barGraph(double* arr, int size);

int main()
{
	// Creating a Pointer that is pointing at the first location
	double* stPtr = nullptr;
	int size; //Variable that will hold the size of the dynamic array

	// Asking user for size of array
	cout << "How many students were surveyed?" << endl;
	cin >> size;

	//Input Validation
	while (size < 0)
	{
		cout << "Error! Please enter a positive value" << endl;
		cin >> size;
	}
	// Creating dynamic array
	stPtr = new double[size];

	// Asking user how many movies every student watched
	for (int i = 0; i < size; i++)
	{
		cout << "How many movies did student " << i + 1 << " watch?" << endl;
		cin >> stPtr[i];

		//Input Validation
		while (stPtr[i] < 0)
		{
			cout << "Error! Please enter a positive value for student " << i + 1 << "." << endl;
			cin >> stPtr[i];
		}
	}
	// Calling Function for bar graph
	barGraph(stPtr, size);
	// Calling Function for sorting array to find the median
	selectionSort(stPtr, size);
	// Manipulating the decimals for output
	cout << fixed << setprecision(2) << showpoint << endl;
	cout << "The average number of movies/student is " << findAverage(stPtr, size) << "." << endl;
	cout << "The median value of the numbers entered is " << findMedian(stPtr, size) << "." << endl;

	//Deleting the dynamic array and pointing it back to the first location
	delete[] stPtr;
	stPtr = nullptr;


	return 0;
}
void selectionSort(double* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		// Assume the current position is the minimum
		int minIndex = i;

		// Find the index of the minimum element in the remaining unsorted part of the array
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}

		// Swap the found minimum element with the first element of the unsorted part
		if (minIndex != i)
		{
			double temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}
double findAverage(double* arr, int size) //This function finds and returns the average as a double //double
{
	double total = 0;
	double average = 0;
	for (int i = 0; i < size; i++)
		total += arr[i];
	average = total / size;

	return average;

}

double findMedian(double* arr, int size)

{
	if (size <= 0) return 0; // Handle case with no elements

	// Since the array is sorted, we can find the median directly
	if (size % 2 == 1) // Odd size
	{
		return arr[size / 2]; // Middle element
	}
	else // Even size
	{
		return (arr[(size / 2) - 1] + arr[size / 2]) / 2.0; // Average of two middle elements
	}
}

void barGraph(double* arr, int size) {

	// Going through whole array
	for (int i = 0; i < size; i++) {
		cout << "S" << i + 1 << ": ";
		// Depending on the number of movies, it will output star correspondly
		for (int j = 0; j < arr[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}