// TestVector.cpp : �������̨Ӧ�ó������ڵ㡣
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

	//��
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	//����
	//��ȡ�׸�Ԫ�ص�λ�ã�����ֵ�ǵ���������
	//auto it = v.begin();
	//�������Ƕ�Ԫ�ص�λ�õķ�װ���ڲ���
	std::vector<int>::iterator it = v.begin();

	//it++;
	it += 1;
	v.insert(it, 0);

	//v.erase(it);

	//ɾ
	v.pop_back();

	//��
	v[1] = 100;

	//����
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}

	std::cout << std::endl;

	//����������
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

