#pragma once
#include <iostream>

using namespace std;

class Animal
{
private:
	string name;
	int age;

public:
	void setName(string n)
	{
		name = n;
	}
	void setAge(int a)
	{
		age = a;
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