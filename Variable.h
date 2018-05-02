#pragma once
#include "Functions_and_includ.h"

class Variable
{
	int ma;
public:
	Variable(int a=0) :ma(a) {
		std::cout << "Constructor Variable_class" << this << std::endl;
	};
	~Variable() { std::cout << "Destructor variable class" << std::endl; };
};

