#pragma once
class CMyClock
{
public:
    CMyClock();
    ~CMyClock();

private:
    int m_nHour;
    int m_nMinute;

public:
    int SetHour(int nHour);
    int SetMinute(int nMinute);
    void ShowHour();
    void ShowMinute();
};

