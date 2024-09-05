#include <iostream>
#include <string>
#include <bitset>  // Für die Ausgabe der Bits

int main() {
    // 1. Bitweise Verknüpfung - & (Bitweises UND)
    // WAS: Bitweises UND vergleicht die Bits zweier Zahlen und gibt nur die Bits zurück, die in beiden Zahlen gesetzt sind.
    // WIE: Der Operator & wird zwischen zwei Zahlen verwendet.
    // WARUM: Wird verwendet, um die gemeinsamen Bits zweier Zahlen zu extrahieren.
    int a = 6;  // Binär: 110
    int b = 3;  // Binär: 011
    int ergebnis_und = a & b;  // Ergebnis: 010 (Dezimal: 2)
    std::cout << "Das Ergebnis von " << a << " & " << b << " ist: " << ergebnis_und << std::endl;  // Ausgabe: 2

    // 2. Verkettung von Strings
    // WAS: Zwei Strings werden mithilfe des + Operators zu einem vollständigen Satz verkettet.
    // WIE: Der Operator + wird verwendet, um zwei String-Objekte zu verbinden.
    // WARUM: Nützlich, um mehrere Teile eines Satzes oder Textes zu einem vollständigen String zusammenzusetzen.
    std::string teil1 = "Hallo, ";  // Erster Teil des Strings
    std::string teil2 = "Welt!";    // Zweiter Teil des Strings
    std::string vollständigerSatz = teil1 + teil2;  // Verkettung der beiden Strings
    std::cout << vollständigerSatz << std::endl;  // Ausgabe: Hallo, Welt!

    // 3. Bitweise Umverknüpfung - Kombination von Flags
    // WAS: Verschiedene Flags werden mithilfe des bitweisen ODER (|) Operators kombiniert.
    // WIE: Bitweise ODER (|) wird verwendet, um die Bits von zwei oder mehr Flags zu kombinieren.
    // WARUM: Dies ist nützlich, um mehrere Optionen oder Zustände in einem einzelnen Integer-Wert zu speichern.
    const int FLAG_1 = 0b001;  // Binär: 0001
    const int FLAG_2 = 0b010;  // Binär: 0010
    const int FLAG_3 = 0b100;  // Binär: 0100
    int flags = FLAG_1 | FLAG_2;  // Verknüpft FLAG_1 und FLAG_2: 0011 (Binär)
    std::cout << "Kombinierte Flags: " << std::bitset<3>(flags) << std::endl;  // Ausgabe der kombinierten Flags als Binärzahl

    // 4. Bit-Shift-Operatoren - << (Linksverschiebung) und >> (Rechtsverschiebung)
    // WAS: Linksverschiebung (<<) und Rechtsverschiebung (>>) verschieben die Bits einer Zahl um eine bestimmte Anzahl von Positionen.
    // WIE: << verschiebt die Bits nach links, >> verschiebt sie nach rechts.
    // WARUM: Wird verwendet, um eine Zahl effizient zu multiplizieren (<<) oder zu dividieren (>>).
    int zahl = 5;  // Binär: 101

    // Linksverschiebung
    int linksVerschoben = zahl << 1;  // Verschiebt die Bits nach links: Ergebnis 1010 (Dezimal: 10)
    std::cout << "Linksverschiebung von 5: " << linksVerschoben << std::endl;  // Ausgabe: 10

    // Rechtsverschiebung
    int rechtsVerschoben = zahl >> 1;  // Verschiebt die Bits nach rechts: Ergebnis 10 (Dezimal: 2)
    std::cout << "Rechtsverschiebung von 5: " << rechtsVerschoben << std::endl;  // Ausgabe: 2

    return 0;
}
