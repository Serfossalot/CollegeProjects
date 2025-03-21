/*
Team#: 10
Team Member-1:Joel Serfoss____________ Member’s Contribution (in %) 33
Team Member-2:Esmeralda Nuno Cortez___ Member’s Contribution (in %) 33
Team Member-3:King Olutowoju__________ Member’s Contribution (in %) 33
*/
#include <iomanip>
#include <iostream>
using namespace std;

double calculateRetail(double, double);

int main()
{
	double markup = 0;
	double wholesale = 0;

	cout << "What is the item's wholesale cost?" << endl;
	cin >> wholesale;

	while (wholesale < 0) {
		cout << "Please input a positive value: " << endl;
		cin >> wholesale;
	}

	cout << "What is the item's markup value?" << endl;
	cin >> markup;

	while (markup < 0) {
		cout << "Please input a positive value: " << endl;
		cin >> markup;
	}
	


	cout << showpoint << setprecision(2) << fixed << endl;
	cout << "The retail price for your item is $" << calculateRetail(wholesale, markup) << endl;


	return 0;
}
double calculateRetail(double x, double y)
{
	double retail = 0;
	y = y * .01;
	retail = (x * y) + x;
	return retail;
}