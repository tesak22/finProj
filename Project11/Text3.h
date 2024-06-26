#pragma once
#include <iostream>

using namespace std;

class Rectangle
{
private:
	int a;
	int b;
public:
	explicit Rectangle(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	const int area();
	const int perimeter();
};

const int Rectangle::area()
{
	return a * b;
}
const int Rectangle::perimeter()
{
	return a + a + b + b;
}