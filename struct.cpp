#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

struct A
{
	A()
	{
		cout << "A!!!" << endl;
	}
	virtual ~A()
	{
		std::cout << "~A" << endl;
	}
	void fun(int x=1)
	{
		cout << x << "A..F" << endl;
	};
};

struct B : A
{
	B()
	{
		cout << "B!!!" << endl;
	}
	virtual ~B()
	{
		std::cout << "~B" << endl;
	}
	void fun(int x=2)
	{
		cout << x << "B..F" << endl;
	};
};
int main()
{
	B *a = new B();
	a->fun();
	a->A::fun();
	a->B::fun();
	delete a;
	return 0;
}