// homework2.cpp : 定义控制台应用程序的入口点。
//
//1.创建一个类，具有public private 和protected数据成员和函数成员。创建该类的一个对象，看看当试图访问所有的类成员时会得到一些什么编译信息。
//2.创建一个有很多数据成员的类，这些成员分布在public,private和protected所指定的区域中。增加一个成员函数showMap(),该成员函数打印出这些数据
//  成员的名字和它们的地址。如果有可能，在多个编译器、操作系统中编译运行这个程序，看目标代码中布局是否一样。

#include "stdafx.h"
#include "MyTestPower.h"

int main()
{
    CMyTestPower tp;

    //可以成功访问
    tp.m_nTestPublic_1 = 10;

    //无法访问，报错信息：“CMyTestPower::m_nTestPrivate_1”: 无法访问 private 成员(在“CMyTestPower”类中声明)
    //tp.m_nTestPrivate_1 = 11;

    //无法访问，报错信息：“CMyTestPower::m_nTestProtected_1”: 无法访问 protected 成员(在“CMyTestPower”类中声明)
    //tp.m_nTestProtected_1 = 12;

    //可以成功访问
    tp.TestPublic();

    //无法访问，报错信息：“CMyTestPower::TestPrivate”: 无法访问 private 成员(在“CMyTestPower”类中声明)
    //tp.TestPrivate();

    //无法访问，报错信息：“CMyTestPower::TestProtected”: 无法访问 protected 成员(在“CMyTestPower”类中声明)
    //tp.TestProtected();

    tp.ShowMap();
    return 0;
}

