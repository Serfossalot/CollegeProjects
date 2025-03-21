#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Date
{
private:
	int day, month, year;
	string monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	

public:
	//Constructor with inputs
	Date(int m, int d, int y) : month(m), day(d), year(y) {}

	//Print Function
	void printDate1()
	{
		
			cout << monthNames[month - 1] << " " << day << ", " << year << endl;
		
		
	}
	void printDate2()
	{
		cout << month << "/" << day << "/" << year << endl;
	}
	void printDate3()
	{
		cout << day << " " << monthNames[month - 1] << " " << year << endl;
	}

};

#endif

