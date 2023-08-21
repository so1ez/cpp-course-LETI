#include "stdafx.h" // 
#include "MyPhRecEx.h" // подключение библиотек


CMyPhRecEx::CMyPhRecEx() // конструктор
{
}


CMyPhRecEx::~CMyPhRecEx() // деструктор
{
}

int CMyPhRecEx::Compare(CMyPhRecEx& Other) // функция строчного сравнения двух строк
{
	return strcmp(m_Nik.c_str(), Other.m_Nik.c_str()) > 0; // непосредственно сравнение
}