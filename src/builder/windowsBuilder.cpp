#include "../inc/builder/windowsBuilder.h"

WindowsBuilder::WindowsBuilder() {
	m_computer = new ComputerB();
}

void WindowsBuilder::buildScreenSize(void) {
	m_computer->setScreenSize(15);
}

void WindowsBuilder::buildCpu(void) {
	m_computer->setCpu("Intel Core i7");
}

void WindowsBuilder::buildStorage(void) {
	m_computer->setStorage("1TB HDD");
}

void WindowsBuilder::buildRam(void) {
	m_computer->setRam(16);
}

void WindowsBuilder::buildOs(void) {
	m_computer->setOs("Windows 10");
}

void WindowsBuilder::buildVoltage(void) {
	m_computer->setVoltage(19.5);
}

void WindowsBuilder::buildWeight(void) {
	m_computer->setWeight(2.0);
}

void WindowsBuilder::buildMark(void) {
	m_computer->setMark(7);
}

ComputerB* WindowsBuilder::getComputer() {
	return m_computer;
}
