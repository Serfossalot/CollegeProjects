#include"NumberArray.h"
#include<iostream>
using namespace std;

NumberArray::NumberArray(int aSize)
{
	size = aSize;
	arrayPtr = new float[size];
	for (int i = 0; i < size; i++)
		arrayPtr[i] = 0;
}

NumberArray::~NumberArray()
{
	delete[] arrayPtr;
	arrayPtr = nullptr;
}
void NumberArray::setNumberValue(int index, float val)
{
	if (index >= 0 && index < size)
	{
		arrayPtr[index] = val;
	}
	
	else
	{
		cout << "Out of bounds!!" << endl;
		exit(EXIT_FAILURE);
	}
		
	
}

float NumberArray::average(int size)
{
	int total;
	float average;
	for (int i = 0; i < size; i++)
	{
		total += arrayPtr[i];
		average = total / size;
	}
	return 0.0f;
}

float NumberArray::getNumberValue(int index) const
{
	float temp = 0.0;

	if (index >= 0 && index < size)
	{
		temp = arrayPtr[index];
	}

	else
	{
		cout << "Out of bounds!!" << endl;
		exit(EXIT_FAILURE);
	}

	return temp;
}
