// homework1.cpp : �������̨Ӧ�ó������ڵ㡣
//
//�ֱ�ʹ��C��C++��������Ĵ��룬������ʲô����Ϊʲô ?
//#include "stdafx.h"
//
//struct bird {
//    int nBird;
//};
//
//struct rock {
//    int rock;
//};
//
//void main() {
//    bird* b;
//    rock* r;
//    void* v;
//    v = r;
//    b = v;
//}

//===================================
//��
//c�У�
//struct bird* b;
//struct rock* r;
//void* v;
//
//v = r;//ʹ����δ��ʼ���ľֲ�����
//b = v;//ʹ����δ��ʼ���ľֲ�����
//===================================
//c++��
//struct bird {
//    int nBird;
//};
//
//struct Myrock {
//    int rock;
//};
//
//int main()
//{
//    bird* b;
//    Myrock* r;
//    void* v;
//    v = r;
//    b = (bird *)v;//�ӡ�void*����ָ��ǡ�void����ָ���ת��Ҫ����ʽ����ת��
//
//    return 0;
//}

#include "stdafx.h"

struct bird {
    int nBird;
};

struct Myrock {
    int rock;
};

int main()
{
    bird* b;
    Myrock* r;
    void* v;
    v = r;
    b = v;

    return 0;
}

