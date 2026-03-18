#ifndef MACOS_TYPE_H
#define MACOS_TYPE_H

#include "macos.h"
#include "computerFactory.h"

class MacOSType: public ComputerFactory {
public:
	 Computer* createComputer() override;
};


#endif // MACOS_TYPE_H