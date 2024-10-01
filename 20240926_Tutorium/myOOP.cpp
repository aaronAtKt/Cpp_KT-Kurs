#include <iostream>
using namespace std;

/*---Struct---*/
/*
* Mˆglichkeit, um zusammengehˆrige Daten zu gruppieren (Uspr¸nglich aus C)
* C: nur Daten halten/speichern
* C++: Methoden einbauen
*/

// Definition der Struktur
struct Punkt {
private: // public steht schon autmoatisch da
	int x, y;	// Datenfeld/Attribut

public:
	// Konstruktor zur Initialisierung
	Punkt(int x_, int y_) : x(x_), y(y_) {}	// Typisch C++

	/*Punkt(int x, int y) {
		this->x = x;
		this->y = y;
	}*/

	// Methode innerhalb der Struktur
	void anzeigen() {
		cout << "Punkt(" << this->x << "|" << this->y << ")" << endl;
	}
};


/*---Klasse---*/
/*
* Erweiterte Form einer Struktur (struct)
* struct: Attribute sind standardm‰ﬂig auf public
* class:  Attribute sind standardm‰ﬂig auf private
*/

// Definition einer Klasse
class Kreis {
	// Attribute standardm‰ﬂig auf private
private:
	double radius;

public:
	// Konstruktor zur Initialisierung
	Kreis(double r) : radius(r) {}

	// Destruktor (lˆscht ein Objekt)
	~Kreis() { }

	// Methoden zur Anwendung
	double berechneFlaeche() {
		return 3.14159265 * this->radius * this->radius;
	}

	// Getter f¸r den Radius
	double getRadius() {
		return this->radius;
	}

	// Setter f¸r den Radius
	void setRadius(double r) {
		this->radius = r;
	}
};


/*---Union---*/
/*
* Members teilen denselen Speicherberich (kommt aus C)
* Zu einem bestimmten Zeitpunkt kann nur ein Mitglied aktiv sein.
*/

// Defintion einer Union
union Daten {
	// standardm‰ﬂig public
	int ganzeZahl;		// 4 Byte
	float kommazahl;	// 4 Byte
	char buchstabe;		// 1 Byte
};

// Definition eines Enums (Enumaration) zur Kennzeichnung des aktiven Typs
// enum: Aufz‰hlungstyp: die Werte bekommen eine Zahl (Std: 0, 1, 2, 3)
enum Typ { GANZEZAHL, KOMMAZAHL, BUCHSTABE };

int _main_() {
	Daten data;
	Typ aktiverTyp;

	data.ganzeZahl = 100;
	aktiverTyp = GANZEZAHL;
	//aktiverTyp = (Typ)0;

	if (aktiverTyp == GANZEZAHL) {
		cout << "Ganze Zahl: " << data.ganzeZahl << endl;
	}

	// Speichern einer Kommazahl
	data.kommazahl = 12.34f;
	aktiverTyp = KOMMAZAHL;

	if (aktiverTyp == KOMMAZAHL) {
		cout << "Kommazahl: " << data.kommazahl << endl;
	}

	// Speichern eines Buchstabens
	data.buchstabe = 'A';
	aktiverTyp = BUCHSTABE;

	if (aktiverTyp == BUCHSTABE) {
		cout << "Buchstabe: " << data.buchstabe << endl;
	}


	return 0;
}

//void rest() {
//	// Objekterstellung / Instanzierung
//	Punkt p1 = { 10, 20 };
//	//p1.anzeigen();
//
//	Kreis myKreis1 = { 5.3 }; //(5.3);
//	cout << "Die Flaeche betraegt: " << myKreis1.berechneFlaeche() << endl;
//	myKreis1.setRadius(6.8);
//	cout << "Der neue Radius betraegt: " << myKreis1.getRadius() << endl;
//	cout << "Die neue Flaeche betraegt: " << myKreis1.berechneFlaeche() << endl;
//
//	Zahl z;
//
//	z.ganzeZahl = 42;
//	cout << "Ganze Zahl: " << z.ganzeZahl << endl;
//
//	z.kommazahl = 3.14f;
//	cout << "Komazahl: " << z.kommazahl << endl;
//
//	cout << "Nach Ueberschreiben: Ganze zahl: " << z.ganzeZahl << endl;
//
//}