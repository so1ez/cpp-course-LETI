#include "stdafx.h"
#include "MyPhRecExB.h" // ����������� ����������


CMyPhRecExB::CMyPhRecExB() // �����������
{
}


CMyPhRecExB::~CMyPhRecExB() // ����������
{
}

bool CMyPhRecExB::Compare(CMyPhRecExB& Other) // ������� ����� ���� ���� ���������
{
	if (!CMyPhRecEx::Compare(Other)) // ���� ������ ������ �������, ��
	{
		CMyPhRecExB Tmp = Other; // �������� ���������� ������
		Other = *this; // ��������������� ������
		*this = Tmp; // ��������������� ������
		return true; // ����������� true
		//equals vvvvv
		/*Other.m_No = m_No;
		Other.m_Nik = m_Nik;
		Other.m_Addr = m_Addr;
		m_No = Tmp.m_No;
		m_Nik = Tmp.m_Nik;
		m_Addr = Tmp.m_Addr;*/
	}
	return false; // ����������� false 
}