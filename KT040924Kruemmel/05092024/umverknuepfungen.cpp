#include <iostream>
#include <string>
#include <bitset>  // F�r die Ausgabe der Bits

int main() {
    // 1. Bitweise Verkn�pfung - & (Bitweises UND)
    // WAS: Bitweises UND vergleicht die Bits zweier Zahlen und gibt nur die Bits zur�ck, die in beiden Zahlen gesetzt sind.
    // WIE: Der Operator & wird zwischen zwei Zahlen verwendet.
    // WARUM: Wird verwendet, um die gemeinsamen Bits zweier Zahlen zu extrahieren.
    int a = 6;  // Bin�r: 110
    int b = 3;  // Bin�r: 011
    int ergebnis_und = a & b;  // Ergebnis: 010 (Dezimal: 2)
    std::cout << "Das Ergebnis von " << a << " & " << b << " ist: " << ergebnis_und << std::endl;  // Ausgabe: 2

    // 2. Verkettung von Strings
    // WAS: Zwei Strings werden mithilfe des + Operators zu einem vollst�ndigen Satz verkettet.
    // WIE: Der Operator + wird verwendet, um zwei String-Objekte zu verbinden.
    // WARUM: N�tzlich, um mehrere Teile eines Satzes oder Textes zu einem vollst�ndigen String zusammenzusetzen.
    std::string teil1 = "Hallo, ";  // Erster Teil des Strings
    std::string teil2 = "Welt!";    // Zweiter Teil des Strings
    std::string vollst�ndigerSatz = teil1 + teil2;  // Verkettung der beiden Strings
    std::cout << vollst�ndigerSatz << std::endl;  // Ausgabe: Hallo, Welt!

    // 3. Bitweise Umverkn�pfung - Kombination von Flags
    // WAS: Verschiedene Flags werden mithilfe des bitweisen ODER (|) Operators kombiniert.
    // WIE: Bitweise ODER (|) wird verwendet, um die Bits von zwei oder mehr Flags zu kombinieren.
    // WARUM: Dies ist n�tzlich, um mehrere Optionen oder Zust�nde in einem einzelnen Integer-Wert zu speichern.
    const int FLAG_1 = 0b001;  // Bin�r: 0001
    const int FLAG_2 = 0b010;  // Bin�r: 0010
    const int FLAG_3 = 0b100;  // Bin�r: 0100
    int flags = FLAG_1 | FLAG_2;  // Verkn�pft FLAG_1 und FLAG_2: 0011 (Bin�r)
    std::cout << "Kombinierte Flags: " << std::bitset<3>(flags) << std::endl;  // Ausgabe der kombinierten Flags als Bin�rzahl

    // 4. Bit-Shift-Operatoren - << (Linksverschiebung) und >> (Rechtsverschiebung)
    // WAS: Linksverschiebung (<<) und Rechtsverschiebung (>>) verschieben die Bits einer Zahl um eine bestimmte Anzahl von Positionen.
    // WIE: << verschiebt die Bits nach links, >> verschiebt sie nach rechts.
    // WARUM: Wird verwendet, um eine Zahl effizient zu multiplizieren (<<) oder zu dividieren (>>).
    int zahl = 5;  // Bin�r: 101

    // Linksverschiebung
    int linksVerschoben = zahl << 1;  // Verschiebt die Bits nach links: Ergebnis 1010 (Dezimal: 10)
    std::cout << "Linksverschiebung von 5: " << linksVerschoben << std::endl;  // Ausgabe: 10

    // Rechtsverschiebung
    int rechtsVerschoben = zahl >> 1;  // Verschiebt die Bits nach rechts: Ergebnis 10 (Dezimal: 2)
    std::cout << "Rechtsverschiebung von 5: " << rechtsVerschoben << std::endl;  // Ausgabe: 2

    return 0;
}
