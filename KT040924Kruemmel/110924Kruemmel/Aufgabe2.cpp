#include <iostream> // Was: Inkludiert die Bibliothek f�r die Ein- und Ausgabe.
// Wie: Durch den Befehl #include wird die iostream-Bibliothek eingebunden.
// Warum: Notwendig f�r die Nutzung von std::cout zur Ausgabe auf der Konsole.

// Definition der Funktion constBeispiel
void constBeispiel() {
    // Was: Deklaration einer konstanten Ganzzahl-Variable a mit dem Wert 10
    // Wie: Die Variable a wird mit dem Schl�sselwort 'const' als konstant markiert, das hei�t, ihr Wert kann nicht ver�ndert werden.
    // Warum: Verwendung von 'const', um sicherzustellen, dass der Wert von a unver�nderlich bleibt, z. B. f�r Konfigurationen oder feste Werte.
    const int a = 10;

    // Was: Kommentar, der erkl�rt, dass eine �nderung des Wertes von a einen Fehler erzeugen w�rde
    // Wie: Wenn die auskommentierte Zeile aktiviert wird, f�hrt dies zu einem Kompilierfehler, weil 'a' eine Konstante ist.
    // Warum: Um zu verdeutlichen, dass der Wert einer konstanten Variable nicht ge�ndert werden kann.
    // a = 20; // Fehler: 'a' ist const

    // Was: Ausgabe des konstanten Wertes a auf der Konsole
    // Wie: 'std::cout' gibt den Wert der konstanten Variable a aus.
    // Warum: Um dem Benutzer den Wert der konstanten Variable anzuzeigen.
    std::cout << "Der Wert von const a ist: " << a << std::endl;
}

// Definition der Funktion constexprBeispiel
void constexprBeispiel() {
    // Was: Deklaration einer constexpr-Variable b, die zur Kompilierzeit berechnet wird
    // Wie: Die Variable 'b' wird mit dem Schl�sselwort 'constexpr' definiert, was bedeutet, dass ihr Wert zur Kompilierzeit bestimmt wird.
    // Warum: 'constexpr' wird verwendet, um Berechnungen zur Kompilierzeit durchzuf�hren, was zur Optimierung und Effizienzsteigerung beitr�gt.
    constexpr int b = 10 * 2;

    // Was: Ausgabe des constexpr-Wertes b auf der Konsole
    // Wie: 'std::cout' gibt den Wert der constexpr-Variable b aus.
    // Warum: Um den kompilierten Wert von 'b', der zur Kompilierzeit berechnet wurde, anzuzeigen.
    std::cout << "Der Wert von constexpr b ist: " << b << std::endl;
}

// Haupteinstiegspunkt des Programms
int main() {
    // Was: Aufruf der Funktion constBeispiel
    // Wie: constBeispiel() wird aufgerufen, um die Funktion auszuf�hren.
    // Warum: Um die Funktion mit der konstanten Variablen a zu demonstrieren.
    constBeispiel();

    // Was: Aufruf der Funktion constexprBeispiel
    // Wie: constexprBeispiel() wird aufgerufen, um die Funktion auszuf�hren.
    // Warum: Um die Funktion mit der constexpr-Variablen b zu demonstrieren.
    constexprBeispiel();

    // Was: Beendet das Programm
    // Wie: R�ckgabe von 0 signalisiert, dass das Programm erfolgreich beendet wurde.
    // Warum: Standard in C++-Programmen, um das erfolgreiche Ende zu kennzeichnen.
    return 0;
}
