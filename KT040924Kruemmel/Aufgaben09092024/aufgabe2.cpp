#include <iostream>
#include <limits>  // für std::numeric_limits

// Funktion, um die Bits einer Zahl umzukehren.
// number: Die zu bearbeitende Zahl.
// bitWidth: Die Anzahl der zu betrachtenden Bits.
unsigned long long reverseBits(unsigned long long number, int bitWidth) {
    if (bitWidth != 8 && bitWidth != 16 && bitWidth != 32 && bitWidth != 64) {
        std::cerr << "Fehler: Ungültige Bitbreite. Zulässige Breiten sind 8, 16, 32 und 64." << std::endl;
        return number;
    }

    unsigned long long result = 0;  // Speichert das Ergebnis
    
    for (int i = 0; i < bitWidth; ++i) {
        result = (result << 1) | (number & 1);  // Schiebe Ergebnis nach links und füge das niedrigste Bit hinzu
        number >>= 1;  // Schiebe die Bits der Zahl nach rechts
    }

    return result;
}

int main() {
    unsigned long long number = 13;  // Beispielzahl
    int bitWidth = 16;  // Bitbreite (z.B. 16 Bits)

    unsigned long long result = reverseBits(number, bitWidth);
    std::cout << "Umgekehrte Bits: " << result << std::endl;

    return 0;
}
