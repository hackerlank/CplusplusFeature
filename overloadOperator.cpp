#include <iostream>
using namespace std;
class my
{
public:
	my();
	my(int para);
	~my();
	my operator+(my &para);
	my operator++();
	my operator++(int);
	friend my operator--(my &para);
	friend my operator-(my &para1, my &para2);
	friend ostream &operator<<(ostream &para1, my &para2);
	friend istream &operator>>(istream &para1, my &para2);
	int operator[](int i);
private:
	int dd;
	int arr[10] = { 0 };
};


istream &operator>>(istream &para1, my &para2)
{
	para1 >> para2.dd;
	return para1;
}

int my::operator[](int i)
{
	return this->arr[i];
}

ostream &operator<<(ostream &para1, my &para2)
{
	para1 << para2.dd;
	return para1;
}

my operator--(my &para)
{
	return my(--para.dd);
}

my my::operator++()
{

	return my(++(this->dd));
}
my my::operator++(int)
{
	return my((this->dd)++);
}
my::my()
{
	this->dd = 0;
}
my::my(int para)
{
	this->dd = para;
}
my::~my()
{
	this->dd = 0;
}
my my::operator+(my &para)
{
	return my(this->dd + para.dd);
}
my operator-(my &para1, my &para2)
{
	return my(para1.dd - para2.dd);
}

int main()
{
	my a(1), b(2), c;
	c = a + b;
	c = a - b;
	c=a++;
	c=++b;
	c = --a;
	cout << a;
	cin >> a;
	cout << a << endl;
	int temp = a[5];
	return 0;
}