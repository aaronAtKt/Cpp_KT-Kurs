#include <iostream>  // Für std::cout und std::endl
#include <bitset>    // Für std::bitset, um Binärdarstellung zu erzeugen

// Funktion zur Ausgabe der Binärdarstellung einer Zahl
void printBinary(int number, const std::string& label) {
    // Ausgabe des Labels (z.B. "OddBits:") und der Binärdarstellung der Zahl
    std::cout << label << ": " << "0b" << std::bitset<32>(number) << std::endl;
}

// Funktion, die benachbarte Bit-Paare in einer Zahl tauscht
int swapBitPairs(int number) {
    // Maske für ungerade Bits (101010... in binär)
    // Erklärung der Hexadezimalwerte:
    // 0xAAAAAAAA ist die Hexadezimaldarstellung einer Zahl, bei der alle ungeraden Bits (1., 3., 5., etc.) auf 1 gesetzt sind.
    // In Binär sieht 0xAAAAAAAA so aus: 10101010101010101010101010101010
    // Jede Hexadezimalziffer entspricht 4 Bits. Beispiel:
    // A (Hex) = 1010 (Binär) 
    // Daher ist 0xAAAAAAAA in Binär: 1010 1010 1010 1010 1010 1010 1010 1010
    int oddBits = number & 0xAAAAAAAA;  // Extrahiert ungerade Bits

    // Maske für gerade Bits (010101... in binär)
    // 0x55555555 ist die Hexadezimaldarstellung einer Zahl, bei der alle geraden Bits (2., 4., 6., etc.) auf 1 gesetzt sind.
    // In Binär sieht 0x55555555 so aus: 01010101010101010101010101010101
    // Jede Hexadezimalziffer entspricht 4 Bits. Beispiel:
    // 5 (Hex) = 0101 (Binär)
    // Daher ist 0x55555555 in Binär: 0101 0101 0101 0101 0101 0101 0101 0101
    int evenBits = number & 0x55555555;  // Extrahiert gerade Bits
    
    // Ausgabe der ungeraden und geraden Bits vor dem Tausch
    printBinary(oddBits, "OddBits");
    printBinary(evenBits, "EvenBits");
    
    // Verschiebe die ungeraden Bits nach rechts um 1 Position
    oddBits >>= 1;
    
    // Verschiebe die geraden Bits nach links um 1 Position
    evenBits <<= 1;

    // Ausgabe der ungeraden und geraden Bits nach dem Tausch
    printBinary(oddBits, "OddBits nach dem Tausch");
    printBinary(evenBits, "EvenBits nach dem Tausch");
    
    // Kombiniere die verschobenen ungeraden und geraden Bits wieder
    int result = oddBits | evenBits;
    return result;
}

int main() {
    // Beispielzahl im Hexadezimalformat: 0xAED598FF
    // Wie kommen wir zu 0xAED598FF? Hier ist die Binärdarstellung von 0xAED598FF:
    // A (Hex) = 1010 (Binär)
    // E (Hex) = 1110 (Binär)
    // D (Hex) = 1101 (Binär)
    // 5 (Hex) = 0101 (Binär)
    // 9 (Hex) = 1001 (Binär)
    // 8 (Hex) = 1000 (Binär)
    // F (Hex) = 1111 (Binär)
    // F (Hex) = 1111 (Binär)
    // Daher ist 0xAED598FF in Binär: 10101110110101011001100011111111
    int number = 0xAED598FF;
    
    // Ausgabe der Originalzahl und ihrer Binärdarstellung
    std::cout << "Originale Zahl: 0b" << std::bitset<32>(number) << std::endl;
    
    // Rufe die Funktion auf, um die benachbarten Bit-Paare zu tauschen
    int result = swapBitPairs(number);
    
    // Ausgabe der getauschten Bits
    printBinary(result, "Getauschte Bits");

    return 0;
}
