#include "stdafx.h"
#include "MyClock.h"


CMyClock::CMyClock()
{
}


CMyClock::~CMyClock()
{
}

//����Сʱ
//
//����ֵ��0��ʾ����ʧ�ܣ�1��ʾ���óɹ�
int CMyClock::SetHour(int nHour)
{
    if (nHour < 0 || nHour > 24)
    {
        printf("ʱ�䳬����ʶ\r\n");
        return 0;
    }

    m_nHour = nHour;

    return 1;
}

//���÷���
//
//����ֵ��0��ʾ����ʧ�ܣ�1��ʾ���óɹ�
int CMyClock::SetMinute(int nMinute)
{
    if (nMinute < 0 || nMinute > 60)
    {
        printf("ʱ�䳬����ʶ\r\n");
        return 0;
    }

    m_nMinute = nMinute;

    return 1;
}

//��ʾСʱ
//
void CMyClock::ShowHour()
{
    printf("Hour is : %d\r\n", m_nHour);
}

//��ʾ����
//
void CMyClock::ShowMinute()
{
    printf("Hour is : %d\r\n", m_nMinute);
}