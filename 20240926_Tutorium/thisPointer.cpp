#include <iostream>
using namespace std;

// Klassendefinition
class MyClass {
	// Attribute

	// Konstruktor

	// Methoden
public:
	void myMethod();
};

void MyClass::myMethod() {
	cout << reinterpret_cast<void*>(this) << endl;
}

int main() {
	MyClass ob1, ob2;

	long* lptr = new long{ 10L };
	long* lptr1 = new long;
	auto sptr = new short{ 20 };

	delete lptr, lptr1;

	// Adresse der Objekte ausgeben
	//cout << "Adresse von ob1 mit &: " << &ob1 << endl;
	//cout << "Adresse von ob1 mit Cast: " << reinterpret_cast<void*>(&ob1) << endl;
	//cout << "adresse von ob2 mit &: " << &ob2 << endl;

	//// this-Zeiger der Objekte ausgeben
	//cout << "this-Zeiger ausgeben:\n";
	//ob1.myMethod();
	//ob2.myMethod();

	cout << *lptr << endl;
	cout << lptr1 << endl;

	return 0;
}