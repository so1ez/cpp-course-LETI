#include "stdafx.h" // 
#include "MyPhRecEx.h" // ����������� ���������


CMyPhRecEx::CMyPhRecEx() // �����������
{
}


CMyPhRecEx::~CMyPhRecEx() // ����������
{
}

int CMyPhRecEx::Compare(CMyPhRecEx& Other) // ������� ��������� ��������� ���� �����
{
	return strcmp(m_Nik.c_str(), Other.m_Nik.c_str()) > 0; // ��������������� ���������
}