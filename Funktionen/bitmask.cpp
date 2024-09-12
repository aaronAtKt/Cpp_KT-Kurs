#include <iostream>
#include <bitset>
using namespace std;

// Funktionsdeklarationen
int applyMaskAdd(int number, int mask);
int applyMaskClear(int, int);
int applyMaskCheck(int, int);

// Hautpfunktion
int main() {
	int number = 0b10101010; // Ausganszahl (binär)
	int maskSet =0b00000101; // Maske zum Setzen von Bits
	int maskClear = 0b00001010; // Maske zum Löschen von Bits
	bitset<8> binNumber = number;

	cout << "Number: 0b" << binNumber << endl;

	// Setzmaske
	binNumber = applyMaskAdd(number, maskSet);
	cout << "Nach dem Setzen der Bits (Maske: 0b" << bitset<8>(maskSet)
		<< "): 0b" << binNumber << endl;
	// Löschmaske
	binNumber = applyMaskClear(number, maskClear);
	cout << "Nach dem Loeschen der Bits (Maske: 0b" << bitset<8>(maskClear)
		<< "): 0b" << binNumber << endl;
	// Checkmaske
	applyMaskCheck(number, maskSet) ?
		cout << "Die Bits der Setzmaske sind alle gesetzt." << endl :
		cout << "Nicht alle Bits der Setzmaske sind gesetzt." << endl;
	return 0;
}

// Funktionsdefinitionen
int applyMaskAdd(int number, int mask) {
	return number | mask;
}

int applyMaskClear(int number, int mask) {
	return number & ~mask;
}

int applyMaskCheck(int number, int mask) {
	return (number & mask) == mask;
}
