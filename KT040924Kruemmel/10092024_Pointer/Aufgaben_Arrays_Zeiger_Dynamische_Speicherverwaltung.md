### **Übungsaufgaben und Vertiefungsthemen:**

## **1. Statische Arrays**

### **Aufgabe 1: Summe und Durchschnitt eines statischen Arrays**

Erstelle ein Programm, das ein Array mit 10 Ganzzahlen speichert, die Summe aller Elemente berechnet und den Durchschnitt ausgibt.

#### **Anforderungen:**
1. Deklariere und initialisiere ein statisches Array mit 10 vorgegebenen Ganzzahlen.
2. Berechne die Summe aller Array-Elemente.
3. Berechne den Durchschnitt und gib die Summe und den Durchschnitt auf der Konsole aus.

#### **Erwarteter Code-Aufbau:**

```cpp
#include <iostream>

int main() {
    // Deklariere und initialisiere das Array
    int numbers[10] = {15, 26, 37, 48, 59, 10, 21, 32, 43, 54};
    int sum = 0;

    // Berechne die Summe
    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }

    // Berechne den Durchschnitt
    double average = static_cast<double>(sum) / 10;

    // Ausgabe von Summe und Durchschnitt
    std::cout << "Summe: " << sum << std::endl;
    std::cout << "Durchschnitt: " << average << std::endl;

    return 0;
}
```

#### **Was, wie und warum:**
- **Was:** Die Aufgabe hilft, das Verständnis für statische Arrays und das Arbeiten mit Schleifen zu vertiefen.
- **Wie:** Der Code durchläuft das Array mit einer `for`-Schleife, summiert die Elemente und berechnet anschließend den Durchschnitt.
- **Warum:** Diese Übung zeigt, wie Arrays verwendet werden können, um eine Sammlung von Werten zu speichern und mathematische Operationen darauf auszuführen.

---

## **2. Dynamische Arrays**

### **Aufgabe 2: Dynamisches Array vom Benutzer gefüllt**

Schreibe ein Programm, das die Anzahl der Array-Elemente vom Benutzer eingeben lässt, dynamisch Speicher für das Array allokiert und den Benutzer die Werte einfügen lässt. Am Ende gibt das Programm die Werte des Arrays in umgekehrter Reihenfolge aus.

#### **Anforderungen:**
1. Frage den Benutzer nach der Anzahl der Elemente.
2. Allokiere dynamisch ein Array mit `new`.
3. Lasse den Benutzer die Werte für das Array eingeben.
4. Gib die Werte in umgekehrter Reihenfolge aus.
5. Vergiss nicht, den Speicher mit `delete[]` freizugeben.

#### **Erwarteter Code-Aufbau:**

```cpp
#include <iostream>

int main() {
    int size;
    
    // Frage den Benutzer nach der Anzahl der Elemente
    std::cout << "Geben Sie die Anzahl der Elemente ein: ";
    std::cin >> size;

    // Dynamische Speicherzuweisung
    int* numbers = new int[size];

    // Werte eingeben lassen
    for (int i = 0; i < size; i++) {
        std::cout << "Geben Sie das Element " << i + 1 << " ein: ";
        std::cin >> numbers[i];
    }

    // Ausgabe in umgekehrter Reihenfolge
    std::cout << "Werte in umgekehrter Reihenfolge: ";
    for (int i = size - 1; i >= 0; i--) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Speicher freigeben
    delete[] numbers;

    return 0;
}
```

#### **Was, wie und warum:**
- **Was:** Dieses Beispiel zeigt, wie dynamische Arrays zur Laufzeit allokiert und genutzt werden können.
- **Wie:** Der Benutzer gibt die Größe und die Elemente des Arrays an, die anschließend in umgekehrter Reihenfolge ausgegeben werden.
- **Warum:** Diese Übung vertieft das Verständnis für dynamische Speicherverwaltung und den sicheren Umgang mit `new` und `delete`.

---

## **3. Zeiger und Zeigerarithmetik**

### **Aufgabe 3: Zeigerarithmetik auf einem Array**

Schreibe ein Programm, das die ersten fünf Elemente eines statischen Arrays mit Zeigerarithmetik durchläuft und deren Werte verdoppelt. Verwende dabei ausschließlich Zeiger, um auf die Array-Elemente zuzugreifen.

#### **Anforderungen:**
1. Verwende ein statisches Array mit 5 Elementen.
2. Durchlaufe das Array mit einem Zeiger und verdopple die Werte.
3. Gib die neuen Werte aus.

#### **Erwarteter Code-Aufbau:**

```cpp
#include <iostream>

int main() {
    // Statisches Array
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Zeiger auf das Array
    int* ptr = arr;
    
    // Werte verdoppeln mit Zeigerarithmetik
    for (int i = 0; i < 5; i++) {
        *(ptr + i) *= 2;  // Verdoppeln des Werts
    }

    // Ausgabe der verdoppelten Werte
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i + 1 << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
```

#### **Was, wie und warum:**
- **Was:** Diese Übung zeigt, wie Zeigerarithmetik funktioniert, um auf Array-Elemente zuzugreifen und sie zu verändern.
- **Wie:** Anstatt Array-Indizes zu verwenden, wird mit einem Zeiger auf die Speicheradressen der Array-Elemente zugegriffen.
- **Warum:** Das hilft dabei, Zeigeroperationen zu verstehen und ihre Vorteile zu erkennen, insbesondere in Bezug auf direkte Speicherzugriffe.

---

## **4. Dynamische Speicherverwaltung**

### **Aufgabe 4: Speicherlecks vermeiden**

Schreibe ein Programm, das dynamisch ein Array von Ganzzahlen erstellt und mit Werten füllt, aber vergisst, den Speicher mit `delete[]` freizugeben. Analysiere, was passiert, wenn der Speicher nicht freigegeben wird.

#### **Anforderungen:**
1. Dynamisch ein Array erstellen.
2. Speicherallokierung ohne Freigabe.
3. Verwende ein Debug-Tool, um das Speicherleck zu finden und behebe es.

#### **Erwarteter Code-Aufbau (mit Speicherleck):**

```cpp
#include <iostream>

int main() {
    int size = 10000;

    // Dynamische Speicherallokierung
    int* numbers = new int[size];

    // Initialisierung der Elemente
    for (int i = 0; i < size; i++) {
        numbers[i] = i;
    }

    // Hier fehlt 'delete[] numbers' - Speicherleck

    return 0;
}
```

#### **Was, wie und warum:**
- **Was:** Dieses Programm demonstriert die Gefahr von Speicherlecks.
- **Wie:** Der Speicher wird dynamisch allokiert, aber nicht freigegeben, was zu einem Speicherleck führt.
- **Warum:** Schüler sollen die Wichtigkeit des Freigebens von dynamischem Speicher erkennen und lernen, wie man solche Fehler vermeidet.

---

## **Zusammenfassung der Übungen:**

1. **Statische Arrays:** Die Grundlagen von Arrays werden durch Berechnungen wie Summe und Durchschnitt gefestigt.
2. **Dynamische Arrays:** Die Schüler lernen, wie Arrays zur Laufzeit erstellt und verwaltet werden.
3. **Zeiger und Zeigerarithmetik:** Der direkte Umgang mit Speicheradressen und Zeigern wird durch konkrete Aufgaben vertieft.
4. **Speicherverwaltung:** Schüler erkennen, wie wichtig es ist, dynamisch allokierten Speicher richtig zu verwalten und freizugeben.

