#include <iostream>  // Was: Inkludiert die Bibliothek f�r Ein- und Ausgabe.
// Wie: Durch den Befehl #include wird die iostream-Bibliothek eingebunden.
// Warum: Notwendig, um std::cout f�r die Ausgabe auf die Konsole zu nutzen.

#include <iomanip>   // Was: Inkludiert die Bibliothek f�r Formatierung von Ausgaben.
// Wie: Diese Bibliothek enth�lt Funktionen wie std::setw, die die Breite der Ausgabe bestimmen.
// Warum: Wird verwendet, um die Tabelle ordentlich und gleichm��ig formatiert auszugeben.

#include <cstdlib>   // Was: Inkludiert die Bibliothek f�r Zufallszahlen.
// Wie: Diese Bibliothek stellt Funktionen wie std::rand und std::srand bereit.
// Warum: Notwendig, um zuf�llige Zahlen f�r die Tabelle zu generieren.

#include <ctime>     // Was: Inkludiert die Bibliothek f�r Zeitfunktionen.
// Wie: Enth�lt std::time, die verwendet wird, um den Zufallszahlengenerator mit der aktuellen Zeit zu initialisieren.
// Warum: Um sicherzustellen, dass die Zufallszahlen bei jedem Programmlauf unterschiedlich sind.

int main() {
    // Was: Deklaration von Konstanten f�r die Anzahl der Zeilen und Spalten.
    // Wie: ROWS und COLS werden als konstante Integer-Werte gesetzt, die die Gr��e der Tabelle bestimmen.
    // Warum: Verhindert, dass diese Werte im Programm ge�ndert werden, und macht den Code flexibler und leichter wartbar.
    const int ROWS = 10;
    const int COLS = 10;

    // Was: Deklariert ein zweidimensionales Array zur Speicherung der Zufallszahlen.
    // Wie: Das Array 'table' hat ROWS Zeilen und COLS Spalten, wobei jeder Eintrag ein Integer ist.
    // Warum: Um eine 10x10-Tabelle zu speichern, in der jede Zelle eine Zufallszahl enth�lt.
    int table[ROWS][COLS];

    // Was: Initialisiert den Zufallszahlengenerator.
    // Wie: std::srand(std::time(0)) verwendet die aktuelle Zeit als Startwert (Seed) f�r den Zufallszahlengenerator.
    // Warum: Um bei jedem Programmlauf verschiedene Zufallszahlen zu erhalten.
    std::srand(std::time(0));

    // Was: F�llt das 10x10-Array mit Zufallszahlen zwischen 0 und 9.
    // Wie: Zwei verschachtelte Schleifen iterieren durch jede Zeile und Spalte, und std::rand() % 10 liefert Zufallszahlen zwischen 0 und 9.
    // Warum: Um das Array mit Zufallswerten zu f�llen, die sp�ter in der Tabelle angezeigt werden.
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            table[i][j] = std::rand() % 10; // Zufallszahlen zwischen 0 und 9
        }
    }

    // Was: Ausgabe der Tabelle und Berechnung der Zeilen- und Spaltensummen.
    // Wie: Die Tabelle wird zeilenweise mit std::setw(2) ausgegeben, um die Werte gleichm��ig anzuzeigen. Die Summen werden parallel berechnet.
    // Warum: Die Summen geben dem Benutzer zus�tzliche Informationen �ber die Inhalte jeder Zeile und Spalte.
    std::cout << "Tabelle:\n";

    // Was: Arrays zur Speicherung der Zeilen- und Spaltensummen.
    // Wie: zeilenSumme speichert die Summe jeder Zeile, spaltenSumme die Summe jeder Spalte.
    // Warum: Um am Ende die Summen anzuzeigen, wird jede Zeile und jede Spalte separat summiert.
    int zeilenSumme[ROWS] = { 0 };
    int spaltenSumme[COLS] = { 0 };

    // Was: Verschachtelte Schleifen zur Ausgabe der Tabelle und Berechnung der Summen.
    // Wie: Die �u�ere Schleife iteriert �ber die Zeilen, die innere �ber die Spalten. Jeder Wert wird ausgegeben und gleichzeitig die Zeilen- und Spaltensummen berechnet.
    // Warum: Um die Tabelle korrekt zu formatieren und die Summen w�hrend der Ausgabe zu berechnen.
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << std::setw(2) << table[i][j] << " "; // Ausgabe der aktuellen Tabellenzelle
            zeilenSumme[i] += table[i][j];  // Berechnet die Summe der aktuellen Zeile
            spaltenSumme[j] += table[i][j]; // Berechnet die Summe der aktuellen Spalte
        }
        // Was: Ausgabe der Zeilensumme am Ende jeder Zeile.
        // Wie: std::cout gibt die Summe der aktuellen Zeile nach der Ausgabe der Zeilenwerte aus.
        // Warum: Um die Zeilensumme unmittelbar nach den Zeilenwerten anzuzeigen.
        std::cout << "| Summe der Zeile: " << zeilenSumme[i] << std::endl;
    }

    // Was: Ausgabe einer Trennlinie zwischen der Tabelle und den Spaltensummen.
    // Wie: std::string(COLS * 3, '-') erzeugt eine Linie aus '-' mit der L�nge basierend auf der Anzahl der Spalten.
    // Warum: Die Trennlinie dient zur optischen Abgrenzung zwischen der Tabelle und den Spaltensummen.
    std::cout << std::string(COLS * 3, '-') << std::endl;

    // Was: Ausgabe der Spaltensummen.
    // Wie: Eine Schleife iteriert durch die Spaltensummen und gibt jeden Wert mit std::setw(2) formatiert aus.
    // Warum: Um die Summe jeder Spalte nach der Tabelle anzuzeigen.
    for (int j = 0; j < COLS; j++) {
        std::cout << std::setw(2) << spaltenSumme[j] << " ";
    }

    // Was: Ausgabe des Textes nach den Spaltensummen.
    // Wie: std::cout gibt "| Summe der Spalten" aus, um zu kennzeichnen, dass die Werte die Summen der Spalten darstellen.
    // Warum: Zur klaren Kennzeichnung der Spaltensummen.
    std::cout << "| Summe der Spalten" << std::endl;

    // Was: Beendet das Programm.
    // Wie: R�ckgabe von 0 signalisiert, dass das Programm erfolgreich beendet wurde.
    // Warum: Standard in C++-Programmen, um das erfolgreiche Ende zu kennzeichnen.
    return 0;
}
