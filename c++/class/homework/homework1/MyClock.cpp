#include "stdafx.h"
#include "MyClock.h"


CMyClock::CMyClock()
{
}


CMyClock::~CMyClock()
{
}

//设置小时
//
//返回值：0表示设置失败，1表示设置成功
int CMyClock::SetHour(int nHour)
{
    if (nHour < 0 || nHour > 24)
    {
        printf("时间超过常识\r\n");
        return 0;
    }

    m_nHour = nHour;

    return 1;
}

//设置分钟
//
//返回值：0表示设置失败，1表示设置成功
int CMyClock::SetMinute(int nMinute)
{
    if (nMinute < 0 || nMinute > 60)
    {
        printf("时间超过常识\r\n");
        return 0;
    }

    m_nMinute = nMinute;

    return 1;
}

//显示小时
//
void CMyClock::ShowHour()
{
    printf("Hour is : %d\r\n", m_nHour);
}

//显示分钟
//
void CMyClock::ShowMinute()
{
    printf("Hour is : %d\r\n", m_nMinute);
}