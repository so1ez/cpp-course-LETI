#include "stdafx.h" // ����������� ����������
#include "FunMod.h" // ���������� ������� ����������
#include "string.h" // ���������� ��� ������ �� ��������

int StrRepair(char* src, bool* er) // ������ ��������� ��������� ������
{
	char sOut[MY_STR_MAX_LEN]; // ������������� ������ ������ (�������� ������), ������� ����� ������
	bool znak = false; // ������������� ��������� ����������, ������ ��� �����������  ������� �����
	int j = 0; // ������������� ����������� ����������
	for (int i = 0; i < MY_STR_MAX_LEN && src[i]; i++) // ���� �������� ������ �� ������, � ������� ���������� ����� � ������ ������
	{
		if (((src[i] == '-') && (!znak)) || ((src[i] >= '0') && (src[i] <= '9') && (!znak))) // �������� �� �����
		{
			sOut[0] = src[i]; // ������������ �������� �������� �������� ������ �������� ������ ����� �������� �����
			znak = true; // ������������ ���������� �������� ������
			j++; // ���������� �������� �� �������
			continue; // ������� ����� ����, ����������� ����, � ������� � ��������� �������� ����� for
		}
		if ((src[i] < '0') || (src[i] > '9')) // �������� �� �� �����
		{
			*er = true; // ������������ ���������� �������� ������
			continue; // ������� ����� ����, ����������� ����, � ������� � ��������� �������� ����� for
		}
		sOut[j] = src[i]; // ������������ �������� ������ ��������������� �������� ������� ������
		j++; // ���������� �������� ��� �������� ������ �� �������
	}
	sOut[j] = '\0'; // ��������� �������� ������
	strcpy_s(src, MY_STR_MAX_LEN, sOut); // ����������� �������� �������� ������ �� �������

	return 0; // ����������� ����
}

int Dec2BinStr(int val) // ������ �������� ����� � �������� ���
{
	int b, c;//������������� ����������� ����������
	int N, N1;//������������� ����������� ����������
	if (val < 0) printf_s("1"); // �������� ����� �� ���������������
	else printf_s("0"); // �������� ����� �� ���������������
	for (N = 30; N >= 0; N--)//������� ��� ����� �������� � �������� ���
	{
		b = 1; //������������ ��������������� ���������� �������� 1
		N1 = N;
		for (N1; N1 > 0; N1 -= 1)//������� ��� ����� ���������� � �������
		{
			b *= 2;//"���������� � �������"
		}
		c = val / b;//������������ ���������� � �������� ��� ��������
		if (c == 0) printf("0");//���� �=0, �� ����� "0"
		else printf("1");//���� ���, �� ����� "1"
		val = val % b;//������� �� ����� ������� ������, ���� �� ���� "���������"
	}
	printf("\n");//������� �� ��������� �������, ����� ������ �������� "|" � ����������� ����������
	return 0; // ����������� ����
}