#pragma once
#include <iostream>

using namespace std;

class Employee
{
protected:
	int salary = 0;

public:
	virtual int calculateSalary() = 0;
};

class FullTimeEmployee : public Employee
{
public:
	FullTimeEmployee()
	{
		salary = 1000;
	}

	int calculateSalary() override
	{
		return salary;
	}
};

class PartTimeEmployee : public Employee
{
public:
	PartTimeEmployee()
	{
		salary = 500;
	}

	int calculateSalary() override
	{
		return salary;
	}
};