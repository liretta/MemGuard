#pragma once
#include <iostream>
#include <time.h>
#include <iomanip>

template <class T>
void Init(T*pAr, int nSize)
{
	srand((unsigned int)time);
	for (int i = 0; i < nSize; ++i)
		pAr[i] = rand() % 26 + 'A';
	std::cout << "\nInitialisation of array " << std::endl;
}

template <class T>
void Show(T*pAr, int nSize)
{
	std::cout << std::endl;
	for (int i = 0; i < nSize; ++i)
		std::cout << std::setw(5) << pAr[i];
	std::cout << "\nHere is array " << std::endl;
}

template <class T>
void SelectSort(T*pAr, int nSize, bool(*pFn)(T, T))
{
	T nBuff;
	int iBuff;
	for (int i = 0; i < nSize; ++i)
	{
		nBuff = pAr[i];
		iBuff = i;
		for (int j = i + 1; j < nSize; ++j)
		{
			if (pFn(pAr[j], nBuff))
			{
				nBuff = pAr[j];
				iBuff = j;
			}
			pAr[iBuff] = pAr[i];
			pAr[i] = nBuff;
		}
			
	}
}

template <class T>
bool Asc(T a, T b)
{
	return a < b;
}

template <class T>
bool Desc(T a, T b)
{
	return a > b;
}

void Mem()
{
	if (_CrtDumpMemoryLeaks())
		std::cout << "Memory Leaks! Help!!" << std::endl;
	else
		std::cout << "Memory ok :-)" << std::endl;
}