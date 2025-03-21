#include "Book.h"
//Constructors
Book::Book() : title(""), author(""), year(0) {}
Book::Book(string t, string a, int y) : title(t), author(a), year(y) {}
//Copy Constructor
Book::Book(const Book& obj) : title(obj.title), author(obj.author), year(obj.year) {}
//Setters
void Book::setTitle(string t)
{
	title = t;
}
void Book::setAuthor(string a)
{
	author = a;
}
void Book::setYear(int y)
{
	if (y > 0)
	{
		year = y;
	}
	else
		cout << "Year cannot be negative. Please enter a positive value." << endl;
}
//Getters
string Book::getTitle() const
{
	return title;
}
string Book::getAuthor() const
{
	return author;
}
int Book::getYear() const
{
	return year;
}
//DisplayInfo
void Book::displayInfo()
{
	cout << "*********Book Details***********" << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Year Published: " << year << endl;
 }