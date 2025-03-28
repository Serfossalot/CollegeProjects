#ifndef MATHSTACH_H
#define MATHSTACK_H
#include "IntStack.h"
class MathStack : public IntStack {
public:
	MathStack(int s) : IntStack(s) {}
	void add();
	void sub();
	void mult();
	void div();
	void addall();
	void multall();
};
#endif