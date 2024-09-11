#include <iostream> // Was: Inkludiert die Bibliothek f�r die Ein- und Ausgabe.
// Wie: Durch den Befehl #include wird die iostream-Bibliothek eingebunden.
// Warum: Notwendig, um std::cout f�r die Ausgabe auf die Konsole zu nutzen.

int main() {
    // Was: Deklariert eine Konstante f�r die Gr��e des Arrays.
    // Wie: Die Konstante SIZE wird auf den Wert 5 gesetzt und kann nicht ver�ndert werden.
    // Warum: Zur besseren Lesbarkeit und Wartbarkeit wird die Array-Gr��e in einer Konstante definiert.
    const int SIZE = 5;

    // Was: Deklaration eines Arrays von 'const'-Zeigern auf 'int'.
    // Wie: Das Array constArr enth�lt Zeiger auf 'int', wobei die Zeiger selbst und die Werte, auf die sie zeigen, konstant sind.
    // Warum: Das Schl�sselwort 'const' verhindert eine �nderung der Zeiger und der zugewiesenen Werte.
    const int* constArr[SIZE];

    // Was: Dynamische Allokation von Speicher f�r die Elemente des Arrays.
    // Wie: Eine Schleife durchl�uft das Array und weist jedem Element einen dynamisch allozierten 'int'-Wert zu.
    // Warum: Um den Speicher dynamisch zur Laufzeit zu allokieren, und jedem Element einen eindeutigen Wert zuzuweisen.
    for (int i = 0; i < SIZE; i++) {
        // Was: Weist einen dynamisch allokierten 'int'-Wert zu, der mit i * 10 initialisiert wird.
        // Wie: Die Funktion 'new int(i * 10)' allokiert Speicher f�r ein einzelnes 'int' und weist ihm den Wert i * 10 zu.
        // Warum: Die Verwendung von 'new' erm�glicht die dynamische Speicherallokation zur Laufzeit.
        constArr[i] = new int(i * 10);

        // Was: Gibt den Wert des aktuell allokierten Speichers auf der Konsole aus.
        // Wie: std::cout wird verwendet, um den dereferenzierten Zeiger 'constArr[i]' auszugeben, also den Wert, auf den der Zeiger zeigt.
        // Warum: Um den initialisierten Wert f�r jedes Array-Element anzuzeigen.
        std::cout << "Wert von constArr[" << i << "] = " << *constArr[i] << std::endl;
    }

    // Was: Freigabe des dynamisch allokierten Speichers.
    // Wie: Eine Schleife durchl�uft das Array und gibt den Speicher jedes einzelnen Zeigers mit 'delete' frei.
    // Warum: In C++ muss der dynamisch allokierte Speicher manuell freigegeben werden, um Speicherlecks zu vermeiden.
    for (int i = 0; i < SIZE; i++) {
        // Was: Gibt den Speicher des Zeigers 'constArr[i]' frei.
        // Wie: Der Befehl 'delete constArr[i]' gibt den Speicher frei, auf den der Zeiger zeigt.
        // Warum: Verhindert Speicherlecks, indem der dynamisch allokierte Speicher korrekt freigegeben wird.
        delete constArr[i];
    }

    // Was: Beendet das Programm.
    // Wie: R�ckgabe von 0 signalisiert, dass das Programm erfolgreich beendet wurde.
    // Warum: Standard in C++-Programmen, um das erfolgreiche Ende zu kennzeichnen.
    return 0;
}
