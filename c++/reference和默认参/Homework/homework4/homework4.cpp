// homework4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#define X(n) ((n)+(n+1))

//写一个函数，该函数使用指针作为参数，修改指针所指内容，然后用引用返回指针所指的内容。
int*& foo(int* pN)
{
    int n = 4;
    int*& pTmp = pN;
    *pTmp = 8;

    return pTmp;
}

//创建一个函数，使之参数为一个指向指针的指针的引用，要求该函数对其参数进行修改
int foo_1(int** &ppp)
{
    ppp = (int** )0x12345;

    return 0;
}

int main()
{
    int n = 5;
    int* p = &n;
    int** pp = &p;
    foo(&n);
    foo_1(pp);

    return 0;
}

