#include <iostream>
#include <iomanip>
using namespace std;

// This program demonstrates how to use an array of structures

// Team 10(Esmeralda Nuno Cortez and Joel Serfoss)

// Fill in code to declare a structure called taxPayer that has three
// members:	taxRate, income, and taxes � each of type     
struct taxPayer
{
	float taxRate, income, taxes;
};

int main()
{
	// Fill in code to define an array named citizen which holds
	// 5 taxPayers structures
	 taxPayerscitizen[5]

	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	cout << endl << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		cout << "Enter this year's income for tax payer " << (count + 1);
		cout << ": ";

		// Fill in code to read in the income to the appropriate place
		cin >> 

		cout << "Enter the tax rate for tax payer # " << (count + 1);
		cout << ": ";

		// Fill in code to read in the tax rate to the appropriate place

		// Fill in code to compute the taxes for the citizen and store it
		// in the appropriate place

		cout << endl;
	}

	cout << "Taxes due for this year: " << endl << endl;

	// Fill in code for the first line of a loop that will output the
	// tax information
	{
		cout << "Tax Payer # " << (index + 1) << ": " << "$ "
			<< citizen[index].taxes << endl;
	}

	return 0;
}