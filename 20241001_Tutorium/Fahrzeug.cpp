#include "Fahrzeug.hpp"

// Methodendefinitionen

/// <summary>
/// Unser Konstruktor, der alle Attribute initialisiert
/// </summary>
/// <param name="marke"> Die Marke des Fahrzeugs </param>
/// <param name="baujahr"> Das Baujahr des Fahrzeugs </param>
/// <param name="anzahlReifen"> Die Anzahl der Reifen des Fahrzeugs </param>
Fahrzeug::Fahrzeug(const std::string& marke, int baujahr, int anzahlReifen)
	: marke(marke), baujahr(baujahr), anzahlReifen(anzahlReifen) {}

//Fahrzeug::Fahrzeug() {}

/// <summary>
/// Virtuelle Methode zum Anzeigen verschiedener Fahrzeug-Komponenten
/// </summary>
void Fahrzeug::anzeigen() const {
	std::cout << "Fahrzeug mit der Marke: " << this->marke
		<< ", Baujahr: " << this->baujahr << ", Anzahl der Reifen: "
		<< this->anzahlReifen;
}

/// <summary>
/// Der virtuelle Destruktor 
/// </summary>
Fahrzeug::~Fahrzeug() {}


// Zum Testen für die abstrakte Klasse
//int main() {
//	Fahrzeug fahrzeug();
//}