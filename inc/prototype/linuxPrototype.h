#ifndef LINUXPROTOTYPE_H
#define LINUXPROTOTYPE_H

#include "computerP.h"

class LinuxPrototype : public Computer{
public:

	LinuxPrototype(const std::string& os, const std::string& cpu, int ram);
	~LinuxPrototype() = default;
	Computer* clone() const override;
};

#endif // LINUXPROTOTYPE_H