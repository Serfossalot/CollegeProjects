#include "GraduateStudent.h"
//Constructor
GraduateStudent::GraduateStudent(string name, int numGrades, string topic) 
	: Student(name, numGrades), researchTopic(topic) {}
GraduateStudent::GraduateStudent(const GraduateStudent& obj)
	:Student(obj), researchTopic(obj.researchTopic) {}
//Get Research Topic
string GraduateStudent::getResearchTopic() const
{
	return researchTopic;
}
//Setter for researchTopic
void GraduateStudent::setResearchTopic(const string& topic)
{
	researchTopic = topic;
}
//Overridden Display Function
void GraduateStudent::displayInfo() const
{
	Student::displayInfo();
	cout << "Research Topic: " << researchTopic << endl;
}