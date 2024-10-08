#include "Lehrer.hpp"

Lehrer::Lehrer() {}

Lehrer::Lehrer(std::string name, int id) : Person() {
	_name = name;
	_id = id;
}

Lehrer::~Lehrer() {
	_faecher.clear();
}

//	Sind bereits Fächer eingetragen oder nicht? Unbedingt berücksichtigen! (Guter Punkt. Wichtig!)
//	Hier würde sich auch std::set anbieten

void	Lehrer::unterrichteFach() {
	std::cout << _name << " unterrichtet ";
	if (_faecher.empty()) {
		std::cout << " keine Faecher.\n";
		return;
	}
	for (int i = 0; i < _faecher.size(); i++) {
		std::cout << _faecher[i];
		if (i + 1 != _faecher.size())
			std::cout << " & ";
		else
			std::cout << ".\n";
	}
}

//	Keine leeren Strings oder Duplikate sind erlaubt. Fächer sind einzigartig.

void	Lehrer::addFach(std::string fach) {
	if (fach.empty())
		return;
	for (int i = 0; i < _faecher.size(); i++)
		if (_faecher[i] == fach)
			return;
	_faecher.push_back(fach);
}
