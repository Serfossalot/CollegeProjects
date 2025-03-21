/*
Lowest Score Drop
Write a program that calculates the average of a group of test scores, where the lowest score in the group is
dropped. It should use the following functions:

void getScore()
Should ask the user for a test score, store it in a reference parameter variable, and validate it. 
This function should be called by main once for each of the five scores to be entered.

void calcAverage()
Should calculate and display the average of the four highest scores. This function should be called just once
by main and should be passed the five scores.

int findLowest()
Should find and return the lowest of the five scores passed to it. It should be called by calcAverage,
which uses the function to determine which of the five scores to drop.

Input Validation:
Do not accept test scores lower than 0 or higher than 100.*/
#include <iostream>
#include <iomanip>
using namespace std;
void getScore(float[], int);
void calcAverage(float[], int);
float findLowest(float[], int);

int main()
{
	const int size = 5;
	float grades[size];
	getScore(grades, size);
	calcAverage(grades, size);
	cout << "The lowest score entered is " << findLowest(grades, size) << " and will be dropped.";
	return 0;
}
void getScore(float marks[], int howmany)
{
	for (int i = 0; i < howmany; i++) {
		cout << "Please enter test score #" << i + 1 << endl;
		cin >> marks[i];
		while (marks[i] < 0 || marks[i] > 100)
		{
			cout << "ERROR! Please enter a psitive value between 0 and 100 please" << endl;
			cin >> marks[i];
		}
	}
}
void calcAverage(float marks[], int howmany)
{
	float total = 0.0;
	float average;
	float lowest = findLowest(marks, howmany);
		for (int i = 0; i < howmany; i++)
		{
			if (marks[i] != lowest)
				total += marks[i];
		}
	average = total / static_cast<float>(howmany -  1);
	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "The average for the test scores entered is " << average << endl;
	cout << endl;
}
float findLowest(float marks[], int howmany)
{
	float lowest = marks[0];
	for (int i = 1; i < howmany; i++)
	{
		if (marks[i] < lowest)
			lowest = marks[i];
	}
	return lowest;
}