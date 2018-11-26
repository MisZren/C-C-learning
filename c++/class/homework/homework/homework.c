// homework.cpp : �������̨Ӧ�ó������ڵ㡣
//

//1. ��ʱ��ClockΪ����ʹ��C���Զ����װ��Ҫ���װ���ݼ���Ϊ��
#include "stdafx.h"

//�������������ڽṹ���а�
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

