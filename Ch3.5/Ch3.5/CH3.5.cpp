/*
5. Male and Female Percentages

Write a program that asks the user for the number of males and the number of females registered in a class.
The program should display the percentage of males and females in the class.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	float males;
	float females;

	cout << "How many males are in your class?" << endl;
	cin >> males;
	while (males < 0) {
		cout << "ERROR! Please type a positive value" << endl;
		cin >> males;
	}

	cout << "How many females are in your class?" << endl;
	cin >> females;
	while (females < 0) {
		cout << "ERROR! Please type a positive value" << endl;
		cin >> females;
	}

	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "There are " << (females + males) << " students in your class" << endl;
	cout << endl;
	cout << "The percentage of males in your class is %" <<  males / (males +females) * 100 << "." << endl;
	cout << endl;
	cout << "The percentage of females in your class is %" << females / (males + females) * 100 << "." << endl;
	return 0;
}