#pragma once
#include <iostream>

using namespace std;

class Shape
{
protected:
	int corners = 0;
public:
	virtual int getCor() = 0;
};

class Rectangle7 : public Shape
{
public:
	Rectangle7()
	{
		corners = 4;
	}

	int getCor() override
	{
		return corners;
	}
};

class Triangle : public Shape
{
public:
	Triangle() 
	{
		corners = 3;
	}

	int getCor() override
	{
		return corners;
	}
};