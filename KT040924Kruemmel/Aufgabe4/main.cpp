#include <iostream>  // Für die Konsolenausgabe
#include <string>    // Für die Verwendung von std::string

int main() {
    // 1. Integer-Literal (Dezimal)
    int dezimalZahl = 42;  // Was: Deklaration und Initialisierung eines Integer-Literals in Dezimalform.
    // Warum: Integer-Literale repräsentieren feste Ganzzahlen im Code.

    // 2. Integer-Literal (Hexadezimal)
    int hexZahl = 0x2A;  // Was: Deklaration und Initialisierung eines Integer-Literals in Hexadezimalform.
    // Warum: Hexadezimale Literale beginnen mit 0x und stellen Werte im Hexadezimalsystem dar.

    // 3. Gleitkomma-Literal
    double gleitkommazahl = 3.14159;  // Was: Deklaration eines Gleitkommawerts als Literal.
    // Warum: Gleitkommazahlen repräsentieren Fließkommazahlen mit Dezimalstellen.

    // 4. Zeichen-Literal
    char zeichen = 'A';  // Was: Deklaration eines Zeichen-Literals.
    // Warum: Ein Zeichen wird durch einfache Anführungszeichen dargestellt.

    // 5. Zeichenketten-Literal
    std::string text = "Hallo Welt";  // Was: Deklaration eines String-Literals.
    // Warum: Zeichenketten werden durch doppelte Anführungszeichen dargestellt.

    // Ausgabe der Literale
    std::cout << "Dezimalzahl: " << dezimalZahl << std::endl;  // Ausgabe der Dezimalzahl.

    std::cout << "Hexadezimalzahl: " << hexZahl << std::endl;  // Ausgabe der Hexadezimalzahl.

    std::cout << "Gleitkommazahl: " << gleitkommazahl << std::endl;  // Ausgabe der Gleitkommazahl.

    std::cout << "Zeichen: " << zeichen << std::endl;  // Ausgabe des Zeichens.

    std::cout << "Text: " << text << std::endl;  // Ausgabe der Zeichenkette.

    return 0;  // Programm erfolgreich beendet
}
