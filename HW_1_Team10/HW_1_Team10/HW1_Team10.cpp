/*
Team#: ___
Team Member-1:Esmeralda Nuno Cortez___ Member’s Contribution (in %) 33
Team Member-2:King Olutowoju__________ Member’s Contribution (in %) 33
Team Member-3:Joel Serfoss____________ Member’s Contribution (in %) 33

Problem Statement: A movie theater only keeps a percentage of the revenue
earned from ticket sales. The remainder goes to the movie distributor. Write a
program that calculates a theater’s gross [20 points], net box office profit [15
points], and amount paid to the distributor [10 points] for a night. The program
should ask for the name of the movie [10 points] and how many adult [10 points]
and child [5 points] tickets were sold. Assume that an adult ticket costs $10.00
and a child’s ticket is $5.00. Assume the theater keeps 20 percent of the gross box
office profit.
Input Validation: Make sure all the numbers inputted by the user are non-
negative.

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const float Adult = 10.00; //Price of an adult ticket
	const float Child = 5.00; //Price of a child ticket

	float gross = 0; //Theaters gross box office
	float net = 0; //Theaters net box office
	float distro = 0; //Money paid out to distributor
	float adult = 0; //Number of Adult tickets sold
	float child = 0; //Number of child tickets sold
	float percent = 0; //Percent owed to theater
	string movie;

	cout << "What is the name of the movie you want numbers for?\n";
	getline(cin, movie);

	cout << "How many adult tickets did you sell for this movie?\n";
	cin >> adult;

	while (adult < 0) {
		cout << "You have entered an invalid number for adult tickets sold.\n";
		cin >> adult;
	}
	cout << "How many child tickets did you sell for this movie?\n";
	cin >> child;

	while (child < 0) {
		cout << "You have entered an invalid number for child tickets sold.\n";
		cin >> child;
	}
	gross = (adult * Adult) + (child * Child);
	percent = gross * .8;
	net = gross - percent;

	cout << fixed << showpoint << setprecision(2);
	cout << left << setw(35) << "Movie Name :" << right << setw(22) << movie << endl;
	cout << left << setw(35) << "Adult Tickets Sold:" << right << setw(15) << adult << endl;
	cout << left << setw(35) << "Child Tickets Sold : " << right << setw(15) << child << endl;
	cout << left << setw(30) << "Gross Box Office Profit:" << right << setw(15) << "$" << setw(8) << gross << endl;
	cout << left << setw(30) << "Net Box Office Profit:" << right << setw(15) << "$" << setw(8) << net << endl;
	cout << left << setw(30) << "Amount Paid to Distributor:" << right << setw(15) << "$" << setw(8) << percent << endl;

	return 0;
}
