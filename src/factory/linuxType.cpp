#include "linuxType.h"

Computer* LinuxType::createComputer() {
	return new Linux();
}