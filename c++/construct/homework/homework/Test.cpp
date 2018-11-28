#include "stdafx.h"
#include "Test.h"
#include <iostream>

CTest::CTest()   
{
    std::cout << "CTest::CTest()" << std::endl;
}

CTest::CTest(int n)
{
    std::cout << "CTest::CTest(int n)" << std::endl;
}



CTest::~CTest()
{
    std::cout << "CTest::~CTest()" << std::endl;
}
