#include <iostream>  // Importiert die Bibliothek für Ein- und Ausgabe (z.B. std::cout und std::endl).

// Funktion, die die Anzahl der gesetzten Bits (1-Bits) in einer Zahl zählt.
// number: Die Zahl, deren gesetzte Bits gezählt werden sollen.
int countSetBits(int number) {
    int count = 0;  // Variable zum Zählen der gesetzten Bits, initial auf 0 gesetzt.
    
    // Solange die Zahl 'number' nicht 0 ist, prüft die Schleife jedes Bit der Zahl.
    while (number) {
        // Der Ausdruck "number & 1" prüft das niedrigstwertige Bit der Zahl.
        // Wenn das niedrigstwertige Bit 1 ist, wird der Zähler 'count' um 1 erhöht.
        count += number & 1;
        
        // Schiebe die Bits der Zahl 'number' um eine Position nach rechts, um das nächste Bit zu prüfen.
        // Jedes Mal, wenn die Zahl nach rechts geschoben wird, wird das niedrigstwertige Bit entfernt,
        // und das nächst höhere Bit rückt an seine Stelle.
        number >>= 1;
    }
    
    // Gibt die Gesamtanzahl der gesetzten Bits (Bits, die 1 sind) zurück.
    return count;
}

int main() {
    int number = 42;  // Beispielzahl: 42 in Binär ist 101010.
    
    // Rufe die Funktion auf, um die Anzahl der gesetzten Bits zu zählen.
    int result = countSetBits(number);
    
    // Gib das Ergebnis auf der Konsole aus.
    std::cout << "Anzahl gesetzter Bits: " << result << std::endl;

    return 0;
}
