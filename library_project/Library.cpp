#include "Library.hpp"

Library::Library() {}

Library::~Library() {
	_users.clear();
}

void	Library::printMediums() {
	std::string		RED = "\x1B[31m";
	std::string		GREEN = "\x1b[32m";
	std::string		YELLOW = "\x1b[33m";
	std::string		WHITE = "\x1B[0m";

	std::vector<Buch> books = *_regale.getBuecherRegal();
	if (books.empty())
		std::cout << RED << "Es wurden noch keine Medien registriert.\n\n" << WHITE;
	int i = 1;
	for (auto it = books.begin(); it != books.end(); it++) {
		std::cout << i++ << ")";
		it->printBook(1);
		std::cout << "\n";
	}
}

void	Library::printUsers() {
	std::string		RED = "\x1B[31m";
	std::string		GREEN = "\x1b[32m";
	std::string		YELLOW = "\x1b[33m";
	std::string		WHITE = "\x1B[0m";

	if (_users.empty()) {
		std::cout << RED << "Es wurden noch keine Nutzer registriert.\n\n" << WHITE;
		return;
	}

	std::vector<std::string> userdata;
	int n = 1;
	int j;
	for (auto it = _users.begin(); it != _users.end(); it++) {
		j = 1;
		std::cout << "\t" << n++ << ") ";
		userdata.clear();
		userdata = it->getUserData();
		std::cout << GREEN;
		for (auto i = userdata.begin(); i != userdata.end(); i++) {
			if (j == 2)
				std::cout << "🏠 ";
			else if (j == 3)
				std::cout << "☎  ";
			else if (j == 4)
				std::cout << YELLOW << "ID: ";
			std::cout << *i << WHITE << " ";
			j++;
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}