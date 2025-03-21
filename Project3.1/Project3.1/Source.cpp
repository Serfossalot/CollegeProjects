// This program is going to do alot of shit
using namespace std;
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
int main()
{
	ofstream output_file("original.txt");
	string name;
	int empid;
	double payrate;
	float hours;
	double tax = 0.0;
	double netpay = 0.0;
	double gross;
	for (int count = 1; count <= 20; count++)
	{
		cout << "What is the first and last name of the current employee? " << endl;
		getline(cin, name);
		output_file << "Employee Name: " << name << endl;
		cout << "What is the Employee ID of the current emplpoyee? " << endl;
		cin >> empid;
		output_file << "Employee ID: " << empid << endl;
		cout << "How many hours did this employee work this week? " << endl;
		cin >> hours;
		output_file << "Hours worked for the week: " << hours << endl;
		cout << "What is this employees current pay rate? " << endl; 
			cin >> payrate;
		output_file << "Current PayRate/hr: $" << payrate << endl;
		gross = hours * payrate;


		if (gross > 2500)
		{
			tax = gross * .33;
			netpay = gross - tax;
		}
		else if (gross < 2500)
		{
			tax = gross * .24;
			netpay = gross - tax;
		}

		output_file << "Their gross wages for the week were: $" << gross << endl;
		output_file << "This employee was taxed: $" << tax << endl;
		output_file << "This employee's netpay for the week was : $" << netpay << endl;	
		cin.ignore();
		
	}
	output_file.close();
	ifstream input_file("original.txt");
	ofstream output2("copy.txt");
	output2 << input_file.rdbuf(); 
	input_file.close();
	output2.close();
	ifstream copy("copy.txt");
	string line;
	while (getline(copy, line))
	{
		cout << line << endl;
	}
	copy.close();

	return 0;
}