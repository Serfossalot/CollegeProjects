/*
 Larger than n
In a program, write a function that accepts three arguments: an array, the size of the array, and a 
number

n. Assume the array contains integers. The function should display all of the numbers in the array that are 
greater than the number

n.

*/
#include <iostream>
using namespace std;
void greaterThan(int [], int, int);

int main()
{
	int spacedOut = 7;
	const int size = 5;
	int array[size] = { 10, 20, 30, 5, 25 };
	greaterThan(array, size, spacedOut);

	return 0;
}
void greaterThan(int arr[], int howmany, int n)
{
	bool found = false;
	for (int i = 0; i < howmany; i++)
		if (n < arr[i])
		{
			cout << "Element at index " << i  << " is " << arr[i] << " and is greater than " << n << endl;
			found = true;
		}
	if (!found)
	{
		cout << "There are no elements greater than "<< n << endl;
	}
}