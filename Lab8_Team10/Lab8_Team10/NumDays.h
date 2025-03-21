#ifndef NumDays_h
#define NumDays_H
#include <iostream>
using namespace std;

class NumDays
{
private:
	//Member Vairable
	float hours = 0.0;
	float days = 0.0;

public:
	//Member Functions

	//Constructor
	NumDays(float h = 0.0);

	void setHours(float h =0 );
	//void setDays(float d);
	float getHours() const;
	float getDays() const;
	//Value 1 + Value 2
	NumDays operator +(const NumDays& obj);
	//Operator < overload
	NumDays  operator <(const NumDays& obj);


};


#endif
