#include <iostream>  // Standardbibliothek für Ein- und Ausgabe

// Funktion, um einen bestimmten Bitbereich aus einer Ganzzahl zu extrahieren.
// n: Die Zahl, aus der die Bits extrahiert werden sollen.
// s: Die Startposition, ab der die Bits extrahiert werden sollen (beginnend bei 0).
// l: Die Anzahl der Bits, die extrahiert werden sollen.
int extractBitRange(int n, int s, int l) {
    // Zuerst wird die Zahl 'n' um 's' Stellen nach rechts verschoben.
    // Dadurch rücken die zu extrahierenden Bits an die niedrigsten Stellen.
    // Dann wird mit einer Maske AND-verknüpft, die 'l' viele 1-Bits enthält.
    // Die Maske wird durch '(1 << l) - 1' erzeugt:
    // '1 << l' verschiebt die 1 um 'l' Stellen nach links, z.B. 1 << 3 = 1000 (Binär).
    // Wenn wir 1 von 1000 abziehen, erhalten wir 0111, was 'l' viele 1-Bits sind.
    // Diese Maske sorgt dafür, dass nur die gewünschten Bits erhalten bleiben und die restlichen auf 0 gesetzt werden.
    return (n >> s) & ((1 << l) - 1);
}

int main() {
    // Beispiel: Wir wollen aus der Zahl 42 (Binär: 101010) die Bits ab der Position 1 extrahieren,
    // und zwar 3 Bits (also die Bits an den Positionen 1, 2 und 3).
    // Die erwartete Ausgabe ist 101 (Binär), was 5 (Dezimal) entspricht.
    
    std::cout << extractBitRange(42, 1, 3);  // Gibt das Ergebnis der Bitextraktion aus
    return 0;  // Beendet das Programm erfolgreich
}
