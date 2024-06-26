#pragma once
#include <iostream>

using namespace std;

class Stack
{
	int size = 0;
	string items[10];
	int topp;

	bool isfull()
	{
		if (topp == 10 - 1)
			return 1;
		else
			return 0;
	}
	bool isempty()
	{
		if (topp == -1)
			return 1;
		else
			return 0;
	}

public:
	Stack() : topp(-1) {}

	void push(string newitem) {
		if (isfull()) {
			cout << "stack full" << endl;
		}
		else {
			topp++;
			items[topp] = newitem;
		}
		size++;
	}
	void pop() {
		if (isempty()) {
			cout << "stack empty" << endl;
		}
		else {
			topp--;
		}
		size--;
	}
	string top()
	{
		return items[topp];
	}

};