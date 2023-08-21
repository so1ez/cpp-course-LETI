#pragma once // предпроцессорна€ директива, контролирующа€ уникальность данного файла в компил€ции всего проекта
#define MY_STR_MAX_LEN 80 // значение максимальной длины строки
int StrRepair(char* src, bool* er); // объ€вление модул€ обработки введенной строки
int Dec2BinStr(int val, char* ress); // объ€вление модул€ перевода числа в двоичный код
void MyStrTab(int n, int dep, char* bin, char* result, size_t resSize); // объ€вление модул€ вывода таблицей