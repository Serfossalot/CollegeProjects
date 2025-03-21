//This program will let you know if the input file is created
using namespace std;
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
int main()
{
	string filename = "example.txt";
	ifstream input(filename);
	if (!input.good())
	{	cout << "File does not exist" << endl;
	return 1;
}
	input.open(filename);

}