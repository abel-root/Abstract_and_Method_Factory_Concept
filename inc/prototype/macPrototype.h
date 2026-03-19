#ifndef MACPROTOTYPE_H
#define MACPROTOTYPE_H

#include "computerP.h"

class MacPrototype : public Computer {
	public:
		MacPrototype(const std::string& os, const std::string& cpu, int ram);
		virtual ~MacPrototype() = default;
		virtual Computer* clone() const override;
};


#endif// MACPROTOTYPE_H
