#pragma once // 
#include "MyPhRecEx.h" // 
class CMyPhRecExB : // ���������� ������
	public CMyPhRecEx // ���������� ������������
{
public: // ������� �������
	CMyPhRecExB(); // 
	~CMyPhRecExB(); // 
	bool Compare(CMyPhRecExB& Other); // ���������� ������� ���������
};