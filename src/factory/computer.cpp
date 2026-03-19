#include "computer.h"

void Computer::displaySpecs(void ) const {
	std::cout << "CPU: " << m_cpu << std::endl;
	std::cout << "Storage: " << m_storage << std::endl;
	std::cout << "RAM: " << m_ram << " GB" << std::endl;
	std::cout << "OS: " << m_os << std::endl;
}