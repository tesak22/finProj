#include <iostream>
#include <stack>

#include "Text1.h"
#include "Text2.h"
#include "Text3.h"
#include "Text4.h"
#include "Text5.h"
#include "Text7.h"
#include "Text8.h"

using namespace std;

class A
{
	virtual void func()
	{

	}
};

class B : public A
{
public:
	void derivedF()
	{
		cout << "Derived" << endl;
	}
};

void main()
{
	/* 12
	
	A* a = new B();
	B* b = dynamic_cast<B*>(a);

	if (b)
	{
		b->derivedF();
	}
	else
	{
		cerr << "error";
	}

	delete a;*/


	/* 10 
	
	int num1;
	int num2;

	cin >> num1;
	cin >> num2;

	cout << "num1 / num2 = ";

	try
	{
		if (num2 == 0)
		{
			throw 999;
		}
		cout << num1 / num2 << endl;
	}
	catch (int thr)
	{
		cerr << "error" << endl;*/


	/* 9 
	
	Employee e();

	FullTimeEmployee full;
	cout << full.calculateSalary() << endl;
	PartTimeEmployee part;
	cout << part.calculateSalary() << endl;*/



	/* 8 

	Shape shape();

	Triangle tr;
	Rectangle7 re;
	cout << tr.getCor() << endl;
	cout << re.getCor() << endl;*/


	


	/* 6
	
	Stack st;

	st.push("fdsd");
	st.push("fdsd");
	st.push("a");


	st.pop();
	cout << st.top();*/


	/* 5

	Vector a1(5, 8, 3);
	Vector a2(4, 2, 7);

	Vector a3 = a1 + a2;
	Vector a4 = a1 - a2;
	Vector a5 = a1 * a2;

	cout << a3 << endl;
	cout << a4 << endl;
	cout << a5 << endl;

	if (a1 != a2)
	{
		cout << "false" << endl;
	}

	if (a1 == a1)
	{
		cout << "true";
	}*/



	/* 4

	Rectangle a(5, 6);

	cout << a.area() << endl;
	cout << a.perimeter() << endl;*/



	/* 3

	Person p1("Zhena", 16);
	Person p2(p1);

	cout << p1.getAge() << "  " << p1.getName() << endl;
	cout << p2.getAge() << "  " << p2.getName() << endl;*/



	/* 2

	Animal a;

	a.setAge(5);
	a.setName("Joi");

	cout << a.getName() << endl << a.getAge() << endl;*/


	/* 1

	Система керування версіями — програмний інструмент для керування версіями одиниці інформації
		: початкового коду програми, скрипту, вебсторінки, вебсайту, 3D - моделі, текстового документу*/
}