#pragma once
class CTest
{
public:
    //CTest() = default;
    //CTest() = delete;
    CTest();
    explicit CTest(int n);
    ~CTest();

private:
    int m_n1;
    int m_n2;   
};

