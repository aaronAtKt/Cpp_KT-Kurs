#include <iostream>  // Importiert die Bibliothek für Ein- und Ausgabe (z.B. std::cout und std::endl)

// Funktion, die benachbarte Bit-Paare in einer Zahl tauscht.
// number: Die Ganzzahl, deren benachbarte Bits (Paare) getauscht werden sollen.
int swapBitPairs(int number) {
    // Maske für ungerade Bits (010101... in binär)
    // 0xAAAAAAAA ist die hexadezimale Darstellung einer Zahl, bei der alle ungeraden Bits 1 sind (z.B. in binär: 10101010101010101010101010101010).
    // Durch "number & 0xAAAAAAAA" werden alle ungeraden Bits der Zahl "number" extrahiert.
    int oddBits = number & 0xAAAAAAAA;

    // Maske für gerade Bits (101010... in binär)
    // 0x55555555 ist die hexadezimale Darstellung einer Zahl, bei der alle geraden Bits 1 sind (z.B. in binär: 01010101010101010101010101010101).
    // Durch "number & 0x55555555" werden alle geraden Bits der Zahl "number" extrahiert.
    int evenBits = number & 0x55555555;
    
    // Verschiebe die ungeraden Bits nach rechts um 1 Position.
    // Da wir die ungeraden Bits nach rechts verschieben, tauschen wir sie mit den nächstgelegenen geraden Bits.
    oddBits >>= 1;

    // Verschiebe die geraden Bits nach links um 1 Position.
    // Durch das Verschieben der geraden Bits nach links rücken sie an die Position der ungeraden Bits.
    evenBits <<= 1;
    
    // Kombiniere die verschobenen ungeraden und geraden Bits wieder.
    // Durch eine bitweise ODER-Operation (|) werden die Bits zu einer Zahl zusammengeführt.
    return (oddBits | evenBits);
}

int main() {
    int number = 42;  // Beispielzahl: 42 in binär ist 101010.
    
    // Rufe die Funktion auf, um die benachbarten Bit-Paare zu tauschen.
    int result = swapBitPairs(number);
    
    // Gib das Ergebnis aus. Das Ergebnis zeigt die Zahl nach dem Tausch der Bit-Paare.
    std::cout << "Zahl nach Bit-Paar-Tausch: " << result << std::endl;

    return 0;
}
