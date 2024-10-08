#pragma once
#include "Person.hpp"
#include <vector>

class Schueler : public Person {
	private:
		std::vector<int> _notenliste;

	public:
		Schueler() = delete;
		Schueler(std::string name, int id);
		~Schueler();

		void					addNote(int note);
		std::vector<int>		*getNote();
};