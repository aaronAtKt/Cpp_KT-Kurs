#include "bibliothek.hpp"
#include <cstdlib>
#include <iostream>

void clearConsole() {
	system("cls");
}

int main() {
	// Erstelle einige Bücher
	Buch buecher[4];
	buchBeschreiben(buecher[0], "Der Herr der Ringe", "J.R.R. Tolkien", 1);
	buchBeschreiben(buecher[1], "Harry Potter", "J.K. Rowling", 2);
	buchBeschreiben(buecher[2], "C++ - Das umfassende Handbuch", "T.T. Will", 3);
	buchBeschreiben(buecher[3], "Der Hobbit", "J.R.R. Tolkien", 4);

	// Erstelle einige Benutzer
	Benutzer benutzer[4];
	benutzerBeschreiben(benutzer[0], "Alice", 1);
	benutzerBeschreiben(benutzer[1], "Bob", 2);
	benutzerBeschreiben(benutzer[2], "Winfried", 3);
	benutzerBeschreiben(benutzer[3], "Adrian", 4);

	// Bibliotheksverwaltung starten
	bibliothekVerwalten(buecher, 4, benutzer, 4);

	// Bücher verleihen
	buchVerleihen(buecher[2]);
	buchVerleihen(buecher[3]);

	// Abfrage um Konsole zu leeren
	char c = ' ';
	std::cout << "Gebe ein zeichen ein, um den Bildschirm zu leeren" << std::endl;
	std::cin >> c;
	clearConsole();

	// Bibliotheksverwaltung nochmal starten
	bibliothekVerwalten(buecher, 4, benutzer, 4);

	// Bücher zurückgeben
	buchZurueckgeben(buecher[2]);
	buchZurueckgeben(buecher[3]);

	// Abfrage um Konsole zu leeren
	std::cout << "Gebe ein zeichen ein, um den Bildschirm zu leeren" << std::endl;
	std::cin >> c;
	clearConsole();

	// Bibliotheksverwaltung nochmal starten
	bibliothekVerwalten(buecher, 4, benutzer, 4);

}