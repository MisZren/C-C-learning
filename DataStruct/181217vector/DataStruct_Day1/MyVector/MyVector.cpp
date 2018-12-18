#include "stdafx.h"
#include "MyVector.h"
#include <new>

//const int VECTOR_SIZE = 10;
CMyVector::CMyVector()
{
	m_pData = new int[10]{ 0 };
	m_nSize = 0;
	m_nCapacity = 10;
}


CMyVector::~CMyVector()
{
	if (m_pData != nullptr)
	{
		delete[] m_pData;
		m_pData = nullptr;
	}

	m_nSize = 0;
	m_nCapacity = 10;
}

void CMyVector::push_back(const int& val) throw(std::bad_alloc)
{
	//插入后的空间是否足够
	if (m_nSize + 1 > m_nCapacity)
	{
		m_nCapacity = m_nCapacity + VECTOR_CAPACITY;
		//需要扩容，需要重现申请空间
		int* pData = new int[m_nCapacity];
		if (pData == nullptr)
		{
			throw std::bad_alloc();
		}

		//拷贝原始数据
		memcpy(pData, m_pData, m_nSize * sizeof(int));
		delete[] m_pData;
		m_pData = pData;
	}

	//空间已经扩充完整
	m_pData[m_nSize++] = val;

}

int& CMyVector::operator[] (int nIndex)
{
	return m_pData[nIndex];
}

void CMyVector::pop_back()
{
	//判断数组是否为空
	if (m_nSize > 0)
	{
		m_pData[--m_nSize] = 0;
	}
}


void CMyVector::insert(int nIndex, const int& val) throw(std::bad_alloc)
{
	//判断是否可以插入
	if (nIndex <= m_nSize)
	{
		//插入后的空间是否足够
		if (m_nSize + 1 > m_nCapacity)
		{
			m_nCapacity = m_nCapacity + VECTOR_CAPACITY;
			//需要扩容，需要重现申请空间
			int* pData = new int[m_nCapacity];
			if (pData == nullptr)
			{
				throw std::bad_alloc();
			}

			memcpy(pData, m_pData, m_nSize * sizeof(int));
			delete[] m_pData;
			m_pData = pData;
		}

		//插入新增元素
		memcpy(m_pData + nIndex + 1, m_pData + nIndex, (m_nSize - nIndex) * sizeof(int));
		m_pData[nIndex] = val;
		m_nSize++;
	}
}


void CMyVector::erase(int nIndex)
{
	if (m_nSize == 1)
	{
		m_pData[0] = 0;
	}
	else
	{
		for (int i = nIndex; i < m_nSize; i++)
		{
			m_pData[i] = m_pData[i + 1];
			m_pData[i + 1] = 0;
		}
	}

	m_nSize--;
}

void CMyVector::erase(int nStart, int nEnd)
{
	for (int nCount = 0; nCount <= nEnd - nStart; nCount++)
	{
		for (int i = nStart; i < m_nSize; i++)
		{
			m_pData[i] = m_pData[i + 1];
			m_pData[i + 1] = 0;
		}
	}

	m_nSize = m_nSize - (nEnd - nStart) - 1;
}


void CMyVector::swap(CMyVector& obj)
{
	int* pData;
	int  nSize;
	int  nCapacity;

	pData = this->m_pData;
	this->m_pData = obj.m_pData;
	obj.m_pData = pData;

	nSize = this->m_nSize;
	this->m_nSize = obj.m_nSize;
	obj.m_nSize = nSize;

	nCapacity = this->m_nCapacity;
	this->m_nCapacity = obj.m_nCapacity;
	obj.m_nCapacity = nCapacity;
}


void CMyVector::clear()
{
	memset(m_pData, 0, m_nSize * sizeof(int));
	m_nSize = 0;
}
