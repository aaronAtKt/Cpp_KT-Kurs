#include "Auto.hpp"

/// <summary>
/// Die Initialisierung der Attribute als Konstruktor
/// </summary>
/// <param name="marke"> Die Marke des Autos </param>
/// <param name="baujahr"> Die Baujahr des Autos </param>
/// <param name="anzahlReifen"> Die Anzahl der Reifen des Autos </param>
/// <param name="sitzplaetze"> Die Sitzplätze des Autos </param>
Auto::Auto(const std::string& marke, int baujahr, int anzahlReifen, int sitzplaetze)
	: Fahrzeug(marke, baujahr, anzahlReifen), sitzplaetze(sitzplaetze) {}

/// <summary>
/// Die Anzeigen-Methode spezialisiert für das Auto
/// </summary>
void Auto::anzeigen() const {
	Fahrzeug::anzeigen();
	std::cout << ", Sitzplaetze: " << this->sitzplaetze << std::endl;
}

/// <summary>
/// Die Start-Methode spezialisiert für das Auto
/// </summary>
void Auto::start() const {
	std::cout << "Auto startet!" << std::endl;
}

/// <summary>/// Der Destruktor für die Klasse Auto /// </summary>
Auto::~Auto() {}