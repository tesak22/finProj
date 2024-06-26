#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person(string name, int age)
	{
		this->age = age;
		this->name = name;
	}
	Person()
	{
		this->age = 0;
		this->name = nullptr;
	}
	Person(Person* p)
	{
		this->name = p->name;
		this->age = p->age;
	}

	string getName() const
	{
		return name;
	}
	int getAge() const
	{
		return age;
	}
};