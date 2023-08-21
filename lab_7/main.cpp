// ������� �7 - C��������� ���������� �����

// ��� �� �������������� (����� ��������� �������������� ��������) � ������� � ��� ����,
// � ������� ��� ������� � 2019 ���� ��� �������� � ������������.

#include "stdafx.h" // ����������� ����������� ����������
#include "Myrec.h" // ����������� ����� ����������
#include "Process.h" // ���������� ��� " system("pause"); "
#include <vector> // ���������� ��� ������������� ��������
#include <iostream> // ���������� ��� ����� �������� �����-������
using namespace std; // �������������� ����� ���������� � �������� ������������ ���

int main() // �������� ����
{
	vector<CMyRec> vecP; // ���������� �������
	bool bOk = false; // ������������� ���������� �� ��������� false
	cout << endl << "Input records" << endl; // ����� ����������������� ����������
	do // ���� ����� ������
	{
		CMyRec  A; // ���������� ������ �

		bOk = A.InputRec(); // ����������� ���������� ������������ �������� ��������
		if (bOk) // ���� ���������� true, ��
			vecP.push_back(A); // ��������� � ������ ������� ���������� ������
	} while (bOk); // ���� �����������, ���� ���� ������ �� ������� (���� ����� �������� �� ����� 0)

	cout << endl << "Output records" << endl << "      Name      |    Phone    |         Mail         |                Bin                  " << endl; // ����� ����������������� ����������
	cout << "-------------------------------------------------------------------------------------------" << endl; // ����� ����������������� ����������

	for (size_t i = 0; i < vecP.size(); i++) // ���� ������
		vecP[i].PrintRec(); // ��������� � ������� ������

	system("pause"); // ���������� ������ �� �������
	return 0; // ����������� ����
}