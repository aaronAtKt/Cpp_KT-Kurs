#include "Klasse.hpp"

/*	Unbedingt nachsehen, ob die Argumente gültig sind.Die Klasse benötigt mindestens
	eine Lehrkraft und einen Schüler. */

Klasse::Klasse(std::string name, Lehrer lehrer, std::vector<Schueler> schueler) {
	if (schueler.empty() || name.empty())
		throw KlasseUngueltig();
	else {
		_klassenname = name;
		_klassenlehrer = lehrer;
		_schuelerliste = schueler;
	}
}

Klasse::~Klasse() {
	_schuelerliste.clear();
}

void	Klasse::addSchueler(Schueler schueler) {
	_schuelerliste.push_back(schueler);
}

void	Klasse::setKlassenlehrer(Lehrer lehrer) {
	_klassenlehrer = lehrer;
}

//	Debug-Methode, welche alle Attribute der Schulklasse ausdruckt.

void	Klasse::printKlasse() {
	std::cout << "Diese Klasse nennt sich " << _klassenname << " und hat " << _klassenlehrer.getName() << " als Klassenlehrer.\n";
	_klassenlehrer.unterrichteFach();

	std::cout << "\nFolgende Schüler sind in der Klasse:\n";
	for (int i = 0; i < _schuelerliste.size(); i++) {
		std::cout << _schuelerliste[i].getName() << " (ID: " << _schuelerliste[i].getID() << ")\n";
	}
}

const char* Klasse::KlasseUngueltig::what() const throw()
{
	return ("Ungültige Argumente! Die Schulklasse braucht einen Namen, einen Klassenlehrer und mindestens einen Schüler.\n");
};
