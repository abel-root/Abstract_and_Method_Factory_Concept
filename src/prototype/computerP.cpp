#include "../inc/prototype/computerP.h"

Computer::Computer(const std::string& os, const std::string& cpu, int ram) : m_os(os), m_cpu(cpu), m_ram(ram) {}

void Computer::setOs(const std::string& os) {
	m_os = os;
}

void Computer::setCpu(const std::string& cpu) {
	m_cpu = cpu;
}

void Computer::setRam(int ram) {
	m_ram = ram;
}

void Computer::displaySpecs() const {
	std::cout << "Operating System: " << m_os << std::endl;
	std::cout << "CPU: " << m_cpu << std::endl;
	std::cout << "RAM: " << m_ram << " GB" << std::endl;
}

