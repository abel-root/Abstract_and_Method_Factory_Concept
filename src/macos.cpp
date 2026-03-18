#include "macos.h"

void MacOS::setCpu(const std::string& cpu) {
	m_cpu = cpu;
}
void MacOS::setStorage(const std::string& storage) {
	m_storage = storage;
}
void MacOS::setRam(uint8_t ram) {
	m_ram = ram;
}
void MacOS::setOs(const std::string& os) {
	m_os = os;
}