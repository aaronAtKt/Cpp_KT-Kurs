#include <iostream>
#include "funktionen.h"  // Funktionen für Bitmanipulationen (Setzen, Löschen, Prüfen von Bits)
#include "utils.h"       // Funktionen für Binärumwandlung und String zu Zahl
#include "masken.h"      // Funktionen zur Anwendung von Bitmasken
#include <windows.h>  // Für Windows-spezifische Funktionen

// Hauptfunktion, die alle Bitmanipulationen und Bitmasken demonstriert
int main() {
    // Setzt die Konsole auf UTF-8 Codepage
    SetConsoleOutputCP(CP_UTF8);
    int number = 0b101010;  // Beispielzahl: 42 im Dezimalsystem

    // Zeige die ursprüngliche Zahl in binärer Darstellung mit utils::binaryToString
    std::cout << "Ursprüngliche Zahl: " << binaryToString(number, 6) << std::endl;

    // Setze das Bit an Position 2
    number = setBit(number, 2);
    std::cout << "Nach Setzen des Bits an Position 2: " << binaryToString(number, 6) << std::endl;

    // Lösche das Bit an Position 1
    number = clearBit(number, 1);
    std::cout << "Nach Löschen des Bits an Position 1: " << binaryToString(number, 6) << std::endl;

    // Prüfe, ob das Bit an Position 3 gesetzt ist
    bool isSet = checkBit(number, 3);
    std::cout << "Ist das Bit an Position 3 gesetzt? " << (isSet ? "Ja" : "Nein") << std::endl;

    // Konvertiere einen Binärstring in eine Ganzzahl
    std::string binString = "101010";
    int numFromBin = btoi(binString);  // Umwandlung eines Binärstrings in eine Ganzzahl
    std::cout << "Die Zahl aus dem Binärstring '" << binString << "' ist: " << numFromBin << std::endl;

    // Setze Bits mit einer Maske
    int maskSet = 0b00000101;  // Maske zum Setzen von Bits
    int result = applyMaskAdd(number, maskSet);
    std::cout << "Nach dem Setzen der Bits (Maske: 0b00000101): " << binaryToString(result, 6) << std::endl;

    // Lösche Bits mit einer Maske
    int maskClear = 0b00001010;  // Maske zum Löschen von Bits
    result = applyMaskClear(number, maskClear);
    std::cout << "Nach dem Löschen der Bits (Maske: 0b00001010): " << binaryToString(result, 6) << std::endl;

    // Prüfe, ob alle Bits der Setzmaske gesetzt sind
    bool areBitsSet = applyMaskCheck(number, maskSet);
    std::cout << "Sind die Bits der Setzmaske alle gesetzt? " << (areBitsSet ? "Ja" : "Nein") << std::endl;

    return 0;
}
