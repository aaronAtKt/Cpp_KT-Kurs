#include "Buch.hpp"

Buch::Buch(std::string genre, std::string author, std::string title, 
	std::string code, std::string lastUser, std::string timestamp) : Medien() {
	_genre = genre;
	_author = author;
	_title = title;
	_code = code;
	if (lastUser.empty()) {
		_lastUser = "Niemand";
		_timestamp = "Noch nie";
	}
	else {
		_lastUser = lastUser;
		_timestamp = timestamp;
	}
	_borrowed = false;
}

Buch::Buch(const Buch& copy) {
	*this = copy;
}

Buch& Buch::operator=(const Buch& copy) {
	_genre = copy._genre;
	_author = copy._author;
	_title = copy._title;
	_code = copy._code;
	_lastUser = copy._lastUser;
	_timestamp = copy._timestamp;
	_borrowed = copy._borrowed;
	return *this;
}

Buch::~Buch(){}

std::string		Buch::getGenre() {
	return _genre;
}

std::string		Buch::getAuthor() {
	return _author;
}

std::string		Buch::getTitle() {
	return _title;
}

std::string		Buch::getCode() {
	return _code;
}

std::string		Buch::getLastUser() {
	return _lastUser;
}

std::string		Buch::getTimestamp() {
	return _timestamp;
}

bool	Buch::getBorrowedStatus() {
	return _borrowed;
}

void	Buch::setLastUser(std::string user) {
	_lastUser = user;
}

void	Buch::setTimestamp(std::string time) {
	_timestamp = time;
}

void	Buch::setBorrowedStatus(bool b) {
	_borrowed = b;
}

//	The parameter "mode" determines if the borrowed-status will be displayed.
//	EDIT: In retrospect this is rather redundant, borrowed items aren't even listed.

void	Buch::printBook(int mode) {
	std::string		RED = "\x1B[31m";
	std::string		GREEN = "\x1b[32m";
	std::string		YELLOW = "\x1b[33m";
	std::string		CYAN = "\x1b[36m";
	std::string		WHITE = "\x1B[0m";

	std::cout << GREEN << "\t" << getTitle() << WHITE << " (" << getGenre() << ") von " << getAuthor();
	std::cout << YELLOW << "\n\tISBN: " << getCode() << WHITE << "\n\tZuletzt verliehen an: " << CYAN 
		<< getLastUser() << WHITE << " (" << getTimestamp() << ")";
	/*
	if (mode) {
		std::cout << "\tVerleihstatus: ";
		if (getBorrowedStatus())
			std::cout << RED << "bereits verliehen." << WHITE;
		else
			std::cout << GREEN << "verfügbar." << WHITE;
	}
	*/
	std::cout << "\n";
}