#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>

/*Class abstraite*/

class Computer {
private:
	/*data*/
protected:
	/*data*/
	std::string m_cpu;
	std::string m_storage;
	uint8_t m_ram;
	std::string m_os;
	
public:
	Computer()=default;
	~Computer()=default;
	virtual void setCpu(const std::string& cpu) = 0;
	virtual void setStorage(const std::string& storage) = 0;
	virtual void setRam(uint8_t ram) = 0;
	virtual void setOs(const std::string& os) = 0;
	virtual void displaySpecs() const;

};





#endif // COMPUTER_H