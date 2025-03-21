#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>
using namespace std;
class Book
{
private:
	string title;
	string author;
	int year;
public:
//Constructors
	Book();
	Book(string, string, int);
//Copy Constructors
	Book(const Book& obj);
//Setters
	void setTitle(string);
	void setAuthor(string);
	void setYear(int);
//Getters
	string getTitle() const;
	string getAuthor() const;
	int getYear() const;
//DisplayInfo
	void displayInfo();


};
#endif
