// homework2.cpp : �������̨Ӧ�ó������ڵ㡣
//
//1.����һ���࣬����public private ��protected���ݳ�Ա�ͺ�����Ա�����������һ�����󣬿�������ͼ�������е����Աʱ��õ�һЩʲô������Ϣ��
//2.����һ���кܶ����ݳ�Ա���࣬��Щ��Ա�ֲ���public,private��protected��ָ���������С�����һ����Ա����showMap(),�ó�Ա������ӡ����Щ����
//  ��Ա�����ֺ����ǵĵ�ַ������п��ܣ��ڶ��������������ϵͳ�б�������������򣬿�Ŀ������в����Ƿ�һ����

#include "stdafx.h"
#include "MyTestPower.h"

int main()
{
    CMyTestPower tp;

    //���Գɹ�����
    tp.m_nTestPublic_1 = 10;

    //�޷����ʣ�������Ϣ����CMyTestPower::m_nTestPrivate_1��: �޷����� private ��Ա(�ڡ�CMyTestPower����������)
    //tp.m_nTestPrivate_1 = 11;

    //�޷����ʣ�������Ϣ����CMyTestPower::m_nTestProtected_1��: �޷����� protected ��Ա(�ڡ�CMyTestPower����������)
    //tp.m_nTestProtected_1 = 12;

    //���Գɹ�����
    tp.TestPublic();

    //�޷����ʣ�������Ϣ����CMyTestPower::TestPrivate��: �޷����� private ��Ա(�ڡ�CMyTestPower����������)
    //tp.TestPrivate();

    //�޷����ʣ�������Ϣ����CMyTestPower::TestProtected��: �޷����� protected ��Ա(�ڡ�CMyTestPower����������)
    //tp.TestProtected();

    tp.ShowMap();
    return 0;
}

