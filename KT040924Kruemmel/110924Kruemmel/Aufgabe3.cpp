#include <iostream> // Was: Inkludiert die Bibliothek für Ein- und Ausgabe.
// Wie: Durch den Befehl #include wird die iostream-Bibliothek eingebunden.
// Warum: Notwendig, um std::cout für die Ausgabe auf die Konsole zu nutzen.

#include <cstring> // Was: Inkludiert die Bibliothek für String-Manipulationen.
// Wie: Diese Bibliothek enthält Funktionen wie strlen, die die Länge eines C-Strings berechnen.
// Warum: Notwendig, um die Länge eines Strings in der Funktion stringUmkehren zu bestimmen.

// Funktion, die einen String umkehrt
void stringUmkehren(char* str) {
    // Was: Berechnet einen Zeiger auf das letzte Zeichen des Strings
    // Wie: Verwendet die Funktion std::strlen, um die Länge des Strings zu bestimmen, und setzt den Zeiger "ende" auf das letzte Zeichen.
    // Warum: Der Zeiger "ende" wird benötigt, um den String von beiden Enden her zu durchlaufen und die Zeichen zu tauschen.
    char* ende = str + std::strlen(str) - 1;

    // Was: Schleife, die die Zeichen von beiden Enden her tauscht, bis die Mitte erreicht ist
    // Wie: Die Schleife läuft so lange, bis der Zeiger "str" das Ende (oder die Mitte) erreicht. Es werden die Zeichen an den Positionen str und ende getauscht.
    // Warum: Um den String umzudrehen, werden die Zeichen an den Enden nach innen hin getauscht.
    while (str < ende) {
        // Was: Tauscht die Zeichen an den Zeigern str und ende
        // Wie: Die Funktion std::swap tauscht den Inhalt der Adressen, auf die str und ende zeigen.
        // Warum: Um die Zeichen des Strings zu vertauschen, wird std::swap verwendet, das eine einfache Methode für den Tausch ist.
        std::swap(*str, *ende);

        // Was: Bewegt den Zeiger str nach vorne
        // Wie: Der Zeiger str wird um eins erhöht, um das nächste Zeichen zu bearbeiten.
        // Warum: Der Zeiger muss zum nächsten Zeichen fortschreiten, damit die gesamte Zeichenkette durchlaufen wird.
        str++;

        // Was: Bewegt den Zeiger ende nach hinten
        // Wie: Der Zeiger ende wird um eins verringert, um das Zeichen vor dem aktuellen zu bearbeiten.
        // Warum: Der Zeiger muss nach innen fortschreiten, um das Umkehren des Strings korrekt durchzuführen.
        ende--;
    }
}

// Haupteinstiegspunkt des Programms
int main() {
    // Was: Deklaration eines C-Strings
    // Wie: Ein Array von char wird initialisiert, das die Zeichenkette "Hallo Welt!" enthält.
    // Warum: Ein Beispielstring, der umgekehrt werden soll.
    char str[] = "Hallo Welt!";

    // Was: Ausgabe des ursprünglichen Strings
    // Wie: Der String wird mit std::cout auf die Konsole ausgegeben.
    // Warum: Um den ursprünglichen Zustand des Strings vor der Umkehrung zu zeigen.
    std::cout << "Originaler String: " << str << std::endl;

    // Was: Aufruf der Funktion, um den String umzukehren
    // Wie: Der String str wird an die Funktion stringUmkehren übergeben, die ihn umdreht.
    // Warum: Um den String in umgekehrter Reihenfolge anzuzeigen.
    stringUmkehren(str);

    // Was: Ausgabe des umgekehrten Strings
    // Wie: Der umgekehrte String wird mit std::cout ausgegeben.
    // Warum: Um den veränderten String nach der Umkehrung anzuzeigen.
    std::cout << "Umgekehrter String: " << str << std::endl;

    // Was: Beendet das Programm
    // Wie: Rückgabe von 0 signalisiert, dass das Programm erfolgreich beendet wurde.
    // Warum: Standard in C++-Programmen, um das erfolgreiche Ende zu kennzeichnen.
    return 0;
}
