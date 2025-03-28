// Implementation file for the MathStack class
#include "MathStack.h"
using namespace std;
#include<iostream>

//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
//***********************************************

void MathStack::add()
{
   int num, sum;

   // Pop the first two values off the stack.
   pop(sum);
   pop(num);

   // Add the two values, store in sum.
   sum += num;

   // Push sum back onto the stack.
   push(sum);
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
//***********************************************

void MathStack::sub()
{
   int num, diff;

   // Pop the first two values off the stack.
   pop(diff);
   pop(num);

   // Subtract num from diff.
   diff -= num;

   // Push diff back onto the stack.
   push(diff);
}
void MathStack::mult() {
	int num, product;
	pop(num);
	pop(product);
	push(product * num);
}
void MathStack::div() {
	int denominator, numerator;
	pop(denominator);
	pop(numerator);
	if (denominator == 0)
		cout << "Error! Cannot divide by zero!" << endl;
	else
		push(numerator / denominator);
}
void MathStack::addall() {
	int total = 0;
	int num;
	while (!isEmpty()) {
		pop(num);
		total += num;
	}
	push(total);
}
void MathStack::multall() {
	int product = 1;
	int num;
	while (!isEmpty()) {
		pop(num);
		product *= num;
	}
	push(product);
}