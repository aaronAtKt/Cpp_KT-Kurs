#include <iostream>
#include <limits>  // für std::numeric_limits

// Funktion, um ein Bit an einer bestimmten Position zu setzen oder zurückzusetzen.
// number: Die zu bearbeitende Zahl (32 oder 64-Bit).
// position: Die Position des Bits, das geändert werden soll.
// setToOne: true, wenn das Bit auf 1 gesetzt werden soll; false, wenn es auf 0 gesetzt werden soll.
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
    unsigned long long number = 42;  // Beispielzahl für 64-Bit
    int position = 5;  // Position des Bits
    bool setToOne = true;  // Setzt das Bit auf 1

    unsigned long long result = setBit(number, position, setToOne);
    std::cout << "Ergebnis (64-Bit): " << result << std::endl;

    int number32 = 42;  // Beispielzahl für 32-Bit
    result = setBit(number32, position, setToOne);
    std::cout << "Ergebnis (32-Bit): " << result << std::endl;

    return 0;
}
