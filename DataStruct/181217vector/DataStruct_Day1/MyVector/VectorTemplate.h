#pragma once
#pragma once
#define VECTOR_CAPACITY 10
#include <new>

template<typename T>
class CMyVector
{
public:
	CMyVector()
	{
		m_pData = new T[10]{ 0 };
		m_nSize = 0;
		m_nCapacity = 10;
	}

	~CMyVector()
	{
		if (m_pData != nullptr)
		{
			delete[] m_pData;
			m_pData = nullptr;
		}

		m_nSize = 0;
		m_nCapacity = 10;
	}


	//����
	void push_back(const T& val) throw(std::bad_alloc)
	{
		//�����Ŀռ��Ƿ��㹻
		if (m_nSize + 1 > m_nCapacity)
		{
			m_nCapacity = m_nCapacity + VECTOR_CAPACITY;
			//��Ҫ���ݣ���Ҫ��������ռ�
			T* pData = new T[m_nCapacity];
			if (pData == nullptr)
			{
				throw std::bad_alloc();
			}

			//����ԭʼ����
			memcpy(pData, m_pData, m_nSize * sizeof(T));
			delete[] m_pData;
			m_pData = pData;
		}

		//�ռ��Ѿ���������
		m_pData[m_nSize++] = val;

	}

	//ɾ��
	void pop_back()
	{
		//�ж������Ƿ�Ϊ��
		if (m_nSize > 0)
		{
			m_pData[--m_nSize] = 0;
		}
	}

	void erase(int nIndex)
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

	void erase(int nStart, int nEnd)
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

	//����
	void insert(int nIndex, const T& val) throw(std::bad_alloc)
	{
		//�ж��Ƿ���Բ���
		if (nIndex <= m_nSize)
		{
			//�����Ŀռ��Ƿ��㹻
			if (m_nSize + 1 > m_nCapacity)
			{
				m_nCapacity = m_nCapacity + VECTOR_CAPACITY;
				//��Ҫ���ݣ���Ҫ��������ռ�
				T* pData = new T[m_nCapacity];
				if (pData == nullptr)
				{
					throw std::bad_alloc();
				}

				memcpy(pData, m_pData, m_nSize * sizeof(T));
				delete[] m_pData;
				m_pData = pData;
			}

			//��������Ԫ��
			memcpy(m_pData + nIndex + 1, m_pData + nIndex, (m_nSize - nIndex) * sizeof(T));
			m_pData[nIndex] = val;
			m_nSize++;
		}
	}

	//����
	void swap(CMyVector& obj)
	{
		T* pData;
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

	//���,ȫ����0
	void clear()
	{
		memset(m_pData, 0, m_nSize * sizeof(T));
		m_nSize = 0;
	}


	T& operator[] (int nIndex)
	{
		return m_pData[nIndex];
	}

	inline int size()
	{
		return m_nSize;
	}


private:
	T* m_pData;
	int  m_nSize;
	int  m_nCapacity;
};
