#include "../inc/prototype/linuxPrototype.h"

LinuxPrototype::LinuxPrototype(const std::string& os, const std::string& cpu, int ram) : Computer(os, cpu, ram) {};

Computer* LinuxPrototype::clone() const {
	return new LinuxPrototype(*this);
}