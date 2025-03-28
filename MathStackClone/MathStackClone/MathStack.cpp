#include "MathStack.h"
#include <iostream>
using namespace std;
void MathStack::add() {
	int num, sum;
	pop(sum);
	pop(num);
	push(sum + num);
}
void MathStack::sub() {
	int diff, num;
	pop(diff);
	pop(num);
	push(diff - num);
}
void MathStack::mult() {
	int product, num;
	pop(product);
	pop(num);
	push(product * num);
}
void MathStack::div() {
	int numerator, denominator;
	pop(denominator);
	pop(numerator);
	if (denominator == 0)
		cout << "Error! Cannot divide by zero." << endl;
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