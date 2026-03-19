#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>

class Builder {
public:
	virtual ~Builder() = default;
	virtual void buildScreenSize(void) = 0;
	virtual void buildCpu(void) = 0;
	virtual void buildStorage(void) = 0;
	virtual void buildRam(void) = 0;
	virtual void buildOs(void) = 0;
	virtual void buildVoltage(void) = 0;
	virtual void buildWeight(void) = 0;
	virtual void buildMark(void) = 0;

};

#endif // BUILDER_H