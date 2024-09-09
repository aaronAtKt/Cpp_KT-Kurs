#include <iostream>  // Importiert die Bibliothek für Ein- und Ausgabe, z.B. std::cout und std::endl.
#include <limits>    // Importiert die Bibliothek, die Informationen über Datentypen liefert (z.B. Anzahl der Bits eines Typs).

// Funktion, um die Bits einer Zahl umzukehren.
// number: Die Zahl, deren Bits umgekehrt werden sollen.
// bitWidth: Die Anzahl der zu betrachtenden Bits (z.B. 8, 16, 32 oder 64 Bits).
unsigned long long reverseBits(unsigned long long number, int bitWidth) {
    
    // Überprüfen, ob die Bitbreite eine der zulässigen Werte (8, 16, 32 oder 64) ist.
    // Wenn nicht, wird eine Fehlermeldung ausgegeben.
    if (bitWidth != 8 && bitWidth != 16 && bitWidth != 32 && bitWidth != 64) {
        std::cerr << "Fehler: Ungültige Bitbreite. Zulässige Breiten sind 8, 16, 32 und 64." << std::endl;
        return number;  // Gibt die ursprüngliche Zahl zurück, wenn die Bitbreite ungültig ist.
    }

    // Hier wird das Ergebnis der Bitumkehr gespeichert. Anfangswert ist 0.
    unsigned long long result = 0;  
    
    // Diese Schleife durchläuft alle Bits, die umgekehrt werden sollen.
    // Die Schleife läuft genau 'bitWidth' mal.
    for (int i = 0; i < bitWidth; ++i) {
        
        // Schiebe die Bits in 'result' um eine Position nach links.
        // Dies sorgt dafür, dass Platz für das nächste Bit aus der Originalzahl gemacht wird.
        result = (result << 1);
        
        // Nimm das niedrigstwertige Bit der Zahl 'number' (durch AND-Operation mit 1),
        // und füge es zu 'result' hinzu (OR-Operation sorgt dafür, dass das Bit hinzugefügt wird).
        result |= (number & 1);
        
        // Schiebe die Bits in der Originalzahl 'number' nach rechts,
        // damit das nächste Bit für die nächste Schleifeniteration geprüft werden kann.
        number >>= 1;
    }

    // Gibt die umgekehrte Bitfolge als Ergebnis zurück.
    return result;
}

int main() {
    // Beispielzahl, deren Bits umgekehrt werden sollen. 13 in Binärform ist 1101.
    unsigned long long number = 13;
    
    // Die Anzahl der Bits, die wir umkehren wollen. Hier wird die Zahl als 16-Bit-Zahl behandelt.
    int bitWidth = 16;  // Das heißt, wir betrachten 16 Bits der Zahl.

    // Rufe die Funktion auf, um die Bits der Zahl 'number' umzukehren, und speichere das Ergebnis.
    unsigned long long result = reverseBits(number, bitWidth);
    
    // Gib das Ergebnis der Umkehrung auf der Konsole aus.
    std::cout << "Umgekehrte Bits: " << result << std::endl;

    return 0;
}
