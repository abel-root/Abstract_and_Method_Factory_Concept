#include "linux.h"

void Linux::setCpu(const std::string& cpu) {
	m_cpu = cpu;
}
void Linux::setStorage(const std::string& storage) {
	m_storage = storage;
}
void Linux::setRam(uint8_t ram) {
	m_ram = ram;
}
void Linux::setOs(const std::string& os) {
	m_os = os;
}