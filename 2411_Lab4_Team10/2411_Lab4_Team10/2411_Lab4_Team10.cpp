// Lab 4, Group 10
/*
Esmeralda Nuno Cortez - 33%
Joel Serfoss - 33%
King Olutuwoju - 33%

Problem Statement: Write a program that lets the user enter 3 test scores into an array. Makes sure to
perform input validation meaning don’t allow test scores below zero and more
than 100 [20 points]. The program should then write functions for each of the
following computations.
1. Average of these numbers [15 points],
2. The largest value [30 points], and
3. the smallest value [10 points].
The functions should take the whole array and return the computed values to the
driver function.
Programming Style: Make sure the programming style is followed. [10 points]
Programming Comments: Please make sure the code is well-commented. [10
points]
*/

#include <iostream>
using namespace std;
//find average

void average(int arr[], int size) {
	int totalScore = 0, score = 0;
	double average = 0;
	for (int i = 0; i < size; i++) {
		totalScore += arr[i];
	}
	average = totalScore / size;
	cout << "The average of all test score is: " << average << endl;
}
//find largest value
void largestValue(int arr[], int size) {
	int largeValue = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > largeValue) {
			largeValue = arr[i];
		}
	}
	cout << "The largest value is: " << largeValue << endl;
}
//find smallest value
void smallestValue(int arr[], int size) {
	int smallValue = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < smallValue) {
			smallValue = arr[i];
		}
	}
	cout << "The smallest value is: " << smallValue << endl;

}

int main() {
	const int SIZE = 3;
	int testScores[SIZE];
	int testScore;

	cout << "Enter " << SIZE << " test scores: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> testScores[i];
		while (testScores[i] < 0 || testScores[i] > 100) {
			cout << "Error! Please enter a value between 0 and 100: \n";
			cout << "\tEnter test score " << i + 1 << ": ";
			cin >> testScores[i];
		}
	}
	average(testScores, SIZE);
	largestValue(testScores, SIZE);
	smallestValue(testScores, SIZE);


	return 0;
}