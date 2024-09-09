#include <iostream>

// Funktion, die die Anzahl der gesetzten Bits (1-Bits) zählt.
// number: Die zu überprüfende Zahl.
int countSetBits(int number) {
    int count = 0;  // Zählvariable für gesetzte Bits
    
    while (number) {
        count += number & 1;  // Prüft, ob das niedrigstwertige Bit gesetzt ist
        number >>= 1;  // Schiebt die Bits nach rechts, um das nächste Bit zu prüfen
    }
    
    return count;
}

int main() {
    int number = 42;  // Beispielzahl

    int result = countSetBits(number);
    std::cout << "Anzahl gesetzter Bits: " << result << std::endl;

    return 0;
}
