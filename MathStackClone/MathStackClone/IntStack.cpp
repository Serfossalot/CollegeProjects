#include "IntStack.h"
#include<iostream>
using namespace std;
IntStack::IntStack(int size) {
	stackarray = new int[size];
	stacksize = size;
	top = -1;
}
IntStack::IntStack(const IntStack& obj) {
	if (obj.stacksize > 0)
		stackarray = new int[obj.stacksize];
	else
		stackarray = nullptr;
	stacksize = obj.stacksize;
	for (int count = 0; count < stacksize; count++)
		stackarray[count] = obj.stackarray[count];
	top = obj.top;
}
IntStack::~IntStack() {
	delete[] stackarray;
}
void IntStack::push(int num) {
	if (isFull())
		cout << "Stack is full." << endl;
	else {
		top++;
		stackarray[top] = num;
	}
}
void IntStack::pop(int& num) {
	if (isEmpty())
		cout << "The stack is empty." << endl;
	else {
		num = stackarray[top];
		top--;
	}
}
bool IntStack::isFull() const {
	return(top == stacksize - 1);
}
bool IntStack::isEmpty() const {
	return(top == -1);
}
