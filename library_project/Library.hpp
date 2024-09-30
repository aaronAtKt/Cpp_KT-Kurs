#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Regale.hpp"
#include "Nutzer.hpp"

class Regale;
class Nutzer;

class Library {
	public:
		std::vector<Nutzer>	_users;
		Regale				_regale;

		Library();
		~Library();

		Library& operator=(const Library& lib) = delete;
		Library(Library& lib) = delete;
		Library(Library&& lib) = delete;

		void	printMediums();
		void	printUsers();
};