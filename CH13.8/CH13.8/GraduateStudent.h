#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H
#include "Student.h"

class GraduateStudent : public Student
{
private:
	string researchTopic;
public:
	//Constructor
	GraduateStudent(string, int, string);
	//CopyConstructor
	GraduateStudent(const GraduateStudent& obj);
	
	//Setters and Getters for resarchTopic
	void setResearchTopic(const string& topic);
	string getResearchTopic() const;

	//Override displayInfo
	void displayInfo() const;


};
#endif