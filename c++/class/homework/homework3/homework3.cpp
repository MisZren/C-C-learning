// homework3.cpp : �������̨Ӧ�ó������ڵ㡣
//
//1.��֤����Ϳսṹ��Ĵ�С��
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

