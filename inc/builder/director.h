#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

class Director {

public :
	Director() = default;
	~Director() = default;
	void construct(Builder* builder);
};

#endif // DIRECTOR_H