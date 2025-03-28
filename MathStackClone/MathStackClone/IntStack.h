#ifndef INTSTACK_H
#define INTSTACK_h
class IntStack {
	int* stackarray;
	int stacksize;
	int top;
public:
	IntStack(int);
	IntStack(const IntStack&);
	~IntStack();
	void push(int);
	void pop(int&);
	bool isEmpty() const;
	bool isFull() const;
};
#endif