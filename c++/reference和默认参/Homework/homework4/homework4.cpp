// homework4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

#define X(n) ((n)+(n+1))

//дһ���������ú���ʹ��ָ����Ϊ�������޸�ָ����ָ���ݣ�Ȼ�������÷���ָ����ָ�����ݡ�
int*& foo(int* pN)
{
    int n = 4;
    int*& pTmp = pN;
    *pTmp = 8;

    return pTmp;
}

//����һ��������ʹ֮����Ϊһ��ָ��ָ���ָ������ã�Ҫ��ú���������������޸�
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

