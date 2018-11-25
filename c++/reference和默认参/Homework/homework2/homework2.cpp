// homework2.cpp : 定义控制台应用程序的入口点。
//
//将下面的代码放入到main中，在输出时增加一些说明，以证明引用就相当于被自动间接引用的指针。

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

    //新增输出信息
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

