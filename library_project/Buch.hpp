#pragma once

#include <iostream>
#include <string>
#include "Medien.hpp"

class Buch : public Medien {
	public:
		Buch() = delete;
		Buch(std::string genre, std::string	author, std::string	title, 
			std::string code, std::string lastUser, std::string timestamp);
		Buch(const Buch& copy);
		Buch& operator=(const Buch& copy);
		~Buch();

		std::string		getGenre();
		std::string		getAuthor();
		std::string		getTitle();
		std::string		getCode();
		std::string		getLastUser();
		std::string		getTimestamp();

		bool			getBorrowedStatus();
		void			setBorrowedStatus(bool b);
		void			setLastUser(std::string user);
		void			setTimestamp(std::string time);
		void			printBook(int mode);
};