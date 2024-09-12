# Mehrdimensionale Arrays, Dynamische Arrays und `std::vector`

## **Inhalt**
1. [Mehrdimensionale Arrays](#1-mehrdimensionale-arrays)
2. [Dynamische mehrdimensionale Arrays](#2-dynamische-mehrdimensionale-arrays)
3. [Standardcontainer: `std::vector`](#3-standardcontainer-stdvector)

---

## **1. Mehrdimensionale Arrays**

### **Was sind mehrdimensionale Arrays?**

Mehrdimensionale Arrays sind Arrays, die mehr als eine Dimension besitzen. Die am häufigsten verwendete Form ist das **zweidimensionale Array** (auch Matrix genannt), das in **Zeilen** und **Spalten** organisiert ist. Es gibt jedoch auch dreidimensionale Arrays und Arrays mit noch mehr Dimensionen.

### **Wie werden 2D-Arrays verwendet?**

Ein zweidimensionales Array kann als eine Art Tabelle oder Matrix betrachtet werden. Es wird als **Array von Arrays** dargestellt, wobei jede Zeile ein weiteres Array enthält.

#### **Beispiel für ein 2D-Array:**

```cpp
#include <iostream>

int main() {
    // Was: Deklaration eines 2D-Arrays mit 3 Zeilen und 4 Spalten
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Wie: Zwei verschachtelte Schleifen durchlaufen die Zeilen und Spalten
    for (int i = 0; i < 3; i++) {  // Schleife für die Zeilen
        for (int j = 0; j < 4; j++) {  // Schleife für die Spalten
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;  // Neue Zeile nach jeder Zeile in der Matrix
    }

    return 0;
}
```

### **Warum werden sie verwendet?**
- **Mehrdimensionale Arrays** sind praktisch, um Daten in einer Tabelle oder Matrix zu speichern. Sie ermöglichen es, komplexe Datenstrukturen wie Matrizen, Schachbretter oder Tabellen darzustellen und darauf zuzugreifen.

---

## **2. Dynamische mehrdimensionale Arrays**

### **Was sind dynamische mehrdimensionale Arrays?**

Ein dynamisches mehrdimensionales Array ermöglicht es, die Größe des Arrays erst zur Laufzeit zu bestimmen. Anstatt die Größe zur Compilezeit festzulegen, wird der Speicher dynamisch mit **Zeigern und `new`** allokiert. Dies bietet Flexibilität, erfordert aber auch manuelle Speicherverwaltung.

### **Beispiel für ein dynamisches 2D-Array:**

```cpp
#include <iostream>

int main() {
    int rows, cols;

    // Was: Eingabe der Anzahl der Zeilen und Spalten
    std::cout << "Geben Sie die Anzahl der Zeilen ein: ";
    std::cin >> rows;
    std::cout << "Geben Sie die Anzahl der Spalten ein: ";
    std::cin >> cols;

    // Wie: Speicher wird dynamisch für ein Array von Zeigern reserviert
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];  // Speicher für jede Zeile (Spalten) wird allokiert
    }

    // Warum: Dynamische Arrays ermöglichen die flexible Speicherverwaltung
    // Eingabe der Matrixwerte
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Geben Sie das Element für Zeile " << i + 1 << ", Spalte " << j + 1 << " ein: ";
            std::cin >> matrix[i][j];
        }
    }

    // Ausgabe der Matrix
    std::cout << "\nDie Matrix lautet:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Wie: Speicherfreigabe
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];  // Freigeben der Spalten
    }
    delete[] matrix;  // Freigeben der Zeilen

    return 0;
}
```

### **Warum sind sie wichtig?**
- **Dynamische Arrays** sind nützlich, wenn die Größe des Arrays erst zur Laufzeit festgelegt wird. Sie bieten Flexibilität, erfordern jedoch manuelle Speicherverwaltung, um Speicherlecks zu vermeiden.

---

## **3. Standardcontainer: `std::vector`**

### **Was ist `std::vector`?**

Ein **`std::vector`** ist ein Container aus der Standardbibliothek, der ein dynamisches Array darstellt. Er passt sich automatisch in seiner Größe an und verwaltet den Speicher eigenständig, wodurch die manuelle Speicherverwaltung entfällt.

### **Beispiel für die Verwendung von `std::vector`:**

```cpp
#include <iostream>
#include <vector>  // Für std::vector

int main() {
    int rows, cols;

    // Was: Eingabe der Anzahl der Zeilen und Spalten
    std::cout << "Geben Sie die Anzahl der Zeilen ein: ";
    std::cin >> rows;
    std::cout << "Geben Sie die Anzahl der Spalten ein: ";
    std::cin >> cols;

    // Wie: Erstellen eines 2D-Vektors mit 'rows' Zeilen und 'cols' Spalten
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    // Warum: Ein 'std::vector' verwaltet den Speicher automatisch und ist flexibler als manuelle Arrays
    // Eingabe der Matrixwerte
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Geben Sie das Element für Zeile " << i + 1 << ", Spalte " << j + 1 ein: ";
            std::cin >> matrix[i][j];
        }
    }

    // Ausgabe der Matrix
    std::cout << "\nDie Matrix lautet:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

### **Warum ist `std::vector` so wichtig?**
- **`std::vector`** erleichtert die Arbeit mit dynamischen Arrays, da der Container die Speicherverwaltung und Größenanpassung übernimmt. Dies reduziert das Risiko von Speicherlecks und ist besonders nützlich, wenn die Anzahl der Elemente nicht im Voraus bekannt ist.

---

### **Zusammenfassung:**

1. **Mehrdimensionale Arrays** speichern Daten in mehreren Dimensionen, z.B. in einer Matrixform.
2. **Dynamische Arrays** ermöglichen es, die Größe zur Laufzeit zu bestimmen, erfordern jedoch manuelle Speicherverwaltung.
3. **`std::vector`** ist ein flexibler Container, der die Speicherverwaltung automatisch übernimmt und die Verwendung von dynamischen Arrays vereinfacht.

