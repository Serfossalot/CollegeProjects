/*
You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some calculations,
you need to know how many bytes the following data types use: char, int, float, and double. You do not have any
technical documentation, so you can’t look this information up. Write a C++ program that will determine the
amount of memory used by these types and display the information on the screen.*/
#include <iostream>
using namespace std;

int main()
{
	cout << "The size of char is " << sizeof(char) << " bytes" << endl;
	cout << endl;
	cout << "The size of int is " << sizeof(int) << " bytes" << endl;
	cout << endl;
	cout << "The size of float is " << sizeof(float) << " bytes" << endl;
	cout << endl;
	cout << "The size of double is " << sizeof(double) << " bytes" << endl;
}