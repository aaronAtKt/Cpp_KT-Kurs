#include "Motorrad.hpp"

/// <summary>
/// Konstruktor für Klasse Motorrad
/// </summary>
/// <param name="marke"> Die Marke des Motorrads </param>
/// <param name="baujahr"> Das Baujahr des Motorrads </param>
/// <param name="anzahlReifen"> die Anzahl der Reifen des Motorrads </param>
/// <param name="hatBeiwagen"> Hat das Motorrad einen Beiwagen? </param>
Motorrad::Motorrad(const std::string& marke, int baujahr, int anzahlReifen, bool hatBeiwagen)
	: Fahrzeug(marke, baujahr, anzahlReifen), hatBeiwagen(hatBeiwagen) {}

/// <summary>
/// Anzeigen der Werte vom Motorrad
/// </summary>
void Motorrad::anzeigen() const {
	Fahrzeug::anzeigen();
	std::cout << ", hat Beiwagen: " << (hatBeiwagen ? "Ja" : "Nein") << std::endl;
}

/// <summary>
/// Ausgabe, wenn das Motorrad startet
/// </summary>
void Motorrad::start() const {
	std::cout << "Motorrad startet!" << std::endl;
}

/// <summary>/// Destruktor von Motorrad /// </summary>
Motorrad::~Motorrad() {}