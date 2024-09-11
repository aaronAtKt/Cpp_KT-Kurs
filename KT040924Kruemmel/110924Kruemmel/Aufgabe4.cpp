#include <iostream>  // Was: Inkludiert die Bibliothek f�r Ein- und Ausgabe.
// Wie: Durch den Befehl #include wird die iostream-Bibliothek eingebunden.
// Warum: Notwendig, um std::cout f�r die Ausgabe auf die Konsole zu nutzen.

#define SIZE 3        // Was: Definiert eine Konstante f�r die Gr��e der Matrix.
// Wie: Mit dem Pr�prozessor-Direktiv `#define` wird SIZE als 3 festgelegt.
// Warum: Um die Matrixgr��e im Code klar und flexibel zu definieren. Dadurch kann die Gr��e einfach ge�ndert werden.


// Funktion zum Transponieren der Matrix unter Verwendung von Zeigerarithmetik
void transponiereMatrix(int(*matrix)[SIZE]) {
    // Was: Durchl�uft die Matrix in zwei Schleifen, um die Transponierung durchzuf�hren.
    // Wie: Die �u�ere Schleife iteriert �ber die Zeilen, die innere �ber die Spalten, wobei nur die Elemente oberhalb der Diagonale vertauscht werden.
    // Warum: Zeilen- und Spaltenwerte werden entlang der Diagonale vertauscht, um die Matrix zu transponieren.
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            // Was: Tempor�res Speichern des aktuellen Matrixwerts zur Transponierung.
            // Wie: Zugriff auf das Matrixelement mit Zeigerarithmetik. `*(*(matrix + i) + j)` gibt das Element in Zeile `i` und Spalte `j` zur�ck.
            // Warum: Um die Werte der Elemente an den Positionen (i, j) und (j, i) zu vertauschen.
            int temp = *(*(matrix + i) + j);
            *(*(matrix + i) + j) = *(*(matrix + j) + i);
            *(*(matrix + j) + i) = temp;
        }
    }
}

// Funktion zur Ausgabe der Matrix
void matrixAusgeben(int(*matrix)[SIZE]) {
    // Was: Durchl�uft die Matrix und gibt jedes Element auf der Konsole aus.
    // Wie: Zwei verschachtelte Schleifen iterieren �ber jede Zeile und Spalte. Die Zeigerarithmetik wird verwendet, um auf die Matrixelemente zuzugreifen.
    // Warum: Um den aktuellen Zustand der Matrix nach der Transponierung zu visualisieren.
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Was: Ausgabe des Matrixelements auf der Konsole.
            // Wie: `*(*(matrix + i) + j)` greift auf das Element der Matrix zu, und std::cout gibt es aus.
            // Warum: Zeigerarithmetik erm�glicht direkten Zugriff auf die Matrixelemente, um sie auf der Konsole darzustellen.
            std::cout << *(*(matrix + i) + j) << " ";
        }
        // Was: Zeilenumbruch nach jeder Zeile.
        // Wie: `std::cout << std::endl` sorgt f�r einen Zeilenumbruch nach der Ausgabe jeder Matrixzeile.
        // Warum: Damit die Matrix sauber und zeilenweise formatiert auf der Konsole angezeigt wird.
        std::cout << std::endl;
    }
}

int main() {
    // Was: Initialisiert eine 3x3-Matrix mit festen Werten.
    // Wie: Deklariert ein zweidimensionales Array und initialisiert es mit den Werten 1 bis 9.
    // Warum: Um eine Matrix zu erstellen, die transponiert und ausgegeben werden soll.
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Was: Ausgabe der urspr�nglichen Matrix.
    // Wie: Ruft die Funktion `matrixAusgeben` auf, um die urspr�ngliche Matrix anzuzeigen.
    // Warum: Zeigt den urspr�nglichen Zustand der Matrix vor der Transponierung.
    std::cout << "Original Matrix:\n";
    matrixAusgeben(matrix);

    // Was: Transponiert die Matrix.
    // Wie: Ruft die Funktion `transponiereMatrix` auf, die die Zeilen und Spalten der Matrix vertauscht.
    // Warum: Die Funktion transponiert die Matrix, indem sie die Werte entlang der Diagonale vertauscht.
    transponiereMatrix(matrix);

    // Was: Ausgabe der transponierten Matrix.
    // Wie: Ruft die Funktion `matrixAusgeben` erneut auf, um die transponierte Matrix anzuzeigen.
    // Warum: Zeigt den neuen Zustand der Matrix nach der Transponierung.
    std::cout << "\nTransponierte Matrix:\n";
    matrixAusgeben(matrix);

    // Was: Beendet das Programm.
    // Wie: R�ckgabe von 0 signalisiert, dass das Programm erfolgreich beendet wurde.
    // Warum: Standard in C++-Programmen, um das erfolgreiche Ende zu kennzeichnen.
    return 0;
}
