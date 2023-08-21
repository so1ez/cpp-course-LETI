#pragma once
#include "MyPhRec.h"
class CMyPhRecEx :
	public CMyPhRec
{
public:
	CMyPhRecEx();
	~CMyPhRecEx();
	int Compare(CMyPhRecEx& Other);
};