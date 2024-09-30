#pragma once

#include <iostream>
#include <string>

class Medien {
	protected:
		std::string	_genre;
		std::string	_author;
		std::string	_title;
		std::string	_code;
		std::string	_lastUser;
		std::string _timestamp;
		bool		_borrowed;

	public:
		Medien();
		virtual ~Medien();
};