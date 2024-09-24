#include "benutzer.hpp"
#include <iostream>

// Funktion zur Beschreibung eines Benutzers
void benutzerBeschreiben(Benutzer& benutzer, const std::string name, 
	const int id) {
	benutzer.name = name;
	benutzer.id = id;
}

// Funktion zur Anzeige eines Benutzers
void benutzerAnzeigen(const Benutzer& benutzer) {
	std::cout << "Benutzer: " << benutzer.name
		<< ", ID: " << benutzer.id << std::endl;
}