#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class A 
{

public:
	A()
	{
		cout << "A::A" << endl;
	}

	virtual ~A() 
	{ 
		cout << "A::~A" << endl;
		f(); 
	}

	virtual void f(int x=1) 
	{ 
		cout << "A::f" << x << endl;
	}

};

class B : public A 
{

public:
	B()
	{
		cout << "B::B" << endl;
	}

	~B() 
	{ 
		cout << "B::~B" << endl;
	}

	virtual void f(int x=2) 
	{ 
		cout << "B::f" << x << endl;
	}

};

int main()
{
	B* a = new B;
	a->f();
	a->A::f();
	a->B::f();
	delete a;

	return 0;
}