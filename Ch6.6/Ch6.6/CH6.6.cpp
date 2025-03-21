/*
Present Value Calculation
Suppose you want to deposit a certain amount of money into a savings account and then leave it alone to draw 
interest for the next 10 years. At the end of 10 years, you would like to have $10,000 in the account. How much
do you need to deposit today to make that happen? You can use the following formula, which is known as the 
present value formula, to find out:
The terms in the formula are as follows:
P is the present value, or the amount that you need to deposit today.
F is the future value that you want in the account.
r is the annual interest rate.
n is the number of years that you plan to let the money sit in the account.
Write a program that has a function named presentValue that performs this calculation. The function should 
accept the future value, annual interest rate, and number of years as arguments. It should return the present
value, which is the amount that you need to deposit today. Demonstrate the function in a program that lets 
user experiment with different values for the formula’s terms.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float presentValue(float, float, int);

int main()
{
	float future, apr;
	int years;
	cout << "What would you like the account balance to reach in terms of dollar amount?" << endl;
	cin >> future;
	while (future < 0)
	{
		cout << "ERROR! Please enter a positive value for the future balance." << endl;
		cin >> future;
	}

		cout << "What is the annual interest rate you were hoping to get?" << endl;
		cin >> apr;
		while (apr < 0)
		{
			cout << "ERROR! Please enter a positive value for the annual percentage rate" << endl;
			cin >> apr;
		}
		cout << "Please enter the amount of years you are willing to wait to achieve the balance you seek." << endl;
		cin >> years;
		while (years < 0)
		{
			cout << "ERROR! Please enter a positive value for number of years" << endl;
			cin >> years;
		}
		cout << setprecision(2) << fixed << showpoint << endl;
		cout << "The future balance you want is $" << future << " .The annual percentage rate you are hoping for is " << apr << "%." << endl;
		cout << "You want your balance to grow over " << years << " years." << endl;
		cout << endl;
		cout << "The value that must be deposited today will be $" << presentValue(future, apr, years) << "." << endl;
		return 0;
	}
float presentValue(float f, float a, int y)
{
	float percent = .01 * a;
	float PE = f / pow((1 + percent), y);
	return PE;
}