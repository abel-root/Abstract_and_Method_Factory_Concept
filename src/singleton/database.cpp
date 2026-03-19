#include "../inc/singleton/database.h"

Database* Database::m_instance = nullptr;

Database::Database(const std::string& rootUser, const std::string& rootPassword) : m_rootUser(rootUser), m_rootPassword(rootPassword) {
	std::cout << "Database instance created with root user: " << m_rootUser << std::endl;
}

Database* Database::getInstance() {
	if (m_instance == nullptr) {
		std::string rootUser = "admin";
		std::string rootPassword = "password";
		m_instance = new Database(rootUser, rootPassword);
	}
	return m_instance;
}

void Database::connect(const std::string& connectionString) {
	m_connectionString = connectionString;
	std::cout << "Connected to database with connection sur le port: " << m_connectionString << std::endl;
}

void Database::disconnect() {
	std::cout << "Disconnected from database." << std::endl;
	m_connectionString.clear();
}

