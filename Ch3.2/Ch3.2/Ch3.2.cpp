/*Stadium Seating

There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B seats cost
$12, and Class C seats cost $9. Write a program that asks how many tickets for each class of seats were sold,
then displays the amount of income generated from ticket sales. Format your dollar amount in fixed-point
notation, with two decimal places of precision, and be sure the decimal point is always displayed.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	const int ClassC = 9;
	const int ClassB = 12;
	const int ClassA = 15;
	int numA = 0;
	int numB = 0;
	int numC = 0;
	cout << "How many Class A tickets were sold?" << endl;
	cin >> numA;

	while (numA < 0) {
		cout << "You have entered a negative value, please enter a positive value" << endl;
		cin >> numA;
	}

	cout << "How many Class B tickets were sold?" << endl;
	cin >> numB;

	while (numB < 0) {
		cout << "You have entered a negative value, please enter a positive value" << endl;
		cin >> numB;
	}

	cout << "How many Class C tickets were sold?" << endl;
	cin >> numC;

	while (numC < 0) {
		cout << "You have entered a negative value, please enter a positive value" << endl;
		cin >> numC;
	}

	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "Class A ticket sales are $" << static_cast<float>(ClassA) * numA << endl;
	cout << "Class B ticket sales are $" << static_cast<float>(ClassB) * numB << endl;
	cout << "Class C ticket sales are $" << static_cast<float>(ClassC) * numC << endl;
	return 0;
}