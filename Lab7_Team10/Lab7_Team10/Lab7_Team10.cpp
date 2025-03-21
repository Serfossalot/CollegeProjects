#include"NumberArray.h"
#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
	float tempVal = 0.0;
	int arraySize = 0;
	//input
	cout << "What size would you like?" << endl;
	cin >> arraySize;
	while (arraySize < 0)
	{
		cout << "Error!! Please enter positive array size" << endl;
		cin >> arraySize;
	}
	//processing
	NumberArray nums(arraySize);

	cout << "Enter the " << arraySize << " numbers:" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << "\t Number " << (i + 1) << ": ";
		cin >> tempVal;
		nums.setNumberValue(i, tempVal);
	}
	
	//output
	cout << "Here are the numbers you entered:" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << "Number" << (i + 1) << ": " << nums.getNumberValue(i);
		cin >> tempVal;
		nums.setNumberValue(i, tempVal);
	}

	return 0;
}