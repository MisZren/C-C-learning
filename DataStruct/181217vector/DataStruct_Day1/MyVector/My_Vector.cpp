// MyVector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
//#include "MyVector.h"
#include <vector>
#include <algorithm>
#include "VectorTemplate.h"

//my_vector
//void my_foo()
//{
//	CMyVector<int> v1;
//	CMyVector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(2);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		v2.push_back(5);
//	}
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		printf("%d ", v1[i]);
//	}

	//v1.swap(v2);
	//v1.clear();

	//v.insert(0, 4);
	//v.insert(2, 4);
	//v.insert(13, 4);

	//for (int i = 0; i < 15; i++)
	//{
	//	v.pop_back();
	//}

	//v.erase(0);
	//v.erase(2);

	//v.erase(0, 1);
	//v.erase(2, 4);
//}

//stl
void foo()
{
	std::vector<int> v1(10, 5);
	std::vector<int> v2(20, 3);

	std::for_each(v1.begin(), v1.end(), [=](int n)->void { std::cout << n << " "; });
	std::for_each(v2.begin(), v2.end(), [=](int n)->void { std::cout << n << " "; });

	//v1.swap(v2);
	v1.clear();


	//for (int i = 0; i < 11; i++)
	//{
	//	v.push_back(i);
	//}
	//v.pop_back();

	//auto it = v.begin();
	//v.erase(it);
	//v.erase(v.begin() + 1);

	
}

//模板
void foo_template()
{
	CMyVector<char> v1;
	v1.push_back('a');
	v1.push_back('b');
	v1.push_back('c');

	CMyVector<int> v2;
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
}

int main()
{
	//my_foo();
	//foo();
	foo_template();

    return 0;
}

