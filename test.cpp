#include <iostream>
#include <string>
using namespace std;


void add(int &q,int &w)
{
	cout << q << w;
	q = 5; w = 6;
}

void add2(int *q, int *w)
{
	cout << *q << *w << endl;
	cout << q << w << endl;
	*q = 5; *w = 6;
}

void test (int q[])
{
	cout << q[0] << q[1] << q[2] << endl;
	q[0] = 3; q[1] = 4; q[2] = 5;
}

void stringtest(string &in1, string &in2)
{
	cout << in1 << in2 << endl;
	in1 = "hello"; in2 = "haha";
}
int main()
{
	//int a = 3;
	//int b = 3;
	//int c[3] = { 0,1,2 };
	//cout << c[0] << c[1] << c[2] << endl;
	//test(c);
	//cout << c[0] << c[1] << c[2] << endl;
	//add(a, b);
	//add2(&a, &b);
	//cout << a << b;
	string str1 = "yuanyi"; string str2 = "sun";
	stringtest(str1, str2);
	cout << str1 << str2 << endl;
	return 0;
}