#pragma once // 
#include "MyPhRecEx.h" // 
class CMyPhRecExB : // объ€вление класса
	public CMyPhRecEx // объ€вление наследовани€
{
public: // уровень доступа
	CMyPhRecExB(); // 
	~CMyPhRecExB(); // 
	bool Compare(CMyPhRecExB& Other); // объ€вление функции сравнени€
};