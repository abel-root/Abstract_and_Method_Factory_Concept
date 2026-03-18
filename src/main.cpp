#include <iostream>
#include "macosType.h"
#include "windowsType.h"
#include "linuxType.h"

#define MACOS 
#define WINDOWS
#define LINUX


int main() {

#ifdef MACOS
	std::cout << "Future MacOS : " << std::endl;
	std::cout << "------------------" << std::endl;
	Computer* mac = (new MacOSType())->createComputer();
	mac->setCpu("Apple M1");
	mac->setStorage("512GB SSD");
	mac->setRam(16);
	mac->setOs("macOS Big Sur");
	mac->displaySpecs();
	std::cout << "------------------" << std::endl;
	delete mac;
#endif // MACOS

#ifdef WINDOWS
	std::cout << "Future Windows  " << std::endl;
	std::cout << "------------------" << std::endl;
	Computer* windows = (new WindowsType())->createComputer();
	windows->setCpu("Intel Core i7");
	windows->setStorage("1TB HDD");
	windows->setRam(16);
	windows->setOs("Windows 10");
	windows->displaySpecs();
	std::cout << "------------------" << std::endl;
	delete windows;
#endif // WINDOWS

#ifdef LINUX
	std::cout << "Future Linux  " << std::endl;
	std::cout << "------------------" << std::endl;
	Computer* linux = (new LinuxType())->createComputer();
	linux->setCpu("AMD Ryzen 7");
	linux->setStorage("512GB SSD");
	linux->setRam(32);
	linux->setOs("Ubuntu 20.04");
	linux->displaySpecs();
	std::cout << "------------------" << std::endl;

	delete linux;
#endif // LINUX


	return 0;
}