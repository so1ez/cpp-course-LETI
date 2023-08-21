#pragma once // предпроцессорна€ директива, контролирующа€ уникальность данного файла в компил€ции всего проекта
#define MY_STR_MAX_LEN 80 // значение максимальной длины строки стандартной консоли
int StrRepair(char* src, bool* er); // объ€вление модул€ обработки введенной строки
void MyStrTab(const int n, __int64 phno, char* nick, char* mail, char* result, size_t resSize); // объ€вление модул€ вывода таблицей