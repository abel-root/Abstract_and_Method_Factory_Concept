#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>

class Database {
private :
	static Database* m_instance;
	std::string m_connectionString;
	std::string m_rootUser;
	std::string m_rootPassword;

	Database(const std::string&rootUser, const std::string&rootPassword);

	// empêcher copie
	Database(const Database&) = delete;
	Database& operator=(const Database&) = delete;

public:
	static Database* getInstance();
	void connect(const std::string& connectionString);
	void disconnect();

};


#endif // DATABASE_H