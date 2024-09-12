#include <iostream>  // Importiert die Bibliothek für Ein- und Ausgabe (z.B. std::cout und std::endl).

// Funktion, um einen Bitbereich aus einer Zahl zu extrahieren.
// number: Die Zahl, aus der der Bitbereich extrahiert werden soll.
// start: Die Startposition des zu extrahierenden Bitbereichs.
// length: Die Anzahl der Bits, die extrahiert werden sollen.
int extractBitRange(int number, int start, int length) {
    // Erzeuge eine Maske, die genau 'length' viele 1-Bits hat.
    // Der Ausdruck '1 << length' erzeugt eine Zahl, bei der nur das (length+1)-te Bit auf 1 gesetzt ist.
    // Wenn wir dann 1 von dieser Zahl abziehen, erhalten wir eine Maske, bei der die letzten 'length' Bits auf 1 gesetzt sind.
    int mask = (1 << length) - 1;
    
    // Schiebe die Bits von 'number' um 'start' Stellen nach rechts.
    // Dies bringt den gewünschten Bitbereich an die niedrigsten Stellen (die letzten Bits) der Zahl.
    // Durch die AND-Operation mit der Maske stellen wir sicher, dass nur die letzten 'length' Bits erhalten bleiben.
    return (number >> start) & mask;
}

int main() {
    int number = 42;  // Beispielzahl: 42 in binär ist 101010.
    int start = 1;    // Die Extraktion soll bei Position 1 beginnen.
    int length = 3;   // Wir wollen 3 Bits extrahieren.

    // Rufe die Funktion auf, um den Bitbereich aus der Zahl zu extrahieren.
    int result = extractBitRange(number, start, length);
    
    // Gib das extrahierte Ergebnis auf der Konsole aus.
    std::cout << "Extrahierter Bitbereich: " << result << std::endl;

    return 0;
}
