#ifndef REGISTRY_PROTOTYPE_H
#define REGISTRY_PROTOTYPE_H
#include <string>
#include <iostream>
#include <map>
#include "computerP.h"
class RegistryPrototype {
	private :
		std::map<std::string, Computer* > m_registry;
	public:
		RegistryPrototype() = default;
		~RegistryPrototype();
		void registerPrototype(const std::string& key, Computer* prototype);
		Computer* create(const std::string& key) const;
};

#endif // REGISTRY_PROTOTYPE_H