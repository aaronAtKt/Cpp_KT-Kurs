#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Medien.hpp"
#include "Buch.hpp"
#include "Library.hpp"

class Medien;
class Buch;
class Library;

class Nutzer {
protected:
	std::string			_name;
	std::string			_address;
	std::string			_contact;
	std::string			_userID;

	std::vector<Buch>	_books;
	//std::vector<CD>	_cds;

public:
	Nutzer() = delete;
	Nutzer(std::string name, std::string address, std::string contact);
	~Nutzer();

	void	returnBook(std::vector<Buch>::iterator b, Library& lib);
	void	borrowBook(std::vector<Buch>::iterator b, Library& lib);

	bool																printBooks();
	std::pair<std::vector<Buch>::iterator, std::vector<Buch>::iterator>	getUserBooks();
	std::vector<std::string>											getUserData();
	std::string															getTime();
};