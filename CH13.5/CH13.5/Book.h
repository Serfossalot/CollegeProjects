#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

class Book
{
private:
	string title, author;
	double price;
public:
	//Constructors
	Book();
	Book(string, string, double);
	//Copy Constructor
	Book(const Book& obj);
	//Setters
	void setTitle(string);
	void setAuthor(string);
	void setPrice(double);
	//Getters
	string getTitle();
	string getAuthor();
	double getPrice();
	//Print details
	void displayDetails();
	
};
#endif
