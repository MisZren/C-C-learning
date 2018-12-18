#pragma once
#define VECTOR_CAPACITY 10
#include <new>

class CMyVector
{
public:
	CMyVector();
	~CMyVector();

	//增加
	void push_back(const int& val) throw(std::bad_alloc);
	//删除
	void pop_back();
	void erase(int nIndex);
	void erase(int nStart, int nEnd);

	//插入
	void insert(int nIndex, const int& val) throw(std::bad_alloc);

	//交换
	void swap(CMyVector& obj);

	//清除,全部置0
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

