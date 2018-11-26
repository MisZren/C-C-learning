#pragma once
class CMyTestPower
{
public:
    CMyTestPower();
    ~CMyTestPower();

public:
    int m_nTestPublic_1 = 11;
    int m_nTestPublic_2 = 12;
    int m_nTestPublic_3 = 13;
    int TestPublic();

private:
    int m_nTestPrivate_1 = 21;
    int m_nTestPrivate_2 = 22;
    int m_nTestPrivate_3 = 23;
    int TestPrivate();

protected:
    int m_nTestProtected_1 = 31;
    int m_nTestProtected_2 = 32;
    int m_nTestProtected_3 = 33;
    int TestProtected();

public:
    void ShowMap();
};

