#include "../inc/builder/director.h"

void Director::construct(Builder* builder) {
	builder->buildCpu();
	builder->buildStorage();
	builder->buildRam();
	builder->buildOs();
	builder->buildVoltage();
	builder->buildWeight();
	builder->buildMark();
}