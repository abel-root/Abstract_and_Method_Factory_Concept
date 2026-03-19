#ifndef WINPROTOTYPE_H
#define WINPROTOTYPE_H

#include "computerP.h"

class Winrototype : public Computer {
	public:
		Winrototype(const std::string& os, const std::string& cpu, int ram);
		virtual ~Winrototype() = default;
		virtual Computer* clone() const override;
};




#endif	// WINPROTOTYPE_H
