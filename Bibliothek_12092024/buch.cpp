#include "buch.hpp"
#include <iostream>

// Funktion zur Beschreibung eines Buches
void buchBeschreiben(Buch& buch, const std::string& titel,
	const std::string& autor, int id) {
	buch.titel = titel;
	buch.autor = autor;
	buch.id = id;
	buch.istVerliehen = false;
}

// Funktion zur Anzeige eines Buches
void buchAnzeigen(const Buch& buch) {
	std::cout << "Titel: " << buch.titel
		<< ", Autor: " << buch.autor
		<< ", ID: " << buch.id
		<< ", Verliehen: " << (buch.istVerliehen ? "Ja" : "Nein")
		<< std::endl;
}

// Funktion zur Buchverleihung
void buchVerleihen(Buch& buch) {
	if (!buch.istVerliehen) {	// Wenn das Buch nicht verliehen ist, dann {....}
		buch.istVerliehen = true;
		std::cout << "Das Buch '" << buch.titel << "' wurde erfolgreich verliehen." << std::endl;
	}
	else {
		std::cout << "Das Buch ist bereits verliehen." << std::endl;
	}
}

// Funktion zur Buchrückgabe
void buchZurueckgeben(Buch& buch) {
	if (buch.istVerliehen) {	// Wenn das Buch verliehen ist, dann {....}
		buch.istVerliehen = false;
		std::cout << "Das Buch '" << buch.titel << "' wurde erfolgreich zrueckgegeben." << std::endl;
	}
	else {
		std::cout << "Das Buch war nicht verliehen." << std::endl;
	}
}