#include <iostream>

// Funktion, die eine Zahl zirkulär nach links verschiebt.
// number: Die zu verschiebende Zahl.
// bits: Die Anzahl der Stellen, um die verschoben wird.
int rotateLeft(int number, int bits) {
    const int bitSize = sizeof(number) * 8;  // Bitgröße des Datentyps int
    bits %= bitSize;  // Die Anzahl der Verschiebungen auf die Bitbreite beschränken
    
    return (number << bits) | (number >> (bitSize - bits));  // Kombination aus Links- und Rechtsverschiebung
}

int main() {
    int number = 42;  // Beispielzahl
    int bits = 3;  // Anzahl der Verschiebungen

    int result = rotateLeft(number, bits);
    std::cout << "Zahl nach zirkulärer Verschiebung: " << result << std::endl;

    return 0;
}
