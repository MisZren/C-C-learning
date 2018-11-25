// homework1.cpp : 定义控制台应用程序的入口点。
//
//分别使用C和C++编译下面的代码，看看有什么区别，为什么 ?
//#include "stdafx.h"
//
//struct bird {
//    int nBird;
//};
//
//struct rock {
//    int rock;
//};
//
//void main() {
//    bird* b;
//    rock* r;
//    void* v;
//    v = r;
//    b = v;
//}

//===================================
//答案
//c中：
//struct bird* b;
//struct rock* r;
//void* v;
//
//v = r;//使用了未初始化的局部变量
//b = v;//使用了未初始化的局部变量
//===================================
//c++中
//struct bird {
//    int nBird;
//};
//
//struct Myrock {
//    int rock;
//};
//
//int main()
//{
//    bird* b;
//    Myrock* r;
//    void* v;
//    v = r;
//    b = (bird *)v;//从“void*”到指向非“void”的指针的转换要求显式类型转换
//
//    return 0;
//}

#include "stdafx.h"

struct bird {
    int nBird;
};

struct Myrock {
    int rock;
};

int main()
{
    bird* b;
    Myrock* r;
    void* v;
    v = r;
    b = v;

    return 0;
}

