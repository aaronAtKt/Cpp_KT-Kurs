### **Aufgaben.cpp**

```cpp
// Aufgaben.cpp - Vertiefungsaufgaben

#include <iostream>
#include <vector>

int main() {
    // Aufgabe 1: Statisches 2D-Array initialisieren und ausgeben
    std::cout << "Aufgabe 1: Statisches 2D-Array\n";
    int staticArray[2][3] = {{1, 2, 3}, {4, 5, 6}};

    std::cout << "Inhalte des statischen Arrays:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << staticArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Aufgabe 2: Dynamisches 2D-Array erstellen und Werte eingeben
    std::cout << "\nAufgabe 2: Dynamisches 2D-Array\n";
    int rows, cols;
    std::cout << "Geben Sie die Anzahl der Zeilen ein: ";
    std::cin >> rows;
    std::cout << "Geben Sie die Anzahl der Spalten ein: ";
    std::cin >> cols;

    // Dynamisches 2D-Array allokieren
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Eingabe der Werte für das dynamische 2D-Array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Wert für Zeile " << i + 1 << ", Spalte " << j + 1 << ": ";
            std::

cin >> matrix[i][j];
        }
    }

    // Ausgabe der Matrix
    std::cout << "Inhalte des dynamischen 2D-Arrays:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Speicherfreigabe
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    // Aufgabe 3: Verwendung von std::vector für ein 2D-Array
    std::cout << "\nAufgabe 3: std::vector für ein 2D-Array\n";
    std::cout << "Geben Sie die Anzahl der Zeilen ein: ";
    std::cin >> rows;
    std::cout << "Geben Sie die Anzahl der Spalten ein: ";
    std::cin >> cols;

    // Verwendung von std::vector
    std::vector<std::vector<int>> vecMatrix(rows, std::vector<int>(cols));

    // Eingabe der Werte für das 2D-Array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Wert für Zeile " << i + 1 << ", Spalte " << j + 1 << ": ";
            std::cin >> vecMatrix[i][j];
        }
    }

    // Ausgabe der Matrix
    std::cout << "Inhalte des std::vector 2D-Arrays:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << vecMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

### **Erklärung der Aufgaben:**

1. **Aufgabe 1 - Statisches 2D-Array:**
   - Deklariere ein statisches 2D-Array mit festen Werten und gib die Inhalte in Tabellenform aus.

2. **Aufgabe 2 - Dynamisches 2D-Array:**
   - Verwende Zeiger, um ein 2D-Array dynamisch zu erstellen. Erlaube dem Benutzer, die Größe und die Werte des Arrays zur Laufzeit festzulegen. Gib das dynamische 2D-Array aus und stelle sicher, dass der Speicher freigegeben wird.

3. **Aufgabe 3 - `std::vector` für ein 2D-Array:**
   - Verwende den `std::vector`-Container, um ein dynamisches 2D-Array zu erstellen. Erlaube dem Benutzer, die Größe und die Werte des Arrays einzugeben und gib die Inhalte des `std::vector` 2D-Arrays aus.

---

### **Nächste Schritte:**

1. **Mehrdimensionale Arrays vertiefen**: Setze mehrdimensionale Arrays in praxisnahen Beispielen ein (z.B. Matrizenberechnungen).
2. **Erweiterte Nutzung von `std::vector`**: Verwende komplexere `std::vector`-Operationen wie Einfügen und Löschen von Zeilen und Spalten.