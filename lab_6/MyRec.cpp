#include "stdafx.h"
#include "MyRec.h"
#include <iostream>
#include "FunMod.h"

using namespace std;


CMyRec::CMyRec() // конструктор 
	: m_No(0) // инициализация изначального значения
	, m_Nik("noname") // инициализация изначального значения
	, m_Mail("mymail") // инициализация изначального значения
{
}


CMyRec::~CMyRec() // деструктор
{
}

bool CMyRec::InputRec() // функция ввода данных
{

	bool errr = false; // инициализация переменной
	string sA;//char buf[100];
	cout << endl << "Input Phone\n";//puts("Input Phone");
	cin >> sA;// scanf_s("%s", buf, 100);
	//TODO check string  as lab 3

	char cA[MY_STR_MAX_LEN]; // объявление переменной для "починки" строки с номером телефона
	strcpy_s(cA, sA.size() + 1, sA.c_str()); // перенос введённых в консоли данных в нашу динамическую переменную
	StrRepair(cA, &errr); // починка строки
	if (errr) cout << "Mistakes was fixed" << endl; // часть пользовательского интерфейса
	else cout << "No mistakes found" << endl; // часть пользовательского интерфейса
	m_No = atoll(cA); // присваивание переменной значение отредактированной строки
	if (!m_No) // если номер равен нулю, то
		return false; // возвращение значения false
	cout << endl << "Input Nik" << endl;//puts("Input Nik");
	cin >> m_Nik;//scanf_s("%s", buf, 100);
	//m_Nik = buf;
	cout << endl << "Input eMail" << endl;// puts("Input eMail");
	cin >> m_Mail;//scanf_s("%s", buf, 100);//m_Mail = buf;
	return 0 != m_No; // возвращение правды если номер телефона не 0
}

void CMyRec::PrintRec() // функция ничего не возвращающая
{
	size_t cT1 = m_Nik.size(); // инициализация переменной, равной длинне строки имени
	size_t cT3 = m_Mail.size(); // инициализация переменной, равной длине строки емаила
	int pom = 1; // инициализация переменной-счетчика, равной единице
	__int64	t = m_No; // инициализация переменной, которая равна введённому номеру телефона
	while (t) // цикл поиска количества цифр в номере телефона, работает пока переменная не 0
	{
		t /= 10; // делим переменную на 10
		pom++; // увеличиваем счетчик на единицу
	}

	for (int i = 0; i <= 15 - cT1; i++) cout << " "; // выводим пробелы
	cout << m_Nik << "|"; // после пробелов выводим имя и ставим |
	for (int i = 0; i <= 13 - pom; i++) cout << " "; // выводим пробелы 
	cout << m_No << "|"; // после пробелов выводим номер телефона и ставим |
	for (int i = 0; i <= 21 - cT3; i++) cout << " "; // выводим пробелы
	cout << m_Mail << "|"; // после пробелов выводим емаил и ставим | 
	unsigned __int64 mask = __int64(1) << 36; // инициализация переменной маски для перевода номера телефона в двоичный код
	while (mask) //  пока маска не 0
	{
		if (m_No & mask) // если побитовое логическое И не 0
			cout << "1"; // то выводим 1
		else cout << "0"; // иначе выводим 0
		mask = mask / 2; // делим маску на 2
	}
	cout << " " << endl; // выводим в конце пробел и переходим на следующую строку
}