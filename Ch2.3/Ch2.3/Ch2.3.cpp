/*
Suppose an employee gets paid every two weeks and earns $2,200 each pay period.
In a year, the employee gets paid 26 times. Write a program that defines the following variables:
payAmount
This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with
2200.0.
payPeriods
This variable will hold the number of pay periods in a year. Initialize the variable with 26.
annualPay
This variable will hold the employee�s total annual pay, which will be calculated.
The program should calculate the employee�s total annual pay by multiplying the employee�s pay amount by
the number of pay periods in a year and store the result in the annualPay variable. Display the total annual pay
on the screen.*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
	float payAmount = 2200.0;
	int payPeriods = 26;
	float annualPay = payPeriods * payAmount;

	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "Your annual pay is strong, the dollar value is $" << annualPay << endl;
	return 0;
}