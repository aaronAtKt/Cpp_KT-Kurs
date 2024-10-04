#pragma once
#include <iostream>
#include <string>

/// <summary>
/// Abstrakte Basisklasse Fahrzeug mit alle notwendigen Attributen/Methoden
/// </summary>
class Fahrzeug {
protected:
	std::string marke;
	int baujahr;
	int anzahlReifen;

public:
	Fahrzeug(const std::string& marke, int baujahr, int anzahlReifen);
	//Fahrzeug();
	
	// Virtuelle Methode für polymorphes Verhalten
	virtual void anzeigen() const;

	// Rein virtuelle Methode (pure virtual)
	virtual void start() const = 0;

	// Virtueller Destruktor
	virtual ~Fahrzeug();
};