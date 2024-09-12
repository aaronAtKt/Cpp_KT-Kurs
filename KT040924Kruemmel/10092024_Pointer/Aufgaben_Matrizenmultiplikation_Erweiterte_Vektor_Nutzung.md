### **Übungsaufgaben zur Vertiefung der nächsten Schritte**

Hier sind zwei Übungsaufgaben, die darauf abzielen, das Verständnis für **dynamische Speicherverwaltung** und die **erweiterte Nutzung von `std::vector`** zu vertiefen. Diese Aufgaben werden den Schülern helfen, die praktische Anwendung der Konzepte zu festigen.

---

## **Aufgabe 1: Matrizenmultiplikation mit dynamischen Matrizen**

### **Aufgabe:**
Schreibe ein Programm, das zwei dynamisch allokierte Matrizen mit Hilfe von **Zeigern und `new`** erstellt. Implementiere eine Funktion, die die beiden Matrizen multipliziert und das Ergebnis zurückgibt.

#### **Anforderungen:**
1. Erstelle zwei dynamische Matrizen mit `new`.
2. Lasse den Benutzer die Werte beider Matrizen eingeben.
3. Implementiere eine Funktion zur **Matrizenmultiplikation**, die zwei Matrizen multipliziert und das Ergebnis als dynamische Matrix zurückgibt.
4. Gib die Ergebnis-Matrix aus.
5. Stelle sicher, dass der dynamisch allokierte Speicher korrekt freigegeben wird.

### **Beispiel:**

```cpp
#include <iostream>

// Funktion zur Erstellung einer dynamischen Matrix
int** createMatrix(int rows, int cols) {
    int** matrix = new int*[rows];  // Allokiere Zeilen
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];  // Allokiere Spalten für jede Zeile
    }
    return matrix;
}

// Funktion zur Eingabe von Werten für eine Matrix
void inputMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Wert für [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

// Funktion zur Matrizenmultiplikation
int** multiplyMatrices(int** matA, int** matB, int rowsA, int colsA, int colsB) {
    int** result = createMatrix(rowsA, colsB);  // Ergebnis-Matrix erstellen

    // Matrizenmultiplikation durchführen
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    return result;
}

// Funktion zur Ausgabe einer Matrix
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Funktion zur Freigabe des dynamisch allokierten Speichers
void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];  // Spalten freigeben
    }
    delete[] matrix;  // Zeilen freigeben
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Eingabe der Dimensionen der Matrizen
    std::cout << "Geben Sie die Anzahl der Zeilen für Matrix A ein: ";
    std::cin >> rowsA;
    std::cout << "Geben Sie die Anzahl der Spalten für Matrix A / Zeilen für Matrix B ein: ";
    std::cin >> colsA;
    std::cout << "Geben Sie die Anzahl der Spalten für Matrix B ein: ";
    std::cin >> colsB;

    // Erstellen der Matrizen A und B
    int** matA = createMatrix(rowsA, colsA);
    int** matB = createMatrix(colsA, colsB);

    // Eingabe der Werte für die Matrizen A und B
    std::cout << "Werte für Matrix A eingeben:\n";
    inputMatrix(matA, rowsA, colsA);
    std::cout << "Werte für Matrix B eingeben:\n";
    inputMatrix(matB, colsA, colsB);

    // Matrizenmultiplikation
    int** result = multiplyMatrices(matA, matB, rowsA, colsA, colsB);

    // Ausgabe der Ergebnis-Matrix
    std::cout << "Ergebnis der Matrizenmultiplikation:\n";
    printMatrix(result, rowsA, colsB);

    // Freigabe des dynamischen Speichers
    deleteMatrix(matA, rowsA);
    deleteMatrix(matB, colsA);
    deleteMatrix(result, rowsA);

    return 0;
}
```

### **Erklärung:**
1. **Was:** Dieses Programm erstellt zwei dynamische Matrizen und multipliziert sie miteinander. Die Matrizen werden vom Benutzer mit Werten gefüllt, und das Ergebnis wird dynamisch erstellt.
2. **Wie:** Dynamische Matrizen werden mit `new` erstellt, und die Matrizenmultiplikation erfolgt durch drei verschachtelte Schleifen.
3. **Warum:** Diese Aufgabe vertieft das Verständnis der dynamischen Speicherverwaltung und zeigt, wie man dynamische Arrays in der Praxis verwendet.

---

## **Aufgabe 2: Erweiterte Nutzung von `std::vector`**

### **Aufgabe:**
Schreibe ein Programm, das die Anzahl der **Zeilen oder Spalten eines `std::vector`** dynamisch anpasst. Der Benutzer soll wählen können, ob eine Zeile oder eine Spalte hinzugefügt oder entfernt wird.

#### **Anforderungen:**
1. Erstelle einen 2D-`std::vector`.
2. Lasse den Benutzer entscheiden, ob eine Zeile oder eine Spalte hinzugefügt oder entfernt werden soll.
3. Führe die Änderungen dynamisch durch und gib die neue Matrix aus.

### **Beispiel:**

```cpp
#include <iostream>
#include <vector>

// Funktion zum Hinzufügen einer Zeile zu einem 2D-Vector
void addRow(std::vector<std::vector<int>>& matrix, int cols) {
    std::vector<int> newRow(cols, 0);  // Neue Zeile mit Standardwerten (0)
    matrix.push_back(newRow);
}

// Funktion zum Hinzufügen einer Spalte zu einem 2D-Vector
void addColumn(std::vector<std::vector<int>>& matrix) {
    for (auto& row : matrix) {
        row.push_back(0);  // Neue Spalte hinzufügen (Standardwert 0)
    }
}

// Funktion zum Entfernen der letzten Zeile
void removeRow(std::vector<std::vector<int>>& matrix) {
    if (!matrix.empty()) {
        matrix.pop_back();  // Letzte Zeile entfernen
    }
}

// Funktion zum Entfernen der letzten Spalte
void removeColumn(std::vector<std::vector<int>>& matrix) {
    for (auto& row : matrix) {
        if (!row.empty()) {
            row.pop_back();  // Letzte Spalte entfernen
        }
    }
}

// Funktion zur Ausgabe einer 2D-Matrix (std::vector)
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;
    std::cout << "Geben Sie die Anzahl der Zeilen ein: ";
    std::cin >> rows;
    std::cout << "Geben Sie die Anzahl der Spalten ein: ";
    std::cin >> cols;

    // Erstellen eines 2D-Vector
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 0));

    char choice;
    do {
        // Ausgabe der aktuellen Matrix
        std::cout << "Aktuelle Matrix:\n";
        printMatrix(matrix);

        // Benutzeroptionen
        std::cout << "Wählen Sie: \n";
        std::cout << "1. Zeile hinzufügen\n";
        std::cout << "2. Spalte hinzufügen\n";
        std::cout << "3. Zeile entfernen\n";
        std::cout << "4. Spalte entfernen\n";
        std::cout << "5. Beenden\n";
        std::cin >> choice;

        switch (choice) {
            case '1':
                addRow(matrix, cols);
                break;
            case '2':
                addColumn(matrix);
                ++cols;  // Spaltenanzahl anpassen
                break;
            case '3':
                removeRow(matrix);
                break;
            case '4':
                removeColumn(matrix);
                --cols;  // Spaltenanzahl anpassen
                break;
            case '5':
                std::cout << "Programm wird beendet.\n";
                break;
            default:
                std::cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut.\n";
        }

    } while (choice != '5');

    return 0;
}
```

### **Erklärung:**
1. **Was:** Dieses Programm verwendet `std::vector`, um eine dynamische Matrix zu erstellen, bei der der Benutzer Zeilen und Spalten hinzufügen oder entfernen kann.
2

. **Wie:** Mit den Funktionen `push_back` und `pop_back` können Zeilen und Spalten dynamisch hinzugefügt und entfernt werden.
3. **Warum:** Diese Aufgabe hilft dabei, die Flexibilität von `std::vector` zu verstehen und wie man mit dynamischen 2D-Arrays arbeitet.

---

### **Zusammenfassung:**
1. **Matrizenmultiplikation:** Die erste Aufgabe vertieft das Verständnis für dynamische Arrays und zeigt, wie Matrizenmultiplikation in C++ implementiert wird.
2. **Erweiterte `std::vector`-Nutzung:** Die zweite Aufgabe bietet eine praktische Anwendung von `std::vector`, indem der Benutzer interaktiv Zeilen und Spalten hinzufügt oder entfernt.