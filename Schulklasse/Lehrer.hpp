#pragma once
#include "Person.hpp"
#include <vector>

class Lehrer : public Person {
	private:
		std::vector<std::string> _faecher;

	public:
		Lehrer();
		Lehrer(std::string name, int id);
		~Lehrer();

		void	unterrichteFach();
		void	addFach(std::string fach);
};