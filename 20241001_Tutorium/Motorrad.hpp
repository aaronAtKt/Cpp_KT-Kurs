#pragma once
#include "Fahrzeug.hpp"

/// <summary>
/// Spezialisierte Klasse Motorrad vererbt durch Fahrzeug
/// </summary>
class Motorrad : public Fahrzeug {
private:
	bool hatBeiwagen;
public:
	Motorrad(const std::string& marke, int baujahr, int anzahlReifen, bool hatBeiwagen);

	// Überschreiben der virtuellen Methoden
	void anzeigen() const override;
	void start() const override;
	~Motorrad() override;
};