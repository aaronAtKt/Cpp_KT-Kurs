# C++ Tutorial Projekt

Dieses Projekt zeigt, wie man Ausgabefunktionen aus der `main.cpp` in eine separate Header-Datei (`print.h`) auslagern kann. Das Ziel ist es, den Code modularer und wartbarer zu gestalten, indem die Ausgabe von Arrays und Zeichenketten über spezielle Funktionen verwaltet wird.

## Inhalt

- [Hintergrund](#hintergrund)
- [Verwendete Technologien](#verwendete-technologien)
- [Verwendung](#verwendung)
- [Beispielcode](#beispielcode)
- [Warum diese Änderung?](#warum-diese-änderung)
- [Mitwirken](#mitwirken)
- [Lizenz](#lizenz)

## Hintergrund

Das ursprüngliche Projekt enthielt alle Ausgabefunktionen direkt in der `main.cpp`. Um die Wiederverwendbarkeit und Lesbarkeit des Codes zu verbessern, wurden die Ausgabefunktionen in eine separate Header-Datei (`print.h`) ausgelagert. Dies ermöglicht eine saubere Trennung zwischen Logik und Ausgabe, was zu einer besseren Wartbarkeit führt.

## Verwendete Technologien

- **C++**: Programmiersprache, die zur Entwicklung des Projekts verwendet wird.
- **Standardbibliotheken**: `<iostream>`, `<cstdio>`, `<cstdarg>` werden für die Ausgaben und Variadic Arguments verwendet.

## Verwendung

### Funktionen in `print.h`:

- **`printIntArray(const int* array, size_t size)`**: Gibt ein `int`-Array auf der Konsole aus.
- **`printShortArray(const short* array, size_t size)`**: Gibt ein `short`-Array auf der Konsole aus.
- **`printString(const std::string& text)`**: Gibt einen `std::string`-Wert auf der Konsole aus.
- **`printCString(const char* text)`**: Gibt einen C-String (`char*`) auf der Konsole aus.

### Beispiel für die Verwendung:

In der `main.cpp` kannst du die Funktionen so verwenden:
```cpp
#include "print.h"

int intArray[10] = { 1, 3, 5, 6, 7 };
short myArray[]{ 10, 20, 30, 40 };

int main() {
    printIntArray(intArray, 10);  // Ausgabe des int-Arrays
    printShortArray(myArray, 4);  // Ausgabe des short-Arrays
    
    std::string text = "Hallo Welt.";
    printString(text);  // Ausgabe eines C++-Strings
    
    char myText[] = "Das ist ein C-String.";
    printCString(myText);  // Ausgabe eines C-Strings
    
    return 0;
}
```

## Warum diese Änderung?

Das Ziel dieser Änderung ist es, die **Lesbarkeit und Wartbarkeit** des Codes zu verbessern, indem die Ausgabefunktionen von der Logik in `main.cpp` getrennt werden. 

### Vorteile:
- **Modularität**: Die Funktionen sind nun in `print.h` zentralisiert, was bedeutet, dass alle Ausgaben an einem Ort verwaltet werden.
- **Wiederverwendbarkeit**: Die Funktionen in `print.h` können leicht in anderen Projekten oder Dateien wiederverwendet werden.
- **Sauberer Code**: Die Trennung der Logik und der Ausgabe sorgt für übersichtlicheren und besser strukturierten Code.



