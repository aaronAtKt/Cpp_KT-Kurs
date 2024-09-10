### **Nächste Schritte:**

Um die Grundlagen von mehrdimensionalen Arrays und der dynamischen Speicherverwaltung weiter zu vertiefen, sollten folgende Schritte unternommen werden:

---

## **1. Mehrdimensionale Arrays vertiefen**

### **Praxisnahes Beispiel: Matrizenmultiplikation**

Eine der häufigsten Anwendungen von mehrdimensionalen Arrays ist die Berechnung mit Matrizen. Hier ein Beispiel für die Multiplikation zweier Matrizen.

### **Beispiel: Matrizenmultiplikation**

```cpp
#include <iostream>

int main() {
    // Definition der Größen der Matrizen
    const int rowsA = 2, colsA = 3;
    const int rowsB = 3, colsB = 2;

    // Statische 2D-Arrays für die Matrizen A und B
    int matrixA[rowsA][colsA] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int matrixB[rowsB][colsB] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // Ergebnis-Matrix C (Multiplikation von A und B)
    int matrixC[rowsA][colsB] = {0};  // Initialisierung auf 0

    // Matrizenmultiplikation
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Ausgabe der Ergebnis-Matrix C
    std::cout << "Ergebnis der Matrizenmultiplikation:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            std::cout << matrixC[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

### **Erklärung:**
1. **Was:** Dies ist eine Matrizenmultiplikation von zwei festen Matrizen `A` (2x3) und `B` (3x2). Das Ergebnis wird in der Matrix `C` (2x2) gespeichert.
2. **Wie:** Die Matrizen werden mit drei verschachtelten Schleifen multipliziert, die Zeilen und Spalten durchlaufen.
3. **Warum:** Matrizenmultiplikation ist eine grundlegende Operation in der linearen Algebra und zeigt, wie man 2D-Arrays für komplexe mathematische Berechnungen verwenden kann.

### **Warum ist das wichtig?**
- **Mehrdimensionale Arrays** werden häufig in mathematischen und wissenschaftlichen Berechnungen verwendet. Die Matrizenmultiplikation ist ein einfaches, aber effektives Beispiel für die Anwendung von 2D-Arrays in der Praxis.

---

## **2. Erweiterte Nutzung von `std::vector`**

Um die Flexibilität von `std::vector` voll auszuschöpfen, können Sie lernen, wie Sie Zeilen und Spalten in einem 2D-Vektor dynamisch hinzufügen oder entfernen.

### **Beispiel: Zeilen und Spalten dynamisch hinzufügen und entfernen**

```cpp
#include <iostream>
#include <vector>

// Funktion zum Hinzufügen einer Zeile zu einem 2D-Vector
void addRow(std::vector<std::vector<int>>& matrix, const std::vector<int>& newRow) {
    matrix.push_back(newRow);  // Fügt eine neue Zeile am Ende hinzu
}

// Funktion zum Hinzufügen einer Spalte zu einem 2D-Vector
void addColumn(std::vector<std::vector<int>>& matrix, int newValue) {
    for (auto& row : matrix) {
        row.push_back(newValue);  // Fügt die neue Spalte in jede Zeile hinzu
    }
}

// Funktion zum Entfernen der letzten Zeile
void removeRow(std::vector<std::vector<int>>& matrix) {
    if (!matrix.empty()) {
        matrix.pop_back();  // Entfernt die letzte Zeile
    }
}

// Funktion zum Entfernen der letzten Spalte
void removeColumn(std::vector<std::vector<int>>& matrix) {
    for (auto& row : matrix) {
        if (!row.empty()) {
            row.pop_back();  // Entfernt die letzte Spalte in jeder Zeile
        }
    }
}

int main() {
    // Erstellen eines 2D-Vektors
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Zeile hinzufügen
    std::vector<int> newRow = {10, 11, 12};
    addRow(matrix, newRow);

    // Spalte hinzufügen
    addColumn(matrix, 99);

    // Ausgabe der Matrix nach Hinzufügen
    std::cout << "Matrix nach Hinzufügen einer Zeile und Spalte:\n";
    for (const auto& row : matrix) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    // Zeile und Spalte entfernen
    removeRow(matrix);
    removeColumn(matrix);

    // Ausgabe der Matrix nach Entfernen
    std::cout << "\nMatrix nach Entfernen einer Zeile und Spalte:\n";
    for (const auto& row : matrix) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

### **Erklärung:**
1. **Was:** In diesem Beispiel wird ein 2D-`std::vector` verwendet, um eine Matrix darzustellen, bei der dynamisch Zeilen und Spalten hinzugefügt und entfernt werden können.
2. **Wie:** Es werden Funktionen zum Hinzufügen (`push_back`) und Entfernen (`pop_back`) von Zeilen und Spalten verwendet, um den `std::vector` dynamisch zu manipulieren.
3. **Warum:** `std::vector` bietet Flexibilität, wenn es um das Ändern der Größe von Arrays zur Laufzeit geht. Dies ist nützlich in Programmen, die dynamische Datenstrukturen erfordern.

### **Warum ist das wichtig?**
- **Erweiterte Nutzung von `std::vector`** zeigt, wie Vektoren in der Praxis verwendet werden können, um die dynamische Verwaltung von Daten zu vereinfachen. Das Hinzufügen und Entfernen von Zeilen und Spalten ist in vielen Anwendungen notwendig, wie z.B. in Tabellenverarbeitungsprogrammen oder in der Simulation von Daten.

---

### **Zusammenfassung der nächsten Schritte:**

1. **Mehrdimensionale Arrays vertiefen**: Setze mehrdimensionale Arrays für praktische Anwendungen wie Matrizenberechnungen ein. Matrizenoperationen sind ein häufiges Szenario für die Anwendung von 2D-Arrays.
2. **Erweiterte Nutzung von `std::vector`**: Zeige die Flexibilität von `std::vector` durch das dynamische Hinzufügen und Entfernen von Zeilen und Spalten. Das Arbeiten mit dynamischen Datenstrukturen hilft, flexiblen und erweiterbaren Code zu schreiben.

