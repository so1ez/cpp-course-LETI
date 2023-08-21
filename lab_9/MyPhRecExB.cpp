#include "stdafx.h"
#include "MyPhRecExB.h" // необходимые библиотеки


CMyPhRecExB::CMyPhRecExB() // конструктор
{
}


CMyPhRecExB::~CMyPhRecExB() // деструктор
{
}

bool CMyPhRecExB::Compare(CMyPhRecExB& Other) // функция смены мест двух элементов
{
	if (!CMyPhRecEx::Compare(Other)) // если первый меньше второго, то
	{
		CMyPhRecExB Tmp = Other; // создание временного класса
		Other = *this; // непосредственно замена
		*this = Tmp; // непосредственно замена
		return true; // возвращение true
		//equals vvvvv
		/*Other.m_No = m_No;
		Other.m_Nik = m_Nik;
		Other.m_Addr = m_Addr;
		m_No = Tmp.m_No;
		m_Nik = Tmp.m_Nik;
		m_Addr = Tmp.m_Addr;*/
	}
	return false; // возвращение false 
}