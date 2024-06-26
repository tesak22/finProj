#pragma once
#include <iostream>

using namespace std;

class Vector
{
private:
	int x;
	int y;
	int z;

public:
	Vector(int x, int y, int z) : x(x), y(y), z(z) {}

	friend ostream& operator<< (ostream& out, const Vector& v)
	{
		out << v.x << " " << v.y << " " << v.z;

		return out;
	}

	friend Vector operator+(const Vector a, const Vector b)
	{
		Vector c(a.x + b.x, a.y + b.y, a.z + b.z);

		return c;
	}
	friend Vector operator-(const Vector a, const Vector b)
	{
		Vector c(a.x - b.x, a.y - b.y, a.z - b.z);

		return c;
	}
	friend Vector operator*(const Vector a, const Vector b)
	{
		Vector c(a.x * b.x, a.y * b.y, a.z * b.z);

		return c;
	}

	friend bool operator==(const Vector a, const Vector b)
	{
		if (a.x == b.x && a.y == b.y && a.z == b.z)
		{
			return true;
		}
		return false;
	}

	friend bool operator!=(const Vector a, const Vector b)
	{
		if (a.x != b.x || a.y != b.y || a.z != b.z)
		{
			return true;
		}
		return false;
	}
};