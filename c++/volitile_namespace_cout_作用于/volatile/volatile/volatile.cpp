// volatile.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int foo(int argc)
{
    return argc + 2;
}

int foo_N(int n)
{
    return n + 2;
}

int main(int argc, char* argv[])
{
    int nVolatile = 1;

    int nTest_1 = nVolatile;
    std::cout << "nVolatile = " << nTest_1 << std::endl;

    __asm
    {
        mov dword ptr [ebp - 8], 20h
    }

    //int* pN = &nVolatile;
    //*pN = 32;

    int nTest_2 = nVolatile;
    std::cout << "nVolatile = " << nTest_2 << std::endl;

    return 0;
}

//int foo(int argc) {
//
//    return argc + 10;
//}

////volatile 易变的
//int main(int argc, char* argv[])
//{
//    volatile int n = 0;
//
//    int* pN = const_cast<int*>(&n);
//    //int* pN = (int*)(&n);
//    printf("%p", pN);
//
//    n = foo(argc);
//
//    int k = 0;
//    printf("%d", n);
//
//    return 0;
//}

