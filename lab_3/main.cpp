// ������� �3 - ������� ����� �� ����������� � �������� � ��������� ������
// �� ������� ������ � �� �����������

// ��� �� �������������� (����� ��������� �������������� ��������) � ������� � ��� ����,
// � ������� ��� ������� � 2019 ���� ��� �������� � ������������.

#include "stdafx.h"// ����������� ����������
#include "FunMod.h"// ���������� ������� ����������
#include "String.h"// ���������� ��� ������ �� ��������
#include <locale.h>// ���������� ��� �����������
#include <stdlib.h>// ���������� ��� ����� ��������� ����� ��������� ���� ����������
//IM

int main() // �������� ����
{
	char a[MY_STR_MAX_LEN]; // �������� ������ � ��������� �������
	bool err; // �������� ����������, ����������� ��� ����������� ������� ������
	bool* erro; // �������� ��������� �� ��� bool
	setlocale(LC_ALL, "ru-RU");// ����������� ������������� ��������� 
	do // ���� do while ��� �������������� ����� �����
	{
		printf_s("����������, ������� ������\n"); // ������� ������ ������
		scanf_s("%s", a, 80);// inp
		err = false; // ������������ ���������� �������� ����
		erro = &err; // ������������ ��������� ����� ����� ���������� err
		StrRepair(a, erro);//check & repair
		if (*erro == true) printf_s("� ������ ���� ������� � ���������� ������\n"); // ����� ����������������� ����������
		else printf_s("� ������ �� ���� ������� ������\n"); // ����� ����������������� ����������
		printf_s("���������� ������ �����: "); // ����� ����������������� ����������
		printf_s(a); // ����� ���������� ������ ���������� �����
		printf_s("\n"); // ����� ����������������� ����������
		printf_s("�������� ������ �����: "); // ����� ����������������� ����������
		Dec2BinStr(atoi(a)); //to bin
		printf_s("\n"); // ������� �� ���� ������
	} while (*a != '0'); // ������� ��� ����� do while
	system("pause"); // ����� ��� ������������ �����������
	return 0; // ����������� ����
}