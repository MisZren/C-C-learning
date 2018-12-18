// DataStruct_Day1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

//今天得看下迭代器

//存储一些字符串，"Hello World"

//使用顺序存储
// 利用存储的地址来描述数据的关系
//google高危漏洞，业务逻辑漏洞

void foo() 
{
	char szBuf[] = "Hello World";
}


struct CNode
{
	char ch;
	CNode* pNext;
	CNode* pPre;
};

int main()
{
	foo();

    return 0;
}

