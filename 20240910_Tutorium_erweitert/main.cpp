#include "print.h"  // Einbinden der eigenen Header-Datei print.h

// Globale Variablen/Felder
int intArray[10] = { 1, 3, 5, 6, 7 };
short myArray[]{ 10, 20, 30, 40 };

int main() {
    // Lokale Variablen (Nur in main bekannt)
    constexpr int SIZE = size(myArray);

    // Verwendung der Funktion aus print.h zur Ausgabe von intArray
    printIntArray(intArray, size(intArray));

    // Verwendung der Funktion aus print.h zur Ausgabe von myArray
    printShortArray(myArray, SIZE);

    // Range-for-Schleife zur Ausgabe der Arrays
    for (auto elem : myArray) {
        printIntArray(intArray, size(intArray));
        cout << elem << ", ";
    }
    cout << endl;

    // Ausgabe eines C++-Strings
    string text = "Hallo Welt.";
    printString(text);

    // Ausgabe eines C-Strings
    char myText[]{ "Das ist ein C-String." };
    printCString(myText);

    return 0;
}
