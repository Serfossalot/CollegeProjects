#include "Book.h"
//Constructors
Book::Book() :title(""), author(""), price(0.0) {}
Book::Book(string t, string a, double p)
{
	title = t;
	author = a;
	price = p;
}
//Copy Constructor
Book::Book(const Book& obj)
{
	title = obj.title;
	author = obj.author;
	price = obj.price;
}
//Setters
void Book::setTitle(string t)
{
	title = t;
}
void Book::setAuthor(string a)
{
	author = a;
}
void Book::setPrice(double p)
{
	if (p > 0.0)
	{
		price = p;
	}
	else
		cout << "Price cannot zero or negative, please use a positive non zero value." << endl;
	
}
//Getters
string Book::getTitle()
{
	return title;
}
string Book::getAuthor()
{
	return author;
}
double Book::getPrice()
{
	return price;
}
//Print Details
void Book::displayDetails()

{
		cout << setprecision(2) << fixed << showpoint << endl;
		cout << "Title: " << getTitle() << "." << endl;
		cout << "Author: " << getAuthor() << "." << endl;
		cout << "Price: $" << getPrice() << "." << endl;
}
