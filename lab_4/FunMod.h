#pragma once // ���������������� ���������, �������������� ������������ ������� ����� � ���������� ����� �������
#define MY_STR_MAX_LEN 80 // �������� ������������ ����� ������
int StrRepair(char* src, bool* er); // ���������� ������ ��������� ��������� ������
int Dec2BinStr(int val, char* ress); // ���������� ������ �������� ����� � �������� ���
void MyStrTab(int n, int dep, char* bin, char* result, size_t resSize); // ���������� ������ ������ ��������