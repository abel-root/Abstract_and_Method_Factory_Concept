#include "../inc/prototype/RegistryPrototype.h"

RegistryPrototype::~RegistryPrototype() {
	for (auto& pair : m_registry) {
		delete pair.second;
	}
}

void RegistryPrototype::registerPrototype(const std::string& key, Computer* prototype) {
	m_registry[key] = prototype;
}

Computer* RegistryPrototype::create(const std::string& key) const {
	auto it = m_registry.find(key);
	if (it != m_registry.end()) {
		return it->second->clone();
	}
	return nullptr;
}