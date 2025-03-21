#pragma once
#include <string>
#include "Emplyee.h"

using namespace std;
class ProductionWorker: public Employee
{
	
private:
	int shift;
	double Hourly_PayRate;
public:
	ProductionWorker(): Employee()
	{

		shift = 0;
		Hourly_PayRate = 0.0;
	}
	ProductionWorker(int s, double p): Employee (e_name, e_num, h_date)
	{
		Employee_Name = e_name;
		Employee_Number - e_num;
		Hire_Date = h_date;
		shift = s;
		Hourly_PayRate = p;
	}
	void setshift(int s)
	{
		shift = s;
	}
	void setHourly_PayRate(double p)
	{
		Hourly_PayRate = p;
	}
	int getShift()
	{
		return shift;
	}
	double getHourly_PayRate()
	{
		return Hourly_PayRate;
	}
};