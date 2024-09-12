#include <iostream>
#include <print>
using namespace std;

// globale Variablen/Felder (in der ganzen Datei bekannt, auch in anderen Funktionen
// Array: <dtype> arrName[SIZE];
int intArray[10] = { 1, 3, 5, 6, 7 };
short myArray[]{ 10, 20, 30, 40 };

int main() {
	// lokale Variablen (Nur in main bekannt)
	constexpr int SIZE = size(myArray);

	for (int i = 0; i < size(intArray); i++) {
		//cout << intArray[i] << ", ";
	}

	for (short* pValues = myArray; pValues < (myArray + SIZE); pValues++) {
		//printf("%d, ", *pValues);
		
		if (pValues < ((myArray + SIZE) - 1))
			;//cout << *pValues << ", ";
		else
			;//cout << *pValues << endl;
	}

	// range-for Schleife
	for (auto elem : myArray) {
		for (auto elem1 : intArray)
			;//cout << elem1 << ", ";
		//cout << elem << ", ";
	}
	

	string text = "Hallo Welt.";
	//C-String
	char myText[]{ "Das ist ein C-String." };
	//wchar_t myWideText[]{ "Das ist ein Text." };
}