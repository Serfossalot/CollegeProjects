#pragma once
#include <string>
using namespace std;
class Employee
{
private:
	string Employee_Name;
	int Employee_Number;
	string Hire_Date;
public:
	Employee()
	{
		Employee_Name = "";
		Employee_Number = 0;
		Hire_Date = "";
	}
	Employee(string e_name, int e_num, string h_date)
	{
		Employee_Name = e_name;
		Employee_Number = e_num;
		Hire_Date = h_date;
	}

	void setEmployee_Name(string e_name)
	{
		Employee_Name = e_name;
	}
	void setEmployee_Number(int e_num)
	{
		Employee_Number = e_num;
	}
	void setHire_Date(string h_date)
	{
		Hire_Date = h_date;
	}
	string getEmployee_Name() const
	{
		return Employee_Name;
	}
	int getEmployee_Number() const
	{
		return Employee_Number;
	}
	string getHire_Date() const
	{
		return Hire_Date;
	}
};