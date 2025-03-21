#include "GraduateStudent.h"

int main()
{
	//Create Grad Student object
	GraduateStudent gs1("Joel", 3,"Cyber-Security");
	//Set Grades
	gs1.setGrade(0, 90);
	gs1.setGrade(1, 85);
	gs1.setGrade(2, 88);
	//Display Info
	gs1.displayInfo();
	//Create copy
	GraduateStudent gs2 = gs1;
	//Display Copy Info
	cout << "\nCopied GraduateStudent Info:" << endl;
	gs2.displayInfo();

	return 0;
}
