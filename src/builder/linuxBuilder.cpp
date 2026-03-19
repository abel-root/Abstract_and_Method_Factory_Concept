#include "../inc//builder/linuxBuilder.h"

LinuxBuilder::LinuxBuilder() {
	m_computer = new ComputerB();
}

void LinuxBuilder::buildScreenSize(void) {
	m_computer->setScreenSize(15);
}

void LinuxBuilder::buildCpu(void) {
	m_computer->setCpu("AMD Ryzen 7");
}

void LinuxBuilder::buildStorage(void) {
	m_computer->setStorage("512GB SSD");
}

void LinuxBuilder::buildRam(void) {
	m_computer->setRam(32);
}

void LinuxBuilder::buildOs(void) {
	m_computer->setOs("Ubuntu 20.04");
}

void LinuxBuilder::buildVoltage(void) {
	m_computer->setVoltage(19.5);
}

void LinuxBuilder::buildWeight(void) {
	m_computer->setWeight(1.5);
}

void LinuxBuilder::buildMark(void) {
	m_computer->setMark(8);
}

ComputerB* LinuxBuilder::getComputer() {
	return m_computer;
}

