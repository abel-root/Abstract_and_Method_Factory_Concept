#ifndef WINDOWS_TYPE_H
#define WINDOWS_TYPE_H

#include "computerFactory.h"
#include "windows.h"

class WindowsType : public ComputerFactory {
	public:
		Computer* createComputer() override;
};

#endif// WINDOWS_TYPE_H