#include <iostream>

int main() {
    // 1. & (Bitweises UND)
    // WAS: Bitweises UND vergleicht die Bits zweier Zahlen und gibt nur die Bits zurück, die in beiden Zahlen gesetzt sind.
    // WIE: Der Operator wird zwischen zwei Zahlen gesetzt (a & b).
    // WARUM: Dieser Operator ist nützlich, um gemeinsame Bits zu extrahieren, z.B. bei Maskierungsoperationen.
    int a = 6;  // Binär: 110
    int b = 3;  // Binär: 011
    int ergebnis_und = a & b;  // Ergebnis: 010 (Dezimal: 2)
    std::cout << "Bitweises UND (a & b): " << ergebnis_und << std::endl;  // Ausgabe: 2

    // 2. | (Bitweises ODER)
    // WAS: Bitweises ODER kombiniert die Bits zweier Zahlen und setzt die Bits, wenn mindestens eines der Bits in einer der Zahlen gesetzt ist.
    // WIE: Der Operator wird zwischen zwei Zahlen gesetzt (a | b).
    // WARUM: Dieser Operator wird verwendet, um mehrere Flags zu kombinieren oder Bits zu setzen.
    int ergebnis_oder = a | b;  // Ergebnis: 111 (Dezimal: 7)
    std::cout << "Bitweises ODER (a | b): " << ergebnis_oder << std::endl;  // Ausgabe: 7

    // 3. ^ (Bitweises XOR)
    // WAS: Bitweises XOR vergleicht die Bits zweier Zahlen und setzt die Bits, die in genau einer der beiden Zahlen gesetzt sind.
    // WIE: Der Operator wird zwischen zwei Zahlen gesetzt (a ^ b).
    // WARUM: Wird oft verwendet, um Unterschiede zwischen zwei Werten zu finden oder Bits zu invertieren.
    int ergebnis_xor = a ^ b;  // Ergebnis: 101 (Dezimal: 5)
    std::cout << "Bitweises XOR (a ^ b): " << ergebnis_xor << std::endl;  // Ausgabe: 5

    // 4. ~ (Bitweises NICHT)
    // WAS: Bitweises NICHT invertiert alle Bits einer Zahl (0 wird 1, 1 wird 0).
    // WIE: Der Operator wird vor eine Zahl gesetzt (~a).
    // WARUM: Wird verwendet, um alle Bits einer Zahl zu negieren oder bestimmte Bits zu invertieren.
    int ergebnis_nicht = ~a;  // Ergebnis: -7 (Zweierkomplement)
    std::cout << "Bitweises NICHT (~a): " << ergebnis_nicht << std::endl;  // Ausgabe: -7

    // 5. << (Bitweises Linksverschieben)
    // WAS: Linksverschiebung verschiebt die Bits einer Zahl um eine bestimmte Anzahl von Positionen nach links.
    // WIE: Der Operator wird zwischen einer Zahl und der Anzahl der Verschiebungen gesetzt (a << 1).
    // WARUM: Linksverschiebung entspricht einer Multiplikation der Zahl mit 2.
    int ergebnis_links = a << 1;  // Ergebnis: 1010 (Dezimal: 10)
    std::cout << "Bitweises Linksverschieben (a << 1): " << ergebnis_links << std::endl;  // Ausgabe: 10

    // 6. >> (Bitweises Rechtsverschieben)
    // WAS: Rechtsverschiebung verschiebt die Bits einer Zahl um eine bestimmte Anzahl von Positionen nach rechts.
    // WIE: Der Operator wird zwischen einer Zahl und der Anzahl der Verschiebungen gesetzt (a >> 1).
    // WARUM: Rechtsverschiebung entspricht einer Division der Zahl durch 2.
    int ergebnis_rechts = a >> 1;  // Ergebnis: 10 (Dezimal: 2)
    std::cout << "Bitweises Rechtsverschieben (a >> 1): " << ergebnis_rechts << std::endl;  // Ausgabe: 2

    return 0;
}
