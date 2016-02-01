#include <iostream>
#include <string>
using namespace std;

template<typename T>
T add(T para1, T para2)
{
	return para1 + para2;
}

template<typename T>
T square(T para) 
{
	return (T)(para*para);
}

template<>
string square<string>(string para)
{
	return para + para;
}

template <typename T, int count>
void loopIt(T x)
{
	T val[count];

	for (int ii = 0; ii < count; ii++)
	{
		val[ii] = x++;
		cout << val[ii] << endl;
	}
};


template <typename T = float, int count = 3>
T multIt(T x)
{
	for (int ii = 0; ii < count; ii++)
	{
		x = x * x;
	}
	return x;
};

int main()
{
	cout << add(3, 5) << endl;
	cout << add<double>(5.3, 5.2) << endl;

	int i = 2;
	string ww("AB");
	int ii = square<int>(i);
	cout << ii << endl;
	cout << square<string>(ww) << endl;

	float xx = 2.1;
	loopIt<float, 3>(xx);
	cout << xx << ": " << multIt<>(xx) << endl;;
}