/*
3. Winning Division
Write a program that determines which of a company’s four divisions (Northeast, Southeast, Northwest, and
Southwest) had the greatest sales for a quarter. It should include the following two functions, which 
are called by main:

double getSales()
is passed the name of a division. It asks the user for a division’s quarterly sales figure, validates the input,
then returns it. It should be called once for each division.

void findHighest()
is passed the four sales totals. It determines which is the largest and prints the name of the high-grossing
division, along with its sales figure.

Input Validation: Do not accept dollar amounts less than $0.00.

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main() {
	double northEast = getSales("Northeast");
	double southEast = getSales("Southeast");
	double northWest = getSales("Northwest");
	double southWest = getSales("Southwest");
	findHighest(northEast, southEast, northWest, southWest);
	return 0;
}
double getSales(string divisionName)
{
	double sales = 0.0;
	cout << "Please enter the sales for the " << divisionName << endl;
	cin >> sales;
	while (sales < 0.00)
	{
		cout << "ERROR! Please enter a positive sales value." << endl;
		cin >> sales;
	}
	return sales;
}
void findHighest(double n_east, double s_east, double n_west, double s_west)
{
	double highestsales = 0.0;
	string highestDivision;
	if (n_east > highestsales)
	{
		highestsales = n_east;
		highestDivision = "Northeast";
	}
	if (s_east > highestsales)
	{
		highestsales = s_east;
		highestDivision = "Southeast";
	}
	if (n_west > highestsales)
	{
		highestsales = n_west;
		highestDivision = "Northwest";
	}
	if (s_west > highestsales)
	{
		highestsales = s_west;
		highestDivision = "Southwest";
	}
	cout << "The division with the highest sales is the " << highestDivision << ", and their sales sales totaled $" << highestsales << endl;
}