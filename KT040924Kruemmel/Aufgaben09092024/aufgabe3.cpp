#include <iostream>

// Funktion, die benachbarte Bit-Paare tauscht.
// number: Die Ganzzahl, deren Bits getauscht werden sollen.
int swapBitPairs(int number) {
    // Maske für ungerade Bits (010101... in binär)
    int oddBits = number & 0xAAAAAAAA;  // Extrahiert alle ungeraden Bits
    // Maske für gerade Bits (101010... in binär)
    int evenBits = number & 0x55555555;  // Extrahiert alle geraden Bits
    
    // Tausche die Bit-Paare: Verschiebe ungerade Bits nach rechts und gerade Bits nach links
    oddBits >>= 1;
    evenBits <<= 1;
    
    return (oddBits | evenBits);  // Kombiniere beide Masken
}

int main() {
    int number = 42;  // Beispielzahl

    int result = swapBitPairs(number);
    std::cout << "Zahl nach Bit-Paar-Tausch: " << result << std::endl;

    return 0;
}
