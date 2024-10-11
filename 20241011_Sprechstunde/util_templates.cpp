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


//**********�berladung****************

// �berladen der print Funktion f�r int
void print(int value) {
	cout << "�berladene Funktion f�r int: " << value << endl;
}

// �berladen der print Funtion f�r double
void print(double value) {
	cout << "�berladene Funktion f�r double: " << value << endl;
}


//**********Spezialisierung****************
// Spezialisierung f�r int
template<>
void print<int>(int value) {
	cout << "Spezialisiertes Template f�r int: " << value << endl;
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
	//print<int>(10);			// �berladene Funktion aus Zeile 11 wird aufgerufen (int)
	//print(3.14);		// �berladene Funktion aus Zeile 16 wird aufgerufen (double)
	//print("Hello");		// Generische T-Funktion aus Zeile 6 wird aufgerufen

	MeineKlasse<double, char> obj1;
	MeineKlasse<int, char> obj2;
	MeineKlasse<float, float> obj3;

	obj1.print();
	obj2.print();
	obj3.print();

	return 0;
}