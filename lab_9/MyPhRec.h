#pragma once // 
#include <string> // 
class CMyPhRec // объ€вление класса
{
public: // уровень доступа к:
	CMyPhRec(); // конструктор
	~CMyPhRec(); // деструктор
	__int64 m_No; // 
	std::string m_Nik; // 
	std::string m_Addr; // объ€вление переменных в классе
	bool Input(char fP[80]); // объ€вление функций
	void Output(char fP[80], int nCmps_s); // 
};