#pragma once
#include "Fahrzeug.hpp"

/// <summary>
/// Die spezialisierte Klasse für LKWs
/// </summary>
class LKW : public Fahrzeug {	// protected: Geschützte Vererbung hat zu Problemen geführt
private:
	double ladekapazitaet;
public:
	using Fahrzeug::Fahrzeug;
	LKW(const std::string& marke, int baujahr, int anzahlReifen, double ladekapazitaet);

	// Überschreiben der virtuellen Methoden
	void anzeigen() const override;
	void start() const override;
	~LKW() override;
};