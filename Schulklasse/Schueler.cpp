// Schön gelöst :)
#include "Schueler.hpp"

Schueler::Schueler(std::string name, int id) : Person() {
	_name = name;
	_id = id;
}

Schueler::~Schueler() {
	_notenliste.clear();
}

//	Gültige Noten in unserem Schulsystem liegen zwischen 1 und 6.

void	Schueler::addNote(int note) {
	if (note < 1 || note > 6)
		return;
	_notenliste.push_back(note);
}

//	Rückgabe der gesamten Notenliste, da weitere Spezifikation fehlt.

std::vector<int>	*Schueler::getNote() {
	return &_notenliste;
}
