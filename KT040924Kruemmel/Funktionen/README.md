Diese README-Datei erklärt die Funktionsweise des Projekts, die einzelnen Module, sowie die Nutzung und Kompilierung. 

---

```markdown
# Bitmanipulation und Bitmasken in C++

Dieses C++-Projekt demonstriert verschiedene Techniken der **Bitmanipulation** und **Bitmasken-Anwendung**. Es wurde modular strukturiert, um die Lesbarkeit und Wartbarkeit des Codes zu verbessern. Das Projekt beinhaltet:

- **Setzen, Löschen und Prüfen von Bits**
- **Anwendung von Bitmasken** (mehrere Bits gleichzeitig manipulieren)
- **Konvertierung zwischen Binärstrings und Ganzzahlen**

## Inhaltsverzeichnis

1. [Dateistruktur](#dateistruktur)
2. [Verwendete Funktionen](#verwendete-funktionen)
    - [Bitmanipulation](#bitmanipulation)
    - [Bitmasken](#bitmasken)
    - [Hilfsfunktionen](#hilfsfunktionen)
3. [Kompilierung und Ausführung](#kompilierung-und-ausführung)
4. [Beispiele](#beispiele)
5. [Anwendungsbereiche](#anwendungsbereiche)

## Dateistruktur

Das Projekt ist in mehrere Dateien aufgeteilt, um die Funktionen zu modularisieren:

```bash
.
├── main.cpp         # Hauptprogramm
├── funktionen.cpp   # Implementierung der Bitmanipulationen
├── funktionen.h     # Deklaration der Bitmanipulationsfunktionen
├── utils.cpp        # Implementierung der Hilfsfunktionen
├── utils.h          # Deklaration der Hilfsfunktionen
├── masken.cpp       # Implementierung der Bitmasken-Funktionen
└── masken.h         # Deklaration der Bitmasken-Funktionen
```

## Verwendete Funktionen

### Bitmanipulation

- **`setBit(int number, int position)`**: Setzt ein bestimmtes Bit auf 1.
- **`clearBit(int number, int position)`**: Löscht ein bestimmtes Bit (setzt es auf 0).
- **`checkBit(int number, int position)`**: Prüft, ob ein Bit gesetzt ist (1).

### Bitmasken

- **`applyMaskAdd(int number, int mask)`**: Setzt mehrere Bits gleichzeitig anhand einer Maske.
- **`applyMaskClear(int number, int mask)`**: Löscht mehrere Bits gleichzeitig anhand einer Maske.
- **`applyMaskCheck(int number, int mask)`**: Prüft, ob alle Bits einer Maske in der Zahl gesetzt sind.

### Hilfsfunktionen

- **`binaryToString(int number, int bits)`**: Wandelt eine Ganzzahl in eine Binärzeichenkette um.
- **`btoi(std::string binaryStr)`**: Konvertiert einen Binärstring in eine Ganzzahl.

## Kompilierung und Ausführung

Um das Programm zu kompilieren und auszuführen, kannst du den **g++ Compiler** verwenden. Die Kompilierung erfolgt durch die Angabe aller Quellcodedateien, und das fertige Programm wird als `bitmanipulation` ausgegeben.

### Kompilieren

```bash
g++ main.cpp funktionen.cpp utils.cpp masken.cpp -o bitmanipulation
```

### Ausführen

Nach der Kompilierung kannst du das Programm mit folgendem Befehl ausführen:

```bash
./bitmanipulation
```

## Beispiele

### Setzen eines Bits

```cpp
int number = 0b101010;  // Zahl: 42 (Dezimal)
int position = 2;       // Position des zu setzenden Bits

number = setBit(number, position);  // Setzt das Bit an Position 2
std::cout << "Nach Setzen des Bits: " << binaryToString(number, 6) << std::endl;
```

**Ergebnis:**

```
Nach Setzen des Bits: 101110
```

### Löschen eines Bits

```cpp
int number = 0b101010;  // Zahl: 42 (Dezimal)
int position = 1;       // Position des zu löschenden Bits

number = clearBit(number, position);  // Löscht das Bit an Position 1
std::cout << "Nach Löschen des Bits: " << binaryToString(number, 6) << std::endl;
```

**Ergebnis:**

```
Nach Löschen des Bits: 101000
```

### Prüfen eines Bits

```cpp
int number = 0b101010;  // Zahl: 42 (Dezimal)
int position = 3;       // Position des zu prüfenden Bits

bool isSet = checkBit(number, position);
std::cout << "Ist das Bit gesetzt? " << (isSet ? "Ja" : "Nein") << std::endl;
```

**Ergebnis:**

```
Ist das Bit gesetzt? Ja
```

### Bitmasken-Anwendung

#### Setzen mehrerer Bits

```cpp
int number = 0b101010;   // Zahl: 42 (Dezimal)
int mask = 0b00000101;   // Maske zum Setzen der Bits

number = applyMaskAdd(number, mask);  // Setzt die Bits der Maske
std::cout << "Nach dem Setzen der Bits (Maske): " << binaryToString(number, 6) << std::endl;
```

**Ergebnis:**

```
Nach dem Setzen der Bits (Maske): 101111
```

#### Löschen mehrerer Bits

```cpp
int number = 0b101010;   // Zahl: 42 (Dezimal)
int mask = 0b00001010;   // Maske zum Löschen der Bits

number = applyMaskClear(number, mask);  // Löscht die Bits der Maske
std::cout << "Nach dem Löschen der Bits (Maske): " << binaryToString(number, 6) << std::endl;
```

**Ergebnis:**

```
Nach dem Löschen der Bits (Maske): 100000
```

### Umwandlung eines Binärstrings in eine Ganzzahl

```cpp
std::string binString = "101010";  // Binärstring
int number = btoi(binString);      // Konvertiert den Binärstring in eine Ganzzahl
std::cout << "Die Ganzzahl aus dem Binärstring ist: " << number << std::endl;
```

**Ergebnis:**

```
Die Ganzzahl aus dem Binärstring ist: 42
```

## Anwendungsbereiche

Die im Projekt implementierten **Bitmanipulationen** und **Bitmaskenoperationen** finden breite Anwendung in verschiedenen Bereichen:

- **Hardwaresteuerung**: Direkte Steuerung und Überprüfung von Bits auf Hardware-Ebene.
- **Systemprogrammierung**: Arbeiten mit Flags, Konfigurationsbits und Zuständen.
- **Netzwerkprogrammierung**: Arbeiten mit Protokollheadern, in denen einzelne Bits für verschiedene Zwecke reserviert sind.
- **Datenkompression und -speicherung**: Effiziente Verwaltung von Speicherplatz durch komprimierte Datenrepräsentation auf Bit-Ebene.

---

**Hinweis:** Dieses Projekt kann leicht erweitert werden, indem zusätzliche Bitmanipulationsfunktionen oder andere Hilfsfunktionen zur Konvertierung von Daten hinzugefügt werden.
```



### **Erklärung der Struktur der README.md**

1. **Projektname und kurze Einleitung**: Die README beginnt mit dem Namen des Projekts und einem kurzen Überblick darüber, was es tut.
   
2. **Inhaltsverzeichnis**: Ermöglicht eine einfache Navigation, besonders bei längeren Dateien.
   
3. **Dateistruktur**: Zeigt den Aufbau des Projekts und erklärt, was jede Datei enthält.
   
4. **Verwendete Funktionen**: Beschreibt die wichtigsten Funktionen im Projekt. Jede Funktion ist klar dokumentiert und in Kategorien eingeteilt.
   
5. **Kompilierung und Ausführung**: Gibt den genauen Befehl zur Kompilierung und Ausführung des Programms an.
   
6. **Beispiele**: Bietet mehrere Beispiele mit Code und den erwarteten Ausgaben, damit Nutzer schnell verstehen, wie das Projekt funktioniert.

7. **Anwendungsbereiche**: Zeigt reale Anwendungsfälle, damit Benutzer die Relevanz der Bitmanipulation und Bitmasken in der Programmierung verstehen.

