#include <iostream>
#include <bitset>  // für Ausgabe der binären Darstellung
#include <limits>  // für std::numeric_limits

// Funktion, um ein Bit an einer bestimmten Position zu setzen oder zurückzusetzen.
template<typename T>
T setBit(T number, int position, bool setToOne) {
    const int bitSize = std::numeric_limits<T>::digits; // Maximale Anzahl von Bits des Typs T
    
    // Überprüfung, ob die Position gültig ist
    if (position < 0 || position >= bitSize) {
        std::cerr << "Fehler: Ungültige Bitposition. Gültiger Bereich ist 0 bis " << bitSize - 1 << std::endl;
        return number;  // Unveränderte Zahl zurückgeben, wenn die Position ungültig ist
    }
    
    if (setToOne) {
        number |= (T(1) << position);  // Setzt das Bit an der gegebenen Position auf 1
    } else {
        number &= ~(T(1) << position); // Setzt das Bit an der gegebenen Position auf 0
    }
    
    return number; // Gibt die veränderte Zahl zurück
}

int main() {
    unsigned long long number = 35;  // Beispielzahl für 64-Bit
    int position = 5;  // Position des Bits
    bool setToOne = true;  // Setzt das Bit auf 1

    std::cout << "Original (64-Bit): " << std::bitset<64>(number) << std::endl;
    unsigned long long result = setBit(number, position, setToOne);
    std::cout << "Nach Setzen des Bits (64-Bit): " << result << " (" << std::bitset<64>(result) << ")" << std::endl;

    int number32 = 68;  // Beispielzahl für 32-Bit
    std::cout << "Original (32-Bit): " << std::bitset<32>(number32) << std::endl;
    result = setBit(number32, position, setToOne);
    std::cout << "Nach Setzen des Bits (32-Bit): " << result << " (" << std::bitset<32>(result) << ")" << std::endl;

    return 0;
}
