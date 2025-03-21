/*
Team#: _10
Team Member-1:Esmeralda Nuno Cortez___ Member’s Contribution (in %) 33
Team Member-2:Joel Serfoss____________ Member’s Contribution (in %) 33
Team Member-3:King Olutowoju__________ Member’s Contribution (in %) 33

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
using namespace std;

int main()
{
	fstream inputfile;
	fstream outputfile;
	float number = 0;
	float total = 0;

	inputfile.open("C:\\cpp\\numbers.txt", ios::in); //Open Input file

	if (inputfile)
	{
		while (inputfile >> number) //read date from file and store into the number variable
			total += number; // Add the numbers together and store in total variable
		inputfile.close(); // Close input file

		outputfile.open("C:\\cpp\\Output.txt", ios::out); // Open output file
		outputfile << "The total is " << total << endl; //Write total in the output file

		outputfile.close(); //close output file


		cout << "The total is " << total << endl; //Display total to console

	}
	else
	cout << "Error the file does not exist!" << endl; //Check to see if the file exists
	



	

	system("pause"); //This waits until the user presses any key
	return 0;
}