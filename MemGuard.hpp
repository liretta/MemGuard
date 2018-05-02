#include "Functions_and_includ.h"

template <class T>
class MemGuard
{
	T *mpAr;
	bool mbArray;

public:
	MemGuard(T *pAr, bool bArray = true) :mpAr(pAr), mbArray(bArray) { std::cout << "Costructor " << this << std::endl; };
	~MemGuard()
	{
		if (!mbArray)
			delete mpAr;
		else
			delete[]mpAr;
		std::cout << "Ddestructor " << this << std::endl;
	};

	void Set(T *pAr, bool bArray)
	{
		mpAr = pAr;
		mbArray = bArray;
	}

private:

};
