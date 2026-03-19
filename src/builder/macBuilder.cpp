#include "../builder/macBuilder.h"

MacBuilder::MacBuilder() {
	m_computer = new ComputerB();
}

void MacBuilder::buildScreenSize(void) {
	m_computer->setScreenSize(13);
}

void MacBuilder::buildCpu(void) {
	m_computer->setCpu("Apple M1");
}

void MacBuilder::buildStorage(void) {
	m_computer->setStorage("512GB SSD");
}

void MacBuilder::buildRam(void) {
	m_computer->setRam(16);
}

void MacBuilder::buildOs(void) {
	m_computer->setOs("macOS Big Sur");
}

void MacBuilder::buildVoltage(void) {
	m_computer->setVoltage(20.0);
}

void MacBuilder::buildWeight(void) {
	m_computer->setWeight(1.4);
}

void MacBuilder::buildMark(void) {
	m_computer->setMark(9);
}

ComputerB* MacBuilder::getComputer() {
	return m_computer;
}