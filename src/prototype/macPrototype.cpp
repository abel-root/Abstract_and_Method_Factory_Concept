#include "../inc/prototype/macPrototype.h"

MacPrototype::MacPrototype(const std::string& os, const std::string& cpu, int ram) : Computer(os, cpu, ram) {};

Computer* MacPrototype::clone() const {
	return new MacPrototype(*this);
}

