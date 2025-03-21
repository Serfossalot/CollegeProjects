/*
Team#: _10
Team Member-1:Esmeralda Nuno Cortez___ Member’s Contribution (in %) 50
Team Member-2:Joel Serfoss____________ Member’s Contribution (in %) 50
Team Member-3:King Olutowoju__________ Member’s Contribution (in %) __

Submission
1.	Work on the following requirements.
2.	Show the results to the instructor. Please note that Lab score will be zero if you fail to show outputs to the instructor.
3.	Rename the CPP file to Lab2_P1_Team# for Problem-1.
4.	Upload your files to Canvas.

Problem-1
Write a program that asks to read a set of numbers from numbers.txt file [20 points], and sum the numbers [40 points].
The sum should be stored in an output file and displayed on screen [20 points]. The number.txt file is available in the lab
folder.

*/


#include <iostream>
#include <fstream>
//#include <iomanip>
//#include <string>
using namespace std;

int main()
{
	fstream inputfile;
	fstream outputfile;
	int number;
	int total = 0;

	inputfile.open("C:\\cpp\\numbers.txt", ios::in);

	if (inputfile)
	{
		while (inputfile >> number)
			total += number;
			
	}

	else
		cout << "Error the file is open!" << endl;
	
	
	inputfile.close();

	outputfile.open("C:\\cpp\\Output.txt", ios::out);
	outputfile << total;

	outputfile.close();


	cout << total << endl;

	system("pause");
	return 0;
	}