#include <iostream>




//------------** Design Pattern **------------//
//#define FACTORY
//#define BUILDER
#define PROTOTYPE
//#define SINGLETON

//------------** Include header  **------------//
#ifdef FACTORY
	#define MACOS 
	#define WINDOWS
	#define LINUX
	#include "macosType.h"
	#include "windowsType.h"
	#include "linuxType.h"
#endif // FACTORY

#ifdef BUILDER
	#include "../builder/macBuilder.h"
	#include "../builder/director.h"
	#include "../builder/linuxBuilder.h"
	#include "../builder/windowsBuilder.h"

#endif // BUILDER

#ifdef PROTOTYPE
	#include "../inc/prototype/RegistryPrototype.h"
	#include "../inc/prototype/winPrototype.h"
	#include "../inc/prototype//linuxPrototype.h"
	#include "../inc/prototype/macPrototype.h"
#endif // PROTOTYPE

int main() {

#ifdef FACTORY
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
#endif // FACTORY

#ifdef BUILDER
	/*code hiere*/
	std::cout << "Future MacOS : " << std::endl;
	std::cout << "------------------" << std::endl;
	Director* director = new Director();
	MacBuilder* macBuilder = new MacBuilder();
	director->construct(macBuilder);
	ComputerB* mac = macBuilder->getComputer();
	mac->displaySpecs();
	std::cout << "------------------" << std::endl;

	std::cout << "Future Linux  " << std::endl;
	std::cout << "------------------" << std::endl;
	LinuxBuilder* linuxBuilder = new LinuxBuilder();
	director->construct(linuxBuilder);
	ComputerB* linux = linuxBuilder->getComputer();
	linux->displaySpecs();

	std::cout << "------------------" << std::endl;

	std::cout << "Future Windows  " << std::endl;
	std::cout << "------------------" << std::endl;
	WindowsBuilder* windowsBuilder = new WindowsBuilder();
	director->construct(windowsBuilder);
	ComputerB* windows = windowsBuilder->getComputer();
	windows->displaySpecs();
	std::cout << "------------------" << std::endl;

	delete director;
	delete macBuilder;
	delete mac;

#endif // BUILDER

#ifdef PROTOTYPE
	RegistryPrototype registry;

	registry.registerPrototype("mac", new MacPrototype("MacOS Big Sur", "Apple M1", 16));
	registry.registerPrototype("windows", new MacPrototype("Windows 10", "Intel Core i7", 16));
	registry.registerPrototype("linux", new MacPrototype("Ubuntu 20.04", "AMD Ryzen 7", 32));

	std::cout << "Mac clone :" << std::endl;
	std::cout << "--------------------------" << std::endl;
	Computer* macClone = registry.create("mac");
	macClone->displaySpecs();

	std::cout << "----------------------------\n" << std::endl;

	std::cout << "Mac clone 1:" << std::endl;
	std::cout << "--------------------------" << std::endl;
	Computer* macClone1 = registry.create("mac");
	macClone1->setCpu("Apple M10");
	macClone1->setOs("MacOS Big Plus");
	macClone1->setRam(16);

	macClone1->displaySpecs();

	std::cout << "----------------------------\n" << std::endl;

	std::cout << "Windows clone :" << std::endl;
	std::cout << "--------------------------" << std::endl;
	Computer* winClone = registry.create("windows");
	winClone->displaySpecs();

	std::cout << "----------------------------\n" << std::endl;

	std::cout << "Windows clone1 :" << std::endl;
	std::cout << "--------------------------" << std::endl;
	Computer* winClone1= registry.create("windows");
	winClone1->setOs("Windows 11");
	winClone1->setCpu("Intel core i9");
	winClone1->setRam(16);
	winClone1->displaySpecs();

	std::cout << "----------------------------\n" << std::endl;

#endif // PROTOTYPE

#ifdef SINGLETON
	/*code hiere*/
#endif // SINGLETON

	return 0;
}