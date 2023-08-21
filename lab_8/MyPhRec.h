#pragma once // чтобы header случайно не подключился дважды при компиляции
#include <string> // подключение библиотеки
class CMyPhRec // объявление класса
{
public: // доступ
	CMyPhRec(); // конструктор 
	~CMyPhRec(); // деструктор
	__int64 m_No; // номер телефона
	std::string m_Nik; // имя
	std::string m_Addr; // емаил
	bool Input(); // функция ввода
	void Output(); // функция вывода
};