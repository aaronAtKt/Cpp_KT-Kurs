#include <vector>
//#include "Fahrzeug.hpp" Brauchen wir hier nicht, weil es schonmal eingefügt wurde
#include "Auto.hpp"
#include "LKW.hpp"
#include "Motorrad.hpp"

using namespace std;

/// <summary>
/// Hauptfunktion als Start des Programms
/// </summary>
/// <returns> Ganzzahlwert: 0 wenn kein Fahler vorhanden ist, sonst ungleich 0 </returns>
int _main() {
	// Vektor von Fahrzeug-Zeiger
	vector<Fahrzeug*> fahrzeuge;

	// Instanziierung für LKW
	LKW* lkw = new LKW("Mercedes", 2010, 4, 30.0);

	// Fahrzeuge erstellen
	fahrzeuge.push_back(new Auto("BMW", 2021, 4, 5));
	fahrzeuge.push_back(new Motorrad("Harley Davidson", 2015, 2, true));
	fahrzeuge.push_back(lkw);

	// Polymorphe Aufrufe
	for (const auto& f : fahrzeuge) {
		f->anzeigen();
		f->start();
	}
	
	// Speicher freigeben
	for (auto& f : fahrzeuge) {
		delete f;
	}

	return 0;
}