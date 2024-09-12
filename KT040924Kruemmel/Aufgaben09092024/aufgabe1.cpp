#include <iostream>  // Importiert die Bibliothek für Ein- und Ausgabe (z.B. std::cout und std::cerr).
#include <limits>    // Importiert die Bibliothek, die Informationen über Datentypen bereitstellt, z.B. std::numeric_limits.

// Funktion, um ein Bit an einer bestimmten Position zu setzen oder zurückzusetzen.
// number: Die zu bearbeitende Zahl (32-Bit oder 64-Bit).
// position: Die Position des Bits, das geändert werden soll.
// setToOne: true, wenn das Bit auf 1 gesetzt werden soll; false, wenn es auf 0 gesetzt werden soll.
template<typename T>
T setBit(T number, int position, bool setToOne) {
    // Bestimmt die Anzahl der Bits im Datentyp T (z.B. 32 Bits für 'int', 64 Bits für 'long long').
    const int bitSize = std::numeric_limits<T>::digits;
    
    // Überprüfen, ob die angegebene Bitposition gültig ist.
    // Positionen müssen zwischen 0 und der maximalen Anzahl an Bits liegen.
    if (position < 0 || position >= bitSize) {
        std::cerr << "Fehler: Ungültige Bitposition. Gültiger Bereich ist 0 bis " << bitSize - 1 << std::endl;
        return number;  // Gibt die unveränderte Zahl zurück, wenn die Position ungültig ist.
    }
    
    // Wenn setToOne true ist, setzen wir das Bit an der angegebenen Position auf 1.
    if (setToOne) {
        // Wir verwenden den Linksverschiebungsoperator (<<), um die 1 um 'position' Stellen nach links zu schieben,
        // und verknüpfen dann die Zahl mit einer OR-Operation (|), um das Bit auf 1 zu setzen.
        number |= (T(1) << position);
    } 
    // Wenn setToOne false ist, setzen wir das Bit an der angegebenen Position auf 0.
    else {
        // Wir erzeugen eine Maske, indem wir die 1 um 'position' Stellen nach links verschieben und diese Maske negieren (~).
        // Anschließend verwenden wir die AND-Operation (&), um das Bit auf 0 zu setzen.
        number &= ~(T(1) << position);
    }
    
    // Die Zahl mit dem geänderten Bit wird zurückgegeben.
    return number;
}

int main() {
    // Beispiel für 64-Bit Zahl
    unsigned long long number = 42;  // Beispielzahl: 42 in binär ist 101010.
    int position = 5;  // Wir setzen das Bit an Position 5 (binär von rechts gezählt) auf 1.
    bool setToOne = true;  // Bit wird auf 1 gesetzt.
    
    // Rufe die Funktion auf, um das Bit an Position 5 zu setzen.
    unsigned long long result = setBit(number, position, setToOne);
    
    // Gib das Ergebnis nach der Bitmanipulation für die 64-Bit-Zahl aus.
    std::cout << "Ergebnis (64-Bit): " << result << std::endl;

    // Beispiel für 32-Bit Zahl
    int number32 = 42;  // Dieselbe Zahl, aber als 32-Bit Ganzzahl.
    
    // Setze das Bit in der 32-Bit-Zahl ebenfalls an Position 5 auf 1.
    result = setBit(number32, position, setToOne);
    
    // Gib das Ergebnis nach der Bitmanipulation für die 32-Bit-Zahl aus.
    std::cout << "Ergebnis (32-Bit): " << result << std::endl;

    return 0;
}
