#include "bibliothek.hpp"
#include <iostream>

void bibliothekVerwalten(Buch buecher[], int buchAnzahl,
	Benutzer benutzer[], int benutzerAnzahl) {
	std::cout << "Bibliotheksverwaltung gestartet:\n"
		<< "Anzahl der Bücher: " << buchAnzahl << "\n"
		<< "Anzahl der Benutzer: " << benutzerAnzahl << std::endl;

	// Bücher anzeigen
	for (int i = 0; i < buchAnzahl; i++) {
		buchAnzeigen(buecher[i]);
	}

	// Benutzer anzeigen
	for (int i = 0; i < benutzerAnzahl; i++) {
		benutzerAnzeigen(benutzer[i]);
	}
}