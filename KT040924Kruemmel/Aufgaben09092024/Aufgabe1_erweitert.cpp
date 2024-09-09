#include <iostream>  // Importiert die Bibliothek für Ein- und Ausgabe (z.B. std::cout und std::cerr)
#include <bitset>    // Importiert die Bibliothek für die binäre Ausgabe von Zahlen
#include <limits>    // Importiert die Bibliothek für Informationen über Datentypen, z.B. std::numeric_limits

// Funktion, um ein Bit an einer bestimmten Position zu setzen oder zurückzusetzen.
// number: Die zu bearbeitende Zahl (32-Bit oder 64-Bit).
// position: Die Position des Bits, das geändert werden soll.
// setToOne: true, wenn das Bit auf 1 gesetzt werden soll; false, wenn es auf 0 gesetzt werden soll.
template<typename T>
T setBit(T number, int position, bool setToOne) {
    // Bestimmt die maximale Anzahl von Bits im Datentyp T (z.B. 32 Bits für 'int', 64 Bits für 'unsigned long long').
    const int bitSize = std::numeric_limits<T>::digits;

    // Überprüfen, ob die angegebene Bitposition innerhalb des gültigen Bereichs liegt.
    if (position < 0 || position >= bitSize) {
        std::cerr << "Fehler: Ungültige Bitposition. Gültiger Bereich ist 0 bis " << bitSize - 1 << std::endl;
        return number;  // Gibt die unveränderte Zahl zurück, wenn die Position ungültig ist.
    }

    // Wenn setToOne true ist, setzen wir das Bit an der angegebenen Position auf 1.
    if (setToOne) {
        // Verwendet eine OR-Operation (|), um das Bit an der Position auf 1 zu setzen, ohne die anderen Bits zu verändern.
        number |= (T(1) << position);
    }
    // Wenn setToOne false ist, setzen wir das Bit an der angegebenen Position auf 0.
    else {
        // Verwendet eine AND-Operation (&) mit der invertierten Maske (~), um das Bit auf 0 zu setzen, während die anderen Bits erhalten bleiben.
        number &= ~(T(1) << position);
    }

    // Gibt die geänderte Zahl zurück.
    return number;
}

int main() {
    // Beispielzahl für 64-Bit: 35 in Dezimal ist 100011 in Binärform
    unsigned long long number = 35;
    int position = 5;  // Position des zu ändernden Bits (zählt von 0 aus, Bit 5 ist das sechste Bit von rechts)
    bool setToOne = true;  // Das Bit soll auf 1 gesetzt werden.

    // Ausgabe der ursprünglichen Zahl in binärer Form (64-Bit).
    std::cout << "Original (64-Bit): " << std::bitset<64>(number) << std::endl;
    
    // Setzen des Bits an Position 5 auf 1.
    unsigned long long result = setBit(number, position, setToOne);
    
    // Ausgabe des Ergebnisses in Dezimal und binär.
    std::cout << "Nach Setzen des Bits (64-Bit): " << result << " (" << std::bitset<64>(result) << ")" << std::endl;

    // Beispielzahl für 32-Bit: 68 in Dezimal ist 1000100 in Binärform
    int number32 = 68;
    
    // Ausgabe der ursprünglichen Zahl in binärer Form (32-Bit).
    std::cout << "Original (32-Bit): " << std::bitset<32>(number32) << std::endl;

    // Setzen des Bits an Position 5 auf 1.
    result = setBit(number32, position, setToOne);
    
    // Ausgabe des Ergebnisses in Dezimal und binär.
    std::cout << "Nach Setzen des Bits (32-Bit): " << result << " (" << std::bitset<32>(result) << ")" << std::endl;

    return 0;
}
