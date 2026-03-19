#ifndef LINUXBUILDER_H
#define LINUXBUILDER_H

#include "../inc/builder/builder.h"
#include "../inc/builder/computerB.h"


class LinuxBuilder : public Builder {
private :
	ComputerB* m_computer;

public:
	LinuxBuilder();
	~LinuxBuilder() = default;
	void buildScreenSize(void) override;
	void buildCpu(void) override;
	void buildStorage(void) override;
	void buildRam(void) override;
	void buildOs(void) override;
	void buildVoltage(void) override;
	void buildWeight(void) override;
	void buildMark(void) override;
	ComputerB* getComputer();
};

#endif // LINUXBUILDER_H