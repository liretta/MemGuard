#include "Functions_and_includ.h"
#include "MemGuard.hpp"
#include "Variable.h"
#define SIZE 20

int main()
{
	{
		int nSize = SIZE;
		int *pArInt = new int[nSize];
		MemGuard <int> mgInt(pArInt);
		Init(pArInt, nSize);

		char *pArChar = new char[nSize];
		MemGuard <char> mgChar(pArChar);
		Init(pArChar, nSize);

		Variable *pA = new Variable(5);
		MemGuard <Variable> mgClass(pA, false);

		Show(pArInt, nSize);
		Show(pArChar, nSize);

		std::cout << "\nAfter sotr::" << std::endl;
		SelectSort(pArChar, nSize, Asc);
		SelectSort(pArInt, nSize, Asc);
		Show(pArInt, nSize);
		Show(pArChar, nSize);
	}

	Mem();
	system("pause");

	return 0;
}