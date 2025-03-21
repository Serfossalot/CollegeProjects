/*Array Allocator

Write a function that dynamically allocates an array of integers. The function should accept an integer argument
indicating the number of elements to allocate. The function should return a pointer to the array.
*/
#include <iostream>
using namespace std;
int* dynArray(int);

int main()
{
	int size = 0;
	cout << "How many elements would you like the array to have?" << endl;
	cin >> size;
	while (size < 1)
	{
		cout << "You have entered a zero or negative value for size. Please enter a number greater than zero." << endl;
		cin >> size;
	}
	int * myarray = dynArray(size);
	for (int i = 0; i < size; i++)
	{
		myarray[i] = i + 1;
		cout << "Element number " << i + 1 << " now holds the value of " << myarray[i] << "." << endl;
		cout << endl;
	}
	delete[] myarray;
	myarray = nullptr;
	cout << "The dynamic array has been deleted, and the pointer is now set to null ptr." << endl;
	return 0;

}
int* dynArray(int s)
{
	int* arr = new int[s];
	return arr;
}