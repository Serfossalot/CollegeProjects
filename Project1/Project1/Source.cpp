//This program is for Project 1
//Programmer Joel Serfoss

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	const float AMCO = 85.00;    //American Colonial Chairs
	const float MOD = 57.50;     //Modern Chairs
	const float FRENCH = 127.75;  //French Classical Chairs
	float amcoTotal, modTotal,frenchTotal,amco,mod,french,total; 
	cout << "Please type the number of American Colonial chairs sold " << endl;
	cin >> amco;
	cout << "Please type the number of Modern chairs sold " << endl;
	cin >> mod;
	cout << "Please type the number of French Classical chairs sold " << endl;
	cin >> french;
	amcoTotal = amco * AMCO;
	modTotal = mod * MOD;
	frenchTotal = french * FRENCH;
	total = amcoTotal + modTotal + frenchTotal;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout  << showpoint << fixed << setprecision (2);
	//Row1
	cout << setw(30) << left << "The total sales for American Colonial chairs :"
		 << setw(5) << left << "" 
		 << right << "$" << amcoTotal << endl;
	cout << "" << endl;
	//Row2
	cout << setw(30) << left << "The total sales for Modern chairs:"
         << setw(18) << left << ""
		 << right << "$" << modTotal << endl;
	cout << "" << endl;
	//Row3
	cout << setw(30) << left << "The total sales for French classical chairs:"
		 << setw(9) << left
		 << right << "$" << frenchTotal << endl;
	cout << "" << endl;
	//Row4
	cout << setw(30) << left << "The total sales for all chairs:"
		<< setw(20) << left << ""
	    << right << "$" << total << endl;
	cout << "" << endl;
	return 0;
	




}
