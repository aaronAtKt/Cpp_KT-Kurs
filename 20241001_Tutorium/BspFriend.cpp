#include <iostream>
#include <windows.h>

using namespace std;

// friend-Methode

class Kreis {
private:
	double radius;
public:
	Kreis(double r) : radius(r) {}

	// Friend-Methode: Darf auf private Members von zugreifen
	friend double berechneFlaeche(const Kreis& k);
};

// Definition der friend-Methode auﬂerhalb der Klasse
double berechneFlaeche(const Kreis& k) {
	return 3.141459265 * k.radius * k.radius; // Zugriff auf den privaten Member radius
}


// friend-Klasse
class Geheimnis {
private:
	string geheimerText;
public:
	Geheimnis(const string& text) : geheimerText(text) {}

	// Deklaration der Freundesklasse
	friend class Detektiv; // Detektiv hat Zugriff auf den geheimen Text
};

class Detektiv {
public:
	void luefteGeheimnis(const Geheimnis& g) {
		cout << "Das Geheimnis lautet: " << g.geheimerText << std::endl;
	}
};


int main() {
	SetConsoleOutputCP(1252);
	setlocale(LC_ALL, "de_DE");
	//Kreis k(5.0);
	//cout << "Flaeche des Kreises: " << berechneFlaeche(k) << endl;

	Geheimnis g("Donald Trump wird neuer US-Pr‰sident.");
	Detektiv sherlock;
	sherlock.luefteGeheimnis(g);

	return 0;
}