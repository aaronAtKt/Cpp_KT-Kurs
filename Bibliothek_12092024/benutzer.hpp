#pragma once
#include <string>

struct Benutzer {
	std::string name;
	int id;
};

// Funktionsdeklarationen
void benutzerBeschreiben(Benutzer& benutzer, const std::string name, const int id);
void benutzerAnzeigen(const Benutzer& benutzer);