#include "Student.h"
//Default Constructor
Student::Student() : name(""), grades(nullptr), numGrades(0) {}
Student::Student(string n, int numGrades) : name(n), numGrades(numGrades)
{
	grades = new int[numGrades];
	for (int i = 0; i < numGrades; i++)
	{
		grades[i] = 0;
	}
}
//Copy Constructor
Student::Student(const Student& obj)
{
	name = obj.name;
	numGrades = obj.numGrades;s
	//Allocate new memory for grades array
	grades = new int[numGrades];
	for (int i = 0; i < numGrades; i++)
	{
		grades[i] = obj.grades[i];
	}
}
//Destructor
Student::~Student()
{
	delete[]grades;
}
//Setters
void Student::setName(string n)
{
	name = n;
}
void Student::setGrade(int index, int grade)
{
	if (index >= 0 && index < numGrades)
	{
		grades[index] = grade;
	}
	else
		cout << "ERROR! Index is out of bounds." << endl;
}
//Getters
string Student::getName() const
{
	return name;
}
int Student::getGrade(int index) const
{
	if (index >= 0 && index < numGrades)
	{
		return grades[index];
	}
	
		return -1; //Invalid if index is out of bounds

}
int Student::getNumGrades() const
{
	return numGrades;
}
//Virtual Poly Function
void Student::displayInfo() const {
	cout << "Student Name: " << name << endl;
	cout << "Grades: ";
	for (int i = 0; i < numGrades; i++) {
		cout << grades[i];
		if (i < numGrades - 1) {
			cout << ", "; // Add a comma and space between grades
		}
	}
	cout << endl; // End the line after all grades are printed
}
