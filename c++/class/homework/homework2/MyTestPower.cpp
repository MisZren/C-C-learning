#include "stdafx.h"
#include "MyTestPower.h"


CMyTestPower::CMyTestPower()
{
}


CMyTestPower::~CMyTestPower()
{
}

int CMyTestPower::TestPublic()
{
    printf("int TestPublic();\r\n");
    return 0;
}

int CMyTestPower::TestPrivate()
{
    printf("int TestPrivate();\r\n");
    return 0;
}

int CMyTestPower::TestProtected()
{
    printf("int TestProtected();\r\n");
    return 0;
}

//显示所有成员信息
//
//和目标代码中的布局是一样的
void CMyTestPower::ShowMap()
{
    printf("name is m_nTestPublic_1\taddress is : %p\r\n", &m_nTestPublic_1);
    printf("name is m_nTestPublic_2\taddress is : %p\r\n", &m_nTestPublic_2);
    printf("name is m_nTestPublic_3\taddress is : %p\r\n\r\n", &m_nTestPublic_3);

    printf("name is m_nTestPrivate_1\taddress is : %p\r\n", &m_nTestPrivate_1);
    printf("name is m_nTestPrivate_2\taddress is : %p\r\n", &m_nTestPrivate_2);
    printf("name is m_nTestPrivate_3\taddress is : %p\r\n\r\n", &m_nTestPrivate_3);

    printf("name is m_nTestProtected_1\taddress is : %p\r\n", &m_nTestProtected_1);
    printf("name is m_nTestProtected_2\taddress is : %p\r\n", &m_nTestProtected_2);
    printf("name is m_nTestProtected_3\taddress is : %p\r\n\r\n", &m_nTestProtected_3);
}