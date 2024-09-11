#include <iostream> // Was: Inkludiert die Bibliothek für die Ein- und Ausgabe.
// Wie: Durch den Befehl #include wird die iostream-Bibliothek eingebunden.
// Warum: Notwendig für die Nutzung von std::cout zur Ausgabe auf der Konsole.

// Definition der Funktion constBeispiel
void constBeispiel() {
    // Was: Deklaration einer konstanten Ganzzahl-Variable a mit dem Wert 10
    // Wie: Die Variable a wird mit dem Schlüsselwort 'const' als konstant markiert, das heißt, ihr Wert kann nicht verändert werden.
    // Warum: Verwendung von 'const', um sicherzustellen, dass der Wert von a unveränderlich bleibt, z. B. für Konfigurationen oder feste Werte.
    const int a = 10;

    // Was: Kommentar, der erklärt, dass eine Änderung des Wertes von a einen Fehler erzeugen würde
    // Wie: Wenn die auskommentierte Zeile aktiviert wird, führt dies zu einem Kompilierfehler, weil 'a' eine Konstante ist.
    // Warum: Um zu verdeutlichen, dass der Wert einer konstanten Variable nicht geändert werden kann.
    // a = 20; // Fehler: 'a' ist const

    // Was: Ausgabe des konstanten Wertes a auf der Konsole
    // Wie: 'std::cout' gibt den Wert der konstanten Variable a aus.
    // Warum: Um dem Benutzer den Wert der konstanten Variable anzuzeigen.
    std::cout << "Der Wert von const a ist: " << a << std::endl;
}

// Definition der Funktion constexprBeispiel
void constexprBeispiel() {
    // Was: Deklaration einer constexpr-Variable b, die zur Kompilierzeit berechnet wird
    // Wie: Die Variable 'b' wird mit dem Schlüsselwort 'constexpr' definiert, was bedeutet, dass ihr Wert zur Kompilierzeit bestimmt wird.
    // Warum: 'constexpr' wird verwendet, um Berechnungen zur Kompilierzeit durchzuführen, was zur Optimierung und Effizienzsteigerung beiträgt.
    constexpr int b = 10 * 2;

    // Was: Ausgabe des constexpr-Wertes b auf der Konsole
    // Wie: 'std::cout' gibt den Wert der constexpr-Variable b aus.
    // Warum: Um den kompilierten Wert von 'b', der zur Kompilierzeit berechnet wurde, anzuzeigen.
    std::cout << "Der Wert von constexpr b ist: " << b << std::endl;
}

// Haupteinstiegspunkt des Programms
int main() {
    // Was: Aufruf der Funktion constBeispiel
    // Wie: constBeispiel() wird aufgerufen, um die Funktion auszuführen.
    // Warum: Um die Funktion mit der konstanten Variablen a zu demonstrieren.
    constBeispiel();

    // Was: Aufruf der Funktion constexprBeispiel
    // Wie: constexprBeispiel() wird aufgerufen, um die Funktion auszuführen.
    // Warum: Um die Funktion mit der constexpr-Variablen b zu demonstrieren.
    constexprBeispiel();

    // Was: Beendet das Programm
    // Wie: Rückgabe von 0 signalisiert, dass das Programm erfolgreich beendet wurde.
    // Warum: Standard in C++-Programmen, um das erfolgreiche Ende zu kennzeichnen.
    return 0;
}
