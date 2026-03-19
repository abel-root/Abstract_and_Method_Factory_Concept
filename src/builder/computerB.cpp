#include "../inc/builder/computerB.h"



void ComputerB::displaySpecs(void) const {
		std::cout << "Screen Size: " << m_screensize << std::endl;
		std::cout << "CPU: " << m_cpu << std::endl;
		std::cout << "Storage: " << m_storage << std::endl;
		std::cout << "RAM: " << m_ram << " GB" << std::endl;
		std::cout << "Operating System: " << m_os << std::endl;
		std::cout << "Voltage: " << m_voltage << " V" << std::endl;
		std::cout << "Weight: " << m_weight << " kg" << std::endl;
		std::cout << "Mark: " << m_mark << std::endl;
}

void ComputerB::setScreenSize(int screensize) {
	m_screensize = screensize;
}

void ComputerB::setCpu(const std::string& cpu) {
	m_cpu = cpu;
}

void ComputerB::setStorage(const std::string& storage) {
	m_storage = storage;
}

void ComputerB::setRam(int ram) {
	m_ram = ram;
}

void ComputerB::setOs(const std::string& os) {
	m_os = os;
}

void ComputerB::setVoltage(double voltage) {
	m_voltage = voltage;
}

void ComputerB::setWeight(double weight) {
	m_weight = weight;
}

void ComputerB::setMark(int mark) {
	m_mark = mark;
}

