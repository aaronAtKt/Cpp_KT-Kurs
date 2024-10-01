#include "LKW.hpp"

/// <summary>
/// Die Initialisierung der Attribute als Konstruktor
/// </summary>
/// <param name="marke"> Die Marke des LKWs </param>
/// <param name="baujahr"> Die Baujahr des LKWs </param>
/// <param name="anzahlReifen"> Die Anzahl der Reifen des LKWs </param>
/// <param name="ladekapazitaet"> Die Ladekapazität des LKWs </param>
LKW::LKW(const std::string& marke, int baujahr, int anzahlReifen, double ladekapazitaet)
	: Fahrzeug(marke, baujahr, anzahlReifen), ladekapazitaet(ladekapazitaet) {}

/// <summary>
/// Die Anzeigen-Methode spezialisiert für das LKW
/// </summary>
void LKW::anzeigen() const {
	Fahrzeug::anzeigen();
	std::cout << ", Ladekapazitaet: " << this->ladekapazitaet << std::endl;
}

/// <summary>
/// Die Start-Methode spezialisiert für das LKW
/// </summary>
void LKW::start() const {
	std::cout << "LKW startet!" << std::endl;
}

/// <summary>/// Der Destruktor für die Klasse LKW /// </summary>
LKW::~LKW() {}