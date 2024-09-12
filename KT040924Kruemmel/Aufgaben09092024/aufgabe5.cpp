#include <iostream>  // Importiert die Bibliothek für Ein- und Ausgabe (z.B. std::cout und std::endl).

// Funktion, die eine Zahl zirkulär nach links verschiebt.
// number: Die zu verschiebende Zahl.
// bits: Die Anzahl der Stellen, um die die Zahl nach links zirkulär verschoben wird.
int rotateLeft(int number, int bits) {
    // Bestimmt die Anzahl der Bits im Datentyp 'int'.
    // 'sizeof(number)' gibt die Größe des Datentyps in Bytes zurück.
    // Da ein Byte 8 Bits hat, multiplizieren wir mit 8, um die Anzahl der Bits zu erhalten.
    const int bitSize = sizeof(number) * 8;
    
    // Wenn 'bits' größer ist als die Anzahl der Bits in der Zahl, beschränken wir die Verschiebung
    // auf die Anzahl der Bits. Das bedeutet, dass 'bits %= bitSize' nur die für die Bitgröße notwendigen
    // Verschiebungen ausführt (da sich nach einer vollständigen Verschiebung alle Bits wiederholen).
    bits %= bitSize;
    
    // Zirkuläre Linksverschiebung:
    // - 'number << bits' verschiebt die Zahl nach links um 'bits' Positionen.
    // - 'number >> (bitSize - bits)' verschiebt die Zahl nach rechts um (bitSize - bits) Positionen.
    // - Die beiden Ergebnisse werden mit der OR-Operation (|) kombiniert, um die zirkuläre Verschiebung zu realisieren.
    return (number << bits) | (number >> (bitSize - bits));
}

int main() {
    int number = 42;  // Beispielzahl: 42 in binär ist 101010.
    int bits = 3;  // Die Zahl soll um 3 Stellen zirkulär nach links verschoben werden.

    // Rufe die Funktion auf, um die Zahl zirkulär nach links zu verschieben.
    int result = rotateLeft(number, bits);
    
    // Gib das Ergebnis der zirkulären Verschiebung auf der Konsole aus.
    std::cout << "Zahl nach zirkulärer Verschiebung: " << result << std::endl;

    return 0;
}
