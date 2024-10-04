#pragma once
#include "Fahrzeug.hpp"

/// <summary>
/// Die Klasse Auto ist eine Spezialisierung der Klasse Fahrzeug
/// </summary>
class Auto : public Fahrzeug {
	// spezialisierte Attribute
private:
	int sitzplaetze;
public:
	Auto(const std::string& marke, int baujahr, int anzahlReifen, int sitzplaetze);

	// Überschreiben der virtuellen Methoden
	void anzeigen() const override;
	void start() const override;
	~Auto() override;
};