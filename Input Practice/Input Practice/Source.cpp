using namespace std;
#include <fstream>
#include <iostream>
#include <iomanip>
int main()
{
	int num;
	ifstream input;
	input.open("output.txt");
	while (input >> num)
		cout << num << endl;
	input.close();
	
	return 0;
}