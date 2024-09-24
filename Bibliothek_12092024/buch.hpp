// möglich auch nur #pragma once
#ifndef BUCH_HPP
#define BUCH_HPP

#include <string>

struct Buch {
public:	// Zugriffsoperator für das gesamte Projekt (automatisch wird public gesetzt)
	std::string titel;
	std::string autor;
	int id;
	bool istVerliehen;
}; // typedef buch_t;	// typedef erstellt einen neuen Namen für einen Datentypen

// Funktionsdeklarationen (Prozeduren)
void buchBeschreiben(Buch& buch, const std::string& titel,
	const std::string& autor, int id);
void buchAnzeigen(const Buch& buch);
void buchVerleihen(Buch& buch);
void buchZurueckgeben(Buch& buch);

#endif // !BUCH_HPP
