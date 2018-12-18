// TestVector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

void MyFoo(int n)
{
	std::cout << n << " ";
}

//vector
int main()
{
	std::vector<int> v;

	//增
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	//插入
	//获取首个元素的位置，返回值是迭代器类型
	//auto it = v.begin();
	//迭代器是对元素的位置的封装的内部类
	std::vector<int>::iterator it = v.begin();

	//it++;
	it += 1;
	v.insert(it, 0);

	//v.erase(it);

	//删
	v.pop_back();

	//改
	v[1] = 100;

	//遍历
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}

	std::cout << std::endl;

	//迭代器遍历
	for (auto it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	for (auto n : v)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;

	std::for_each(v.begin(), v.end(), MyFoo);
	std::cout << std::endl;

	std::for_each(v.begin(), v.end(), [=](int n)->void { std::cout << n << " "; });

    return 0;
}

