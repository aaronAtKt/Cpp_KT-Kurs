#include <iostream>
#include <algorithm>
using namespace std;



// Generische Template Funktion
template <typename T>
void print(T value) {
	cout << "Generische T-Funktion: " << value << endl;
}

// Klassen Template
template<typename T, typename U>
class MeineKlasse {
public:
	void print() {
		cout << "Generische Template-Klasse" << endl;
	}
};


//**********Überladung****************

// Überladen der print Funktion für int
void print(int value) {
	cout << "Überladene Funktion für int: " << value << endl;
}

// Überladen der print Funtion für double
void print(double value) {
	cout << "Überladene Funktion für double: " << value << endl;
}


//**********Spezialisierung****************
// Spezialisierung für int
template<>
void print<int>(int value) {
	cout << "Spezialisiertes Template für int: " << value << endl;
}

// Partielle Spezialisierung
template<typename U>
class MeineKlasse<int, U> {
public:
	void print() {
		cout << "Partielle Spezialisierung mit erstem Typ int" << endl;
	}
};

template<typename T>
class MeineKlasse<T, T> {
public:
	void print() {
		cout << "Partielle Spezialisierung mit beiden gleichen Typen" << endl;
	}
};


int main_() {
	//print<int>(10);			// Überladene Funktion aus Zeile 11 wird aufgerufen (int)
	//print(3.14);		// Überladene Funktion aus Zeile 16 wird aufgerufen (double)
	//print("Hello");		// Generische T-Funktion aus Zeile 6 wird aufgerufen

	MeineKlasse<double, char> obj1;
	MeineKlasse<int, char> obj2;
	MeineKlasse<float, float> obj3;

	obj1.print();
	obj2.print();
	obj3.print();

	return 0;
}