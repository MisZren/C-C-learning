// homework1.cpp : �������̨Ӧ�ó������ڵ㡣
//
//2. ��װһ����CMyClock��Ҫ����m_nHour, m_nMinute����������ʱ�䣬��ʾ�Լ���ʱ�䣬���ֱ��ȡm_nHour��m_nMinute��

#include "stdafx.h"
#include "MyClock.h"

typedef int(CMyClock::*PFN_SetHour)(int nHour);

int main()
{
    CMyClock clk;
    int nHour = 12;
    int nMinute = 30;

    clk.SetHour(nHour);
    clk.SetMinute(nMinute);
    clk.ShowHour();
    clk.ShowMinute();

    PFN_SetHour pfn_SetHour;
    pfn_SetHour = &CMyClock::SetHour;
    CMyClock *pclk = &clk;
    (pclk->*pfn_SetHour)(22);
    clk.ShowHour();



    return 0;
}

