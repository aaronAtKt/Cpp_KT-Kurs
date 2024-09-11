#include <iostream> // Was: Diese Zeile inkludiert die Bibliothek für die Ein- und Ausgabe.
// Wie: Durch den Befehl #include wird die iostream-Bibliothek eingebunden.
// Warum: Notwendig für die Nutzung von std::cout und std::endl zur Ausgabe auf die Konsole.


// Funktion, die den größten Wert im Array findet
int* findeGroesstenWert(int* arr, int groesse) {
    // Was: Zeiger auf das erste Element des Arrays als größter Wert
    // Wie: Initialisierung des Zeigers "groesster" auf das erste Element des Arrays "arr".
    // Warum: Ausgangspunkt der Suche ist das erste Element im Array.
    int* groesster = arr;

    // Was: Schleife durchläuft das Array ab dem zweiten Element
    // Wie: Startet bei i = 1 und geht bis zum letzten Index (groesse - 1).
    // Warum: Um alle Elemente mit dem aktuellen größten zu vergleichen.
    for (int i = 1; i < groesse; i++) {
        // Was: Vergleicht aktuelles Element mit dem bisher größten Wert
        // Wie: Überprüft, ob das aktuelle Element größer als das bisherige Maximum ist.
        // Warum: Um den größten Wert zu finden, muss jedes Element mit dem bisherigen Maximum verglichen werden.
        if (arr[i] > *groesster) {
            // Was: Aktualisiert den Zeiger auf das aktuelle Element, wenn es größer ist
            // Wie: Der Zeiger "groesster" wird auf die Adresse des aktuellen Elements gesetzt.
            // Warum: Wenn ein größeres Element gefunden wird, muss dessen Adresse gespeichert werden.
            groesster = &arr[i];
        }
    }
    // Was: Gibt den Zeiger auf das größte Element zurück
    // Wie: Rückgabe des Zeigers auf das größte Element im Array.
    // Warum: Damit die Hauptfunktion auf den größten Wert zugreifen kann.
    return groesster;
}

int main() {
    // Was: Initialisierung eines Arrays mit Werten
    // Wie: Ein Array von 5 Integer-Werten wird definiert.
    // Warum: Um eine Datenmenge zu haben, auf der die Suche nach dem größten Wert durchgeführt werden kann.
    int arr[] = { 10, 25, 35, 12, 15 };

    // Was: Berechnung der Anzahl der Elemente im Array
    // Wie: Die Größe des Arrays wird durch die Gesamtgröße des Arrays geteilt durch die Größe eines Elements ermittelt.
    // Warum: Um die Anzahl der Elemente im Array dynamisch zu berechnen, unabhängig von der Größe des Arrays.
    int groesse = sizeof(arr) / sizeof(arr[0]);

    // Was: Aufruf der Funktion zur Suche des größten Wertes und Speichern des Ergebnisses
    // Wie: Der Zeiger auf das größte Element wird durch den Funktionsaufruf "findeGroesstenWert" ermittelt und gespeichert.
    // Warum: Um den größten Wert im Array zu finden und weiterzuverwenden.
    int* groessterWert = findeGroesstenWert(arr, groesse);

    // Was: Ausgabe des größten Wertes
    // Wie: Der dereferenzierte Zeiger gibt den Wert an der Adresse aus, auf die er zeigt.
    // Warum: Um dem Benutzer den größten Wert im Array anzuzeigen.
    std::cout << "Der groesste Wert ist: " << *groessterWert << std::endl;

    // Was: Ausgabe der Adresse des größten Wertes
    // Wie: Der Zeiger "groessterWert" zeigt auf die Adresse des größten Wertes, die hier ausgegeben wird.
    // Warum: Die Adresse kann nützlich sein, um zu zeigen, wo sich der größte Wert im Speicher befindet.
    std::cout << "Die Adresse des groessten Wertes ist: " << groessterWert << std::endl;

    // Was: Beendet das Programm
    // Wie: Rückgabe von 0 signalisiert, dass das Programm erfolgreich beendet wurde.
    // Warum: Standard in C++-Programmen, um das erfolgreiche Ende zu kennzeichnen.
    return 0;
}
