// homework3.cpp : 定义控制台应用程序的入口点。
//
//1.验证空类和空结构体的大小。
#include "stdafx.h"

class CBlankClass
{

};

struct tagBlankStrcut
{

};

int main()
{

    CBlankClass cbc;
    tagBlankStrcut tbs;

    printf("size of blank class: %d\r\n", sizeof(cbc));
    printf("size of blank struct: %d\r\n", sizeof(tbs));

    return 0;
}

