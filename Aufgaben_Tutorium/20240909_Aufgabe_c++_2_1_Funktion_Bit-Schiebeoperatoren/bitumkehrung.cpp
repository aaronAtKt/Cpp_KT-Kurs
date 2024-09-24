#include <iostream>
#include <bitset>
#include <cmath>

// Funktion zur Berechnung der Anzahl der signifikanten Bits
int berechneSignifikanteBits(unsigned int zahl) {
    if (zahl == 0) return 1; // Wenn die Zahl 0 ist, hat sie 1 signifikantes Bit (0 selbst)
    return static_cast<int>(std::log2(zahl)) + 1; // Anzahl der signifikanten Bits
}

// Funktion zur Bitumkehrung ohne die führenden Nullen zu ändern
unsigned int bitUmkehrOhneFührendeNullen(unsigned int zahl) {
    int signifikanteBits = berechneSignifikanteBits(zahl);
    unsigned int maske = (1 << signifikanteBits) - 1; // Maske, die nur die signifikanten Bits abdeckt
    return ~zahl & maske; // Bitumkehrung nur für die signifikanten Bits
}

int main() {
    unsigned int zahl = 0b0000000000010110; // Beispielzahl mit führenden Nullen (22 in Dezimal)

    // Ausgabe der Originalzahl und der umgekehrten Zahl
    std::bitset<16> original(zahl);  // Darstellung als 16-Bit-Zahl
    unsigned int umgekehrt = bitUmkehrOhneFührendeNullen(zahl);  // Umgekehrte Zahl
    std::bitset<16> umgekehrteBits(umgekehrt);  // Darstellung der umgekehrten Bits

    std::cout << "Originalzahl:  " << original << std::endl;
    std::cout << "Umgekehrte Zahl:  " << umgekehrteBits << std::endl;

    return 0;
}
