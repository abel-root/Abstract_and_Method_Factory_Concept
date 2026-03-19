#pragma once
#include "computer.h"
class MacOS : public Computer {
public:
	void setCpu(const std::string& cpu) override;
	void setStorage(const std::string& storage) override;
	void setRam(uint8_t ram) override;
	void setOs(const std::string& os) override;

};
