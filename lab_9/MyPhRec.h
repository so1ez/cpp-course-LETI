#pragma once // 
#include <string> // 
class CMyPhRec // ���������� ������
{
public: // ������� ������� �:
	CMyPhRec(); // �����������
	~CMyPhRec(); // ����������
	__int64 m_No; // 
	std::string m_Nik; // 
	std::string m_Addr; // ���������� ���������� � ������
	bool Input(char fP[80]); // ���������� �������
	void Output(char fP[80], int nCmps_s); // 
};