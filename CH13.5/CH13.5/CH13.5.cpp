#include "Book.h"
int main()
{
	string title;
	string author;
	double price;
	cout << "What is the title of the book you want to enter?" << endl;
	getline(cin, title);
	cout << "Who is the author of the book you are adding?" << endl;
	getline(cin, author);
	cout << "What is the price of the book you are adding?" << endl;
	cin >> price;
	while (price < 0)
	{
		cout << "Price cannot be negative, please enter a positive number." << endl;
		cin >> price;
	}
	Book j1(title, author, price);
	cout << "********Original Book*********" << endl;
	j1.displayDetails();
	cout << endl;
	Book j2 = j1;
	cout << "********Copied Book*********" << endl;
	j2.displayDetails();
	
}