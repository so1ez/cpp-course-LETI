#pragma once // ����� header �������� �� ����������� ������ ��� ����������
#include <string> // ����������� ����������
class CMyPhRec // ���������� ������
{
public: // ������
	CMyPhRec(); // ����������� 
	~CMyPhRec(); // ����������
	__int64 m_No; // ����� ��������
	std::string m_Nik; // ���
	std::string m_Addr; // �����
	bool Input(); // ������� �����
	void Output(); // ������� ������
};