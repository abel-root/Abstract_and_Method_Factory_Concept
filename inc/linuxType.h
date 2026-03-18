#ifndef LINUX_TYPE_H
#define LINUX_TYPE_H

#include "linux.h"
#include "computerFactory.h"

class LinuxType : public ComputerFactory {
	public:
		Computer* createComputer() override;
};


#endif // LINUX_TYPE_H