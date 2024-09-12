### 1. **Zeiger – Grundlegende Verwendung**

```cpp
#include <iostream>

// Funktion, um den Wert einer Variable über einen Zeiger zu ändern
void wertAendern(int* zeiger) {
    *zeiger = 42;  // Der Wert der Variable wird auf 42 gesetzt
}

int main() {
    int zahl = 10;  // Normale Variable
    int* pZahl = &zahl;  // Zeiger, der auf die Adresse von 'zahl' zeigt

    // Ausgabe des ursprünglichen Werts
    std::cout << "Ursprünglicher Wert: " << *pZahl << std::endl;  // Ausgabe: 10

    // Funktion aufrufen, um den Wert zu ändern
    wertAendern(pZahl);  // Übergibt den Zeiger an die Funktion

    // Ausgabe des geänderten Werts
    std::cout << "Geänderter Wert: " << *pZahl << std::endl;  // Ausgabe: 42

    return 0;
}
```

---

### 2. **Null-Pointer und Sicherheitsüberprüfung**

```cpp
#include <iostream>

// Funktion, die den Zeiger überprüft, bevor sie darauf zugreift
void zeigerTest(int* zeiger) {
    if (zeiger != nullptr) {
        std::cout << "Der Wert ist: " << *zeiger << std::endl;  // Dereferenzierung des Zeigers
    } else {
        std::cout << "Zeiger zeigt auf nullptr!" << std::endl;
    }
}

int main() {
    int zahl = 20;  // Normale Variable
    int* pZahl = &zahl;  // Zeiger auf 'zahl'
    int* nullZeiger = nullptr;  // Null-Pointer (zeigt auf nichts)

    // Funktionsaufruf mit gültigem Zeiger
    zeigerTest(pZahl);  // Ausgabe: Der Wert ist: 20

    // Funktionsaufruf mit Null-Pointer
    zeigerTest(nullZeiger);  // Ausgabe: Zeiger zeigt auf nullptr!

    return 0;
}
```

---

### 3. **Dynamische Speicherverwaltung**

```cpp
#include <iostream>

int main() {
    // Dynamisch Speicher für einen einzelnen int-Wert reservieren
    int* dynamisch = new int;  // Speicher für einen int-Wert
    *dynamisch = 100;  // Wert zuweisen

    std::cout << "Wert im dynamisch zugewiesenen Speicher: " << *dynamisch << std::endl;  // Ausgabe: 100

    // Speicher nach Gebrauch freigeben
    delete dynamisch;  // Speicher freigeben, um Speicherlecks zu vermeiden

    // Dynamisch Speicher für ein Array reservieren
    int* array = new int[5];  // Speicher für 5 int-Werte

    // Array initialisieren
    for (int i = 0; i < 5; ++i) {
        array[i] = i * 10;
    }

    // Werte ausgeben
    for (int i = 0; i < 5; ++i) {
        std::cout << "Array[" << i << "] = " << array[i] << std::endl;
    }

    // Speicher für das Array freigeben
    delete[] array;  // Speicher für das gesamte Array freigeben

    return 0;
}
```

---

### 4. **Zeigerarithmetik und Arrays**

```cpp
#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array von 5 int-Werten
    int* p = arr;  // Zeiger auf das erste Element des Arrays

    // Zugriff auf Array-Werte mittels Zeigerarithmetik
    std::cout << "Werte im Array mittels Zeigerarithmetik:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << *(p + i) << " ";  // Dereferenzierung des Zeigers mit Offset
    }
    std::cout << std::endl;

    // Beispiel für das Inkrementieren eines Zeigers
    p++;  // Zeiger zeigt jetzt auf das zweite Element des Arrays
    std::cout << "Wert nach p++: " << *p << std::endl;  // Ausgabe: 20

    return 0;
}
```

---

### 5. **Funktionszeiger und Callbacks**

```cpp
#include <iostream>

// Funktion, die einen Wert ausgibt
void ausgabe(int wert) {
    std::cout << "Der Wert ist: " << wert << std::endl;
}

// Funktion, die einen Funktionszeiger als Parameter akzeptiert (Callback)
void verarbeiteWert(void (*callback)(int), int wert) {
    callback(wert);  // Ruft die übergebene Funktion mit dem Wert auf
}

int main() {
    // Funktionszeiger deklarieren und der Funktion 'ausgabe' zuweisen
    void (*funktionszeiger)(int) = ausgabe;

    // Funktionszeiger aufrufen
    funktionszeiger(42);  // Ausgabe: Der Wert ist: 42

    // Funktionszeiger als Callback verwenden
    verarbeiteWert(funktionszeiger, 99);  // Ausgabe: Der Wert ist: 99

    return 0;
}
```

---

### 6. **Smart Pointers**

```cpp
#include <iostream>
#include <memory>  // Für Smart Pointer

int main() {
    // std::unique_ptr für automatische Speicherverwaltung verwenden
    std::unique_ptr<int> smartPointer = std::make_unique<int>(100);  // Speicher für int reservieren und Wert zuweisen

    std::cout << "Wert im smartPointer: " << *smartPointer << std::endl;  // Ausgabe: 100

    // Speicher wird automatisch freigegeben, wenn der Smart Pointer den Gültigkeitsbereich verlässt

    // Beispiel mit std::shared_ptr (gemeinsam genutzter Speicher)
    std::shared_ptr<int> sharedPointer1 = std::make_shared<int>(200);  // Speicher gemeinsam verwenden
    std::shared_ptr<int> sharedPointer2 = sharedPointer1;  // Ein weiterer shared_ptr zeigt auf denselben Speicher

    std::cout << "Wert im sharedPointer: " << *sharedPointer1 << std::endl;  // Ausgabe: 200
    std::cout << "Referenzanzahl: " << sharedPointer1.use_count() << std::endl;  // Ausgabe: 2 (zwei Zeiger auf denselben Speicher)

    return 0;
}
```

---

### 7. **Zeiger in Funktionen**

```cpp
#include <iostream>

// Funktion, die den Wert einer Variablen über einen Zeiger verdoppelt
void verdoppeln(int* zahl) {
    *zahl *= 2;  // Wert wird im Speicher verdoppelt
}

int main() {
    int wert = 25;  // Normale Variable
    std::cout << "Wert vor der Funktion: " << wert << std::endl;  // Ausgabe: 25

    // Adresse von 'wert' an die Funktion übergeben
    verdoppeln(&wert);  // Übergibt den Zeiger an die Funktion

    std::cout << "Wert nach der Funktion: " << wert << std::endl;  // Ausgabe: 50

    return 0;
}
```

---

### Zusammenfassung der sieben Beispiele:
1. **Grundlegende Zeiger**: Zeiger auf eine Variable, Dereferenzierung und Wertänderung.
2. **Null-Pointer**: Überprüfung von Zeigern, um sicherzustellen, dass sie auf gültige Adressen zeigen.
3. **Dynamische Speicherverwaltung**: Zuweisung und Freigabe von Speicher zur Laufzeit mit `new` und `delete`.
4. **Zeigerarithmetik**: Navigation durch ein Array mit Zeigern.
5. **Funktionszeiger**: Verwendung von Zeigern auf Funktionen für flexible Aufrufe und Callbacks.
6. **Smart Pointers**: Automatische Speicherverwaltung mit `std::unique_ptr` und `std::shared_ptr`.
7. **Zeiger in Funktionen**: Direkte Manipulation von Variablen über Zeiger, ohne Kopien der Werte zu erstellen.
