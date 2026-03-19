#ifndef MACBUILDER_H
#define MACBUILDER_H

#include "../inc/builder/builder.h"
#include "../inc/builder/computerB.h"

class MacBuilder : public Builder {
private:
	ComputerB* m_computer;

public:
	MacBuilder();
	~MacBuilder() = default;
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

#endif // MACBUILDER_H