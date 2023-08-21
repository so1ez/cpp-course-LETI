#include "stdafx.h"
#include "MyRec.h"
#include <iostream>
#include "FunMod.h"

using namespace std;


CMyRec::CMyRec() // ����������� 
	: m_No(0) // ������������� ������������ ��������
	, m_Nik("noname") // ������������� ������������ ��������
	, m_Mail("mymail") // ������������� ������������ ��������
{
}


CMyRec::~CMyRec() // ����������
{
}

bool CMyRec::InputRec() // ������� ����� ������
{

	bool errr = false; // ������������� ����������
	string sA;//char buf[100];
	cout << endl << "Input Phone\n";//puts("Input Phone");
	cin >> sA;// scanf_s("%s", buf, 100);
	//TODO check string  as lab 3

	char cA[MY_STR_MAX_LEN]; // ���������� ���������� ��� "�������" ������ � ������� ��������
	strcpy_s(cA, sA.size() + 1, sA.c_str()); // ������� �������� � ������� ������ � ���� ������������ ����������
	StrRepair(cA, &errr); // ������� ������
	if (errr) cout << "Mistakes was fixed" << endl; // ����� ����������������� ����������
	else cout << "No mistakes found" << endl; // ����� ����������������� ����������
	m_No = atoll(cA); // ������������ ���������� �������� ����������������� ������
	if (!m_No) // ���� ����� ����� ����, ��
		return false; // ����������� �������� false
	cout << endl << "Input Nik" << endl;//puts("Input Nik");
	cin >> m_Nik;//scanf_s("%s", buf, 100);
	//m_Nik = buf;
	cout << endl << "Input eMail" << endl;// puts("Input eMail");
	cin >> m_Mail;//scanf_s("%s", buf, 100);//m_Mail = buf;
	return 0 != m_No; // ����������� ������ ���� ����� �������� �� 0
}

void CMyRec::PrintRec() // ������� ������ �� ������������
{
	size_t cT1 = m_Nik.size(); // ������������� ����������, ������ ������ ������ �����
	size_t cT3 = m_Mail.size(); // ������������� ����������, ������ ����� ������ ������
	int pom = 1; // ������������� ����������-��������, ������ �������
	__int64	t = m_No; // ������������� ����������, ������� ����� ��������� ������ ��������
	while (t) // ���� ������ ���������� ���� � ������ ��������, �������� ���� ���������� �� 0
	{
		t /= 10; // ����� ���������� �� 10
		pom++; // ����������� ������� �� �������
	}

	for (int i = 0; i <= 15 - cT1; i++) cout << " "; // ������� �������
	cout << m_Nik << "|"; // ����� �������� ������� ��� � ������ |
	for (int i = 0; i <= 13 - pom; i++) cout << " "; // ������� ������� 
	cout << m_No << "|"; // ����� �������� ������� ����� �������� � ������ |
	for (int i = 0; i <= 21 - cT3; i++) cout << " "; // ������� �������
	cout << m_Mail << "|"; // ����� �������� ������� ����� � ������ | 
	unsigned __int64 mask = __int64(1) << 36; // ������������� ���������� ����� ��� �������� ������ �������� � �������� ���
	while (mask) //  ���� ����� �� 0
	{
		if (m_No & mask) // ���� ��������� ���������� � �� 0
			cout << "1"; // �� ������� 1
		else cout << "0"; // ����� ������� 0
		mask = mask / 2; // ����� ����� �� 2
	}
	cout << " " << endl; // ������� � ����� ������ � ��������� �� ��������� ������
}