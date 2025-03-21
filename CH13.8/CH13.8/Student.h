#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student
{
protected:
	string name;
	int* grades;
	int numGrades;
public:
	//Constructors
	Student();
	Student(string, int);
	//Copy Constructor
	Student(const Student& obj);
	//Destructor
	~Student();
	//Setters
	void setName(string);
	void setGrade(int, int);
	//Getters
	string getName() const;
	int getGrade(int index) const;
	int getNumGrades() const;
	//Virtual Function
	virtual void displayInfo() const;

};
#endif

