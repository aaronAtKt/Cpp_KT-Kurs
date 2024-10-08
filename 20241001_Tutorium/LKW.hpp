#pragma once
#include "Fahrzeug.hpp"

/// <summary>
/// Die spezialisierte Klasse f�r LKWs
/// </summary>
class LKW : public Fahrzeug {	// protected: Gesch�tzte Vererbung hat zu Problemen gef�hrt
private:
	double ladekapazitaet;
public:
	using Fahrzeug::Fahrzeug;
	LKW(const std::string& marke, int baujahr, int anzahlReifen, double ladekapazitaet);

	// �berschreiben der virtuellen Methoden
	void anzeigen() const override;
	void start() const override;
	~LKW() override;
};