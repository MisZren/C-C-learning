// homework2.cpp : �������̨Ӧ�ó������ڵ㡣
//
//������Ĵ�����뵽main�У������ʱ����һЩ˵������֤�����þ��൱�ڱ��Զ�������õ�ָ�롣

#include "stdafx.h"
#include <iostream>

int main()
{
    // Ordinary free-standing reference:
    int y = 9;
    int& r = y;
    // When a reference is created, it must
    // be initialized to a live object.
    // However, you can also say:

    //���������Ϣ
    std::cout << "y = " <<  y << std::endl;
    std::cout << "y = " <<  *(&r) << std::endl;

    const int& q = 12; // (1)
                       // References are tied to someone else's storage:
    int x = 0; // (2)
    int& a = x; // (3)

    std::cout << "x = " << x << ", a = " << a << std::endl;
    a++;
    std::cout << "x = " << x << ", a = " << a << std::endl;
    return 0;
}

