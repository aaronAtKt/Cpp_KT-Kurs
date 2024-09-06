#include <iostream>  // Für Ein- und Ausgabe auf der Konsole

int main() {
    // 1. Deklaration und Initialisierung zweier Ganzzahlen
    int zahl1 = 10;  // Was: Deklaration und Initialisierung der Variable "zahl1" mit dem Wert 10.
    // Warum: Speichert die erste Zahl für die Berechnung.

    int zahl2 = 15;  // Was: Deklaration und Initialisierung der Variable "zahl2" mit dem Wert 15.
    // Warum: Speichert die zweite Zahl für die Berechnung.

    // 2. Berechnung der Summe der beiden Zahlen
    int summe = zahl1 + zahl2;  // Was: Berechnet die Summe von "zahl1" und "zahl2" und speichert das Ergebnis in "summe".
    // Warum: Um das Ergebnis der Addition zu speichern.

    // 3. Ausgabe des Ergebnisses
    std::cout << "Die Summe von " << zahl1 << " und " << zahl2 << " ist: " << summe << std::endl;  // Was: Ausgabe der Summe auf der Konsole.
    // Wie: Der Operator `<<` wird verwendet, um die Daten auf der Konsole anzuzeigen.
    // Warum: Um das Ergebnis der Berechnung zu zeigen.

    return 0;  // Programm erfolgreich beendet
}
