// homework1.cpp : 定义控制台应用程序的入口点。
//
//2. 封装一个类CMyClock，要求有m_nHour, m_nMinute，可以设置时间，显示自己的时间，并分别获取m_nHour，m_nMinute。

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

