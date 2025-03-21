/*
Team#: 10
Team Member-1:Joel Serfoss ___________ Member’s Contribution (in %) __
Team Member-2:Esmeralda Nuno Cortez___ Member’s Contribution (in %) __
Team Member-3:King Olutowoju__________ Member’s Contribution (in %) __

Problem-2 [50 points]: Write a program that will read two floating point numbers
(the first read into a variable called first and the second read into a variable
called second) and then calls the function swap with the actual parameters first
and second. The swap() function having formal parameters number1 and number2 should
swap the value of the two variables. The function parameters are required to be pointers. */
#include <iostream>
using namespace std;
void swap(float *number1, float *number2) //swap function
{
	float temp;
	temp = *number1;
	*number1 = *number2;
	*number2 = temp;

}
/*void swap2(float a, float b) //Swap  2 Function to saw addresses
{
	float* temp;
	temp = a;
	b = a;
	b = temp;
}*/

int main()
{
	float first = 0;
	float second = 0;
	float* ptr1 = &first; //pointer to variable first
	float* ptr2 = &second; //pointer to variable second
	cout << "Please enter the first value:" << endl;
	cin >> *ptr1;
	cout << " Please enter the second value:" << endl;
	cin >> *ptr2;

	swap(*ptr1, *ptr2);//swap values using pointers

	cout << " After swapping using pointers the first value is " << *ptr1 << " And the second value is " << *ptr2 << endl;
	cout << endl;
	cout << endl;
	cout << "Address for first is " << &first << " Address for second is " << &second << endl;
	//swap2(*ptr1, *ptr2);

	cout << "After swapping addresses the first address is " << ptr1 << " Second address is now " << ptr2 << endl;
 	return 0;

}