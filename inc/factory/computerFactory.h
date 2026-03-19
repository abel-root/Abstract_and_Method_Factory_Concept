#pragma once

#include "computer.h"

class ComputerFactory
{
public:
	virtual Computer* createComputer()=0;
};


