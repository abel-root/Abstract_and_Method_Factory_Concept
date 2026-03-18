#include "windows.h"

void Windows::setCpu(const std::string& cpu) {
	m_cpu = cpu;
}
void Windows::setStorage(const std::string& storage) {
	m_storage = storage;
}
void Windows::setRam(uint8_t ram) {
	m_ram = ram;
}
void Windows::setOs(const std::string& os) {
	m_os = os;
}
