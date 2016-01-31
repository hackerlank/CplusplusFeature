#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	//map<int, string> testmap;
	//testmap.insert(pair<int,string>(10,"a"));
	//testmap.insert(pair<int, string>(0, "b"));
	//testmap.insert(pair<int, string>(5, "c"));
	//for (map<int, string>::iterator it = testmap.begin(); it != testmap.end(); ++it)
	//{
	//	cout << (*it).first << "\t" << (*it).second << endl;
	//}
	//cout << endl;
	//map<int, string>::iterator it = testmap.find(10);
	//cout << (*it).first << "\t" << (*it).second;
	//testmap.erase(it);
	//it = testmap.find(10);
	//if (it == testmap.end())
	//{
	//	cout << "Not exist";
	//}

	//list<int> *testlist2;
	//testlist2 = new list<int>();
	//testlist2->push_back(1);
	//testlist2->push_front(5);
	//testlist2->push_front(8);
	//testlist2->sort();
	//for (list<int>::iterator it = testlist2->begin(); it != testlist2->end(); ++it)
	//{
	//	cout << *it << "\t";
	//}




	//list<int> testlist;
	//testlist.push_back(3);
	//testlist.push_back(2);
	//testlist.push_front(5);
	//testlist.push_front(6);
	//testlist.sort();
	//for (list<int>::iterator it = testlist.begin(); it != testlist.end(); ++it)
	//{
	//	cout << *it << "\t";
	//}
	//testlist.erase(testlist.begin());
	//testlist.clear();


	//deque<int> testdeque;
	//testdeque.push_back(0);
	//testdeque.push_front(2);
	//testdeque.push_front(1);
	//testdeque.push_back(4);
	//sort(testdeque.begin(), testdeque.end());
	//for (deque<int>::iterator it = testdeque.begin(); it < testdeque.end();++it)
	//{
	//	cout << *it<<"\t";
	//}
	//for (int i = 0; i < 4; ++i)
	//{
	//	cout << testdeque[i] << "\t";
	//}
	//testdeque.erase(testdeque.begin());
	//testdeque.clear();

	//vector<string> testvec;
	//testvec.push_back("1");
	//testvec.push_back("2");
	//testvec.push_back("3");
	//testvec.insert(testvec.begin() + 1, "7");

	//for (vector<string>::iterator it = testvec.begin(); it < testvec.end(); ++it)
	//{
	//	cout << *it << endl;
	//}
	//vector<string>::iterator it = testvec.begin();
	//it += 2;
	//cout << *it << endl;

	//vector<vector<int>> test;
	//vector<int> temp;
	//temp.push_back(0);
	//temp.push_back(1);
	//temp.push_back(3);
	//test.push_back(temp);
	//test.push_back(temp);
	//test.push_back(temp);
	//for (int i = 0; i < 3; ++i)
	//{
	//	for (int j = 0; j < 3; ++j)
	//	{
	//		cout << test[i][j] << "\t";
	//	}
	//	cout << endl;
	//}
	//for (vector<vector<int>>::iterator it1 = test.begin(); it1 < test.end(); ++it1)
	//{
	//	for (vector<int>::iterator it2 = it1->begin(); it2 < it1->end(); ++it2)
	//	{
	//		cout << *it2 << "\t";
	//	}
	//	cout << endl;
	//}




	return 0;
}