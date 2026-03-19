#ifndef COMPUTER_B_H
#define COMPUTER_B_H
#include <iostream>

class ComputerB {

private:
	int m_screensize;
	std::string m_cpu;
	std::string m_storage;
	int m_ram;
	std::string m_os;
	double m_voltage;
	double m_weight;
	int m_mark;

public:

	ComputerB()=default;
	 ~ComputerB()=default;

	 void displaySpecs(void) const; 
	 void setScreenSize(int screensize);
	 void setCpu(const std::string& cpu);
	 void setStorage(const std::string& storage);
	 void setRam(int ram);
	 void setOs(const std::string& os);
	 void setVoltage(double voltage);
	 void setWeight(double weight);
	 void setMark(int mark);


};

#endif // COMPUTER_B_H