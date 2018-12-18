#pragma once
#define VECTOR_CAPACITY 10
#include <new>

class CMyVector
{
public:
	CMyVector();
	~CMyVector();

	//����
	void push_back(const int& val) throw(std::bad_alloc);
	//ɾ��
	void pop_back();
	void erase(int nIndex);
	void erase(int nStart, int nEnd);

	//����
	void insert(int nIndex, const int& val) throw(std::bad_alloc);

	//����
	void swap(CMyVector& obj);

	//���,ȫ����0
	void clear();


	int& operator[] (int nIndex);

	inline int size()
	{
		return m_nSize;
	}


private:
	int* m_pData;
	int  m_nSize;
	int  m_nCapacity;
};

