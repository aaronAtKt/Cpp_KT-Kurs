# C++: Arrays, Zeiger und Dynamische Speicherverwaltung

## **Inhalt**
1. [Einführung in Statische Arrays](#1-einführung-in-statische-arrays)
2. [Dynamische Arrays](#2-dynamische-arrays)
3. [Zeiger in C++](#3-zeiger-in-c)
4. [Zeigerarithmetik](#4-zeigerarithmetik)
5. [Dynamische Speicherverwaltung mit `new` und `delete`](#5-dynamische-speicherverwaltung-mit-new-und-delete)

---

## **1. Einführung in Statische Arrays**

### **Was sind statische Arrays?**

Ein **Array** ist eine Sammlung von Elementen desselben Datentyps, die im Speicher hintereinander gespeichert sind. Ein **statisches Array** hat eine feste Größe, die während der Compilezeit festgelegt wird und nicht zur Laufzeit verändert werden kann.

### **Wie wird ein statisches Array verwendet?**

Hier ein Beispiel, das zeigt, wie ein statisches Array deklariert, initialisiert und verwendet wird:

```cpp
#include <iostream>  // Importiert die Standard-Ein- und Ausgabe-Bibliothek

int main() {
    // Was: Deklaration eines statischen Arrays mit 5 Elementen vom Typ int
    // Wie: Wir verwenden den Datentyp 'int' und geben die Anzahl der Elemente in eckigen Klammern an
    // Warum: Ein statisches Array speichert eine feste Anzahl von Elementen im Speicher
    int numbers[5] = {10, 20, 30, 40, 50};  // Das Array wird gleichzeitig initialisiert
    
    // Was: Zugriff auf das erste Element des Arrays
    // Wie: Mit dem Index '0' greifen wir auf das erste Element zu (Index beginnt bei 0)
    // Warum: In C++ beginnen Arrays bei Index 0, daher steht 'numbers[0]' für das erste Element
    std::cout << "Erstes Element: " << numbers[0] << std::endl;  // Ausgabe: 10
    
    // Was: Zugriff auf das zweite Element des Arrays
    // Wie: Mit dem Index '1' greifen wir auf das zweite Element zu
    // Warum: Jedes Array-Element kann über seinen Index angesprochen werden
    std::cout << "Zweites Element: " << numbers[1] << std::endl;  // Ausgabe: 20

    // Was: Schleife, um auf alle Elemente des Arrays zuzugreifen
    // Wie: Eine for-Schleife durchläuft alle Elemente von 0 bis 4
    // Warum: Eine Schleife ermöglicht es, auf alle Array-Elemente nacheinander zuzugreifen
    for(int i = 0; i < 5; i++) {
        std::cout << "Element " << i+1 << ": " << numbers[i] << std::endl;
    }
    
    return 0;  // Was: Beendet das Programm; Wie/Warum: Ein C++-Programm muss mit einem Rückgabewert 0 enden
}
```

### **Zusammenfassung von statischen Arrays:**

1. **Was:** Ein statisches Array speichert eine feste Anzahl von Elementen, auf die man mit ihrem Index zugreifen kann.
2. **Wie:** Es wird durch Angabe der Größe bei der Deklaration und Initialisierung erstellt, die Elemente werden durch ihren Index referenziert.
3. **Warum:** Statische Arrays sind nützlich, wenn die Anzahl der Elemente im Voraus bekannt ist.

---

## **2. Dynamische Arrays**

### **Was sind dynamische Arrays?**

Im Gegensatz zu statischen Arrays, deren Größe zur Compilezeit festgelegt wird, können **dynamische Arrays** zur Laufzeit erstellt und verwaltet werden. Dies ermöglicht flexiblere Speicherverwaltung, vor allem, wenn die Größe des Arrays erst zur Laufzeit bekannt ist.

### **Beispiel für ein dynamisches Array:**

```cpp
#include <iostream>  // Importiert die Standard-Ein- und Ausgabe-Bibliothek

int main() {
    int size;  // Was: Variable zur Speicherung der Array-Größe
               // Wie: Wir verwenden eine int-Variable, um die vom Benutzer eingegebene Größe zu speichern
               // Warum: Da die Größe des Arrays zur Laufzeit festgelegt wird, benötigen wir eine Variable für die Eingabe

    // Was: Eingabe der Größe des Arrays vom Benutzer
    // Wie: 'std::cin' liest die Eingabe von der Konsole
    // Warum: Wir wollen ein Array erstellen, dessen Größe vom Benutzer bestimmt wird
    std::cout << "Geben Sie die Anzahl der Elemente im Array ein: ";
    std::cin >> size;

    // Was: Dynamische Speicherreservierung für ein Array mit 'new'
    // Wie: 'new' allokiert den Speicherplatz für das Array zur Laufzeit auf dem Heap
    // Warum: Ein dynamisches Array erlaubt es uns, die Größe zur Laufzeit festzulegen
    int* numbers = new int[size];  // Dynamisches Array mit der vom Benutzer festgelegten Größe

    // Was: Initialisierung der Array-Elemente
    // Wie: Eine Schleife wird verwendet, um jedem Element einen Wert zuzuweisen
    // Warum: Jedes Element im Array soll einen eigenen Wert erhalten
    for(int i = 0; i < size; i++) {
        numbers[i] = (i + 1) * 10;  // Jedes Element wird mit einem Vielfachen von 10 initialisiert
    }

    // Was: Ausgabe der Array-Elemente
    // Wie: Eine Schleife durchläuft alle Elemente und gibt sie auf der Konsole aus
    // Warum: Wir wollen überprüfen, ob die Werte korrekt zugewiesen wurden
    std::cout << "Array-Elemente: " << std::endl;
    for(int i = 0; i < size; i++) {
        std::cout << "Element " << i + 1 << ": " << numbers[i] << std::endl;
    }

    // Was: Freigeben des dynamisch allokierten Speichers
    // Wie: 'delete[]' gibt den zuvor mit 'new' zugewiesenen Speicher wieder frei
    // Warum: Um Speicherlecks zu vermeiden, muss dynamisch allokierter Speicher manuell freigegeben werden
    delete[] numbers;

    return 0;
}
```

### **Zusammenfassung von dynamischen Arrays:**

1. **Was:** Ein dynamisches Array erlaubt die Erstellung und Verwaltung von Arrays, deren Größe zur Laufzeit festgelegt wird.
2. **Wie:** Das Array wird mit `new` erstellt und muss mit `delete[]` freigegeben werden.
3. **Warum:** Dynamische Arrays bieten Flexibilität, wenn die Größe des Arrays nicht im Voraus bekannt ist.

---

## **3. Zeiger in C++**

### **Was sind Zeiger?**

Ein **Zeiger** ist eine Variable, die die **Adresse** einer anderen Variablen speichert. Zeiger bieten eine direkte Kontrolle über den Speicher und erlauben den Zugriff auf den Wert, der an einer bestimmten Speicheradresse gespeichert ist.

### **Beispiel zur Verwendung von Zeigern:**

```cpp
#include <iostream>  // Importiert die Standard-Ein- und Ausgabe-Bibliothek

int main() {
    int value = 42;  // Was: Eine Variable vom Typ int
                     // Wie: Eine einfache Ganzzahl mit dem Wert 42
                     // Warum: Wir brauchen eine Variable, deren Adresse wir später verwenden können

    // Was: Deklaration eines Zeigers, der auf eine int-Variable zeigt
    // Wie: 'int*' gibt an, dass 'ptr' ein Zeiger auf einen int ist; '&value' gibt die Adresse von 'value' zurück
    // Warum: Der Zeiger 'ptr' speichert die Speicheradresse der Variable 'value'
    int* ptr = &value;  // Zeiger auf die Adresse von 'value'

    // Was: Ausgabe der Adresse und des Werts von 'value'
    // Wie: Wir verwenden 'std::cout' zur Ausgabe; 'ptr' speichert die Adresse, '*ptr' greift auf den Wert zu
    // Warum: Mit Zeigern kann man sowohl die Adresse als auch den Wert einer Variablen anzeigen
    std::cout << "Adresse von value: " << &value << std::endl;
    std::cout << "Zeiger ptr zeigt auf: " << ptr << std::endl;
    std::cout << "Wert von *ptr: " << *ptr << std::endl;  // Dereferenzierung des Zeigers

    return 0;
}
```

### **Zusammenfassung zu Zeigern:**

1. **Was:** Ein Zeiger speichert die Adresse einer Variable.
2. **Wie:** Ein Zeiger wird mit dem Operator `*` deklariert und mit der Adresse einer Variablen (`&`) initialisiert.
3. **Warum:** Zeiger ermöglichen direkten Zugriff auf Speicheradressen und deren Inhalte.

---

## **4. Zeigerarithmetik**

### **Was ist Zeigerarithmetik?**

Zeigerarithmetik ermöglicht das Traversieren (Durchlaufen) von Arrays, indem man einen Zeiger inkrementiert oder dekrementiert. Dies ist nützlich, wenn man auf aufeinanderfolgende Speicheradressen zugreifen muss.



### **Beispiel für Zeigerarithmetik:**

```cpp
#include <iostream>  // Importiert die Standard-Ein- und Ausgabe-Bibliothek

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Was: Ein statisches Array mit 5 Elementen
                                        // Wie: Das Array wird direkt bei der Deklaration initialisiert
                                        // Warum: Wir wollen ein Array, auf das wir mit Zeigerarithmetik zugreifen

    // Was: Zeiger auf das erste Element des Arrays
    // Wie: Der Zeiger 'ptr' wird auf das erste Element von 'arr' gesetzt
    // Warum: Wir können Zeigerarithmetik verwenden, um durch das Array zu navigieren
    int* ptr = arr;

    // Was: Schleife zur Ausgabe der Array-Elemente mithilfe von Zeigerarithmetik
    // Wie: 'ptr + i' bewegt den Zeiger auf das nächste Element im Array; '*(ptr + i)' greift auf den Wert zu
    // Warum: Zeigerarithmetik ermöglicht das Traversieren eines Arrays durch Inkrementieren des Zeigers
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i + 1 << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
```

### **Zusammenfassung zu Zeigerarithmetik:**

1. **Was:** Zeigerarithmetik ermöglicht das Verschieben eines Zeigers auf benachbarte Speicheradressen.
2. **Wie:** Der Zeiger wird durch Addition oder Subtraktion einer Ganzzahl verschoben.
3. **Warum:** Dies ist nützlich, um durch Arrays oder andere zusammenhängende Speicherbereiche zu navigieren.

---

## **5. Dynamische Speicherverwaltung mit `new` und `delete`**

### **Was ist dynamische Speicherverwaltung?**

Mit der dynamischen Speicherverwaltung kann Speicher zur Laufzeit auf dem **Heap** allokiert und freigegeben werden. Dies ist besonders nützlich, wenn die Größe eines Objekts zur Compilezeit nicht bekannt ist.

### **Beispiel für dynamische Speicherverwaltung:**

```cpp
#include <iostream>  // Importiert die Standard-Ein- und Ausgabe-Bibliothek

int main() {
    // Was: Dynamische Speicherzuweisung für eine einzelne Ganzzahl
    // Wie: 'new int' weist Speicher für eine Ganzzahl auf dem Heap zu; 'ptr' speichert die Adresse
    // Warum: Wir können dynamischen Speicher verwenden, wenn die Größe zur Laufzeit bestimmt wird
    int* ptr = new int;

    // Was: Zuweisung eines Werts zur Speicheradresse, auf die 'ptr' zeigt
    // Wie: Wir dereferenzieren den Zeiger mit '*' und weisen den Wert 100 zu
    // Warum: Wir greifen auf den dynamisch allokierten Speicher zu, um dort einen Wert zu speichern
    *ptr = 100;
    std::cout << "Wert von *ptr: " << *ptr << std::endl;  // Ausgabe: 100

    // Was: Freigeben des dynamisch zugewiesenen Speichers
    // Wie: 'delete' gibt den zuvor allokierten Speicher wieder frei
    // Warum: Um Speicherlecks zu vermeiden, muss dynamisch allokierter Speicher manuell freigegeben werden
    delete ptr;

    return 0;
}
```

### **Zusammenfassung der dynamischen Speicherverwaltung:**

1. **Was:** Mit `new` kann Speicher zur Laufzeit dynamisch allokiert werden. Der Speicher muss mit `delete` freigegeben werden.
2. **Wie:** `new` allokiert Speicher auf dem Heap, während `delete` diesen Speicher wieder freigibt.
3. **Warum:** Dynamische Speicherverwaltung bietet Flexibilität, wenn die Speichergröße zur Compilezeit nicht festgelegt werden kann.

