#include "../inc/prototype/winPrototype.h"

Winrototype::Winrototype(const std::string& os, const std::string& cpu, int ram) : Computer(os, cpu, ram) {};

Computer* Winrototype::clone() const {
	return new Winrototype(*this);
}
