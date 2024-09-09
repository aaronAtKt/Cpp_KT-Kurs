#include <iostream>

// Funktion, um einen Bitbereich aus einer Zahl zu extrahieren.
// number: Die zu bearbeitende Zahl.
// start: Startposition des Bitbereichs.
// length: Länge des zu extrahierenden Bitbereichs.
int extractBitRange(int number, int start, int length) {
    // Erzeuge eine Maske, die die gewünschten Bits enthält
    int mask = (1 << length) - 1;  // Maske, die die letzten 'length' Bits auf 1 setzt
    return (number >> start) & mask;  // Verschiebt die Bits und wendet die Maske an
}

int main() {
    int number = 42;  // Beispielzahl
    int start = 1;    // Startposition des Bitbereichs
    int length = 3;   // Länge des Bitbereichs

    int result = extractBitRange(number, start, length);
    std::cout << "Extrahierter Bitbereich: " << result << std::endl;

    return 0;
}
