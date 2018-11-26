// homework.cpp : 定义控制台应用程序的入口点。
//

//1. 以时钟Clock为例，使用C语言对其封装，要求封装数据及行为。
#include "stdafx.h"

//将函数和数据在结构体中绑定
typedef int(*PFN_SetTime)(struct tagClock* pClock, int nHour, int nMinute, int nSecond);

struct tagClock
{
    int nHour;
    int nMinute;
    int nSecond;

    PFN_SetTime pfn_set;
};

int SetTime(struct tagClock* pClock, int nHour, int nMinute, int nSecond)
{
    pClock->nHour = nHour;
    pClock->nMinute = nMinute;
    pClock->nSecond = nSecond;

    return 0;
}

int main()
{
    struct tagClock clk;

    clk.pfn_set = SetTime;
    clk.pfn_set(&clk, 12, 30, 59);

    printf("nHour is : %d\r\n", clk.nHour);
    printf("nMinute is : %d\r\n", clk.nMinute);
    printf("nSecond is : %d\r\n", clk.nSecond);

    return 0;
}

