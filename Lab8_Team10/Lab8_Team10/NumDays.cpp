#include "NumDays.h"

NumDays::NumDays(float h = 0.0)
{
	hours = h;
	days = hours / 8;
}

void NumDays::setHours(float h)
{
	hours = h;
	days = hours / 8;
}

//void NumDays::setDays(float d)
//{
	//days = d;
	//hours = days * 8.0;
//}

float NumDays::getHours() const
{
	return hours;
}

float NumDays::getDays() const
{
	return days;
}

NumDays NumDays::operator+(const NumDays& obj)
{
	NumDays temp;
	temp.setHours(hours + obj.hours);
	//temp.hours + obj.hours;
	//temp.days = temp.hours / 8.0;
	return temp;
}

NumDays NumDays::operator<(const NumDays& obj)

	bool status
	NumDays temp;

	return temp;
}
