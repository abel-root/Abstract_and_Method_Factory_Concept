#ifndef COMPUTERP_H
#define COMPUTERP_H

#include <iostream>

class Computer {
private :
	std::string m_os;
	std::string m_cpu;
	int m_ram;
public:
	/*Computer()=default;*/
	Computer(const std::string& os, const std::string& cpu, int ram);
	virtual ~Computer() = default;
	virtual Computer* clone() const =0;
	void setOs(const std::string& os);
	void setCpu(const std::string& cpu);
	void setRam(int ram);
	void displaySpecs() const;
	
};


#endif // COMPUTERP_H
