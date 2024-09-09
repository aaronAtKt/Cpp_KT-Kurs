# Aufgaben09092024

## Projektübersicht
Dieses Projekt beinhaltet verschiedene Aufgaben, die sich mit **Bit- und Schiebeoperationen** in C++ befassen. Die Aufgaben zielen darauf ab, grundlegende Kenntnisse über bitweise Operatoren, Schiebeoperationen und ihre Verwendung in realen Anwendungen zu vermitteln.

## Aufgabenübersicht

### Aufgabe 0: Aussagen einordnen

Eine Reihe von Aussagen über bitweise Operatoren und Funktionen in C++ wird auf ihre Richtigkeit überprüft. Die Aufgabe hilft, das Verständnis für bitweise Operationen und die Funktionsweise von Funktionen in C++ zu testen.

**Themen:**
- Bitweise Operatoren (`&`, `|`, `^`)
- Schiebeoperatoren (`<<`, `>>`)
- Referenzparameter in Funktionen
- Benutzerdefinierte Datentypen und Operatorüberladung

**Beispielauszug:**
- "Der Schiebeoperator `<<` verschiebt die Bits nach links und verdoppelt somit den Wert der Zahl." (Wahr)

### Aufgabe 1: Bit-Setzer mit Validierung und flexibler Maskierung

In dieser Aufgabe wird eine Funktion erstellt, die ein Bit an einer bestimmten Position entweder auf `1` setzt oder auf `0` zurücksetzt. Die Funktion führt zudem eine Validierung der Bitposition durch und arbeitet sowohl mit 32-Bit- als auch mit 64-Bit-Ganzzahlen.

**Anforderungen:**
- Setzen oder Zurücksetzen eines Bits
- Validierung der Bitposition (muss im gültigen Bereich liegen)
- Unterstützung für 32-Bit- und 64-Bit-Zahlen

**Erweiterungen:**
- Ausgabe einer Fehlermeldung bei ungültiger Bitposition

### Aufgabe 2: Bit-Umkehrer für große Zahlen mit dynamischer Bitbreite

Hier wird eine Funktion entwickelt, die die Bits einer Ganzzahl umkehrt. Dabei kann die Größe der Zahl dynamisch vorgegeben werden (z. B. 8, 16, 32 oder 64 Bit). Die führenden Nullen werden korrekt behandelt.

**Anforderungen:**
- Dynamische Bitbreite (8, 16, 32, 64 Bit)
- Korrekte Behandlung führender Nullen

**Erweiterungen:**
- Validierung zulässiger Bitbreiten

### Aufgabe 3: Bit-Paar-Tausch

Diese Aufgabe befasst sich mit dem Tausch von benachbarten Bit-Paaren einer Zahl. Die Funktion verwendet bitweise Operatoren, um gerade und ungerade Bits zu isolieren und diese dann zu tauschen.

**Anforderungen:**
- Tausche Bit-Paare (Bit 0 mit Bit 1, Bit 2 mit Bit 3, usw.)
- Verwende bitweise Operatoren und Schiebeoperationen

### Aufgabe 4: Anzahl der gesetzten Bits (Popcount)

Die Aufgabe erfordert die Erstellung einer Funktion, die die Anzahl der gesetzten Bits (Bits, die auf `1` stehen) in einer Ganzzahl zählt.

**Anforderungen:**
- Schleife und bitweiser AND-Operator zur Prüfung jedes Bits

**Erweiterungen:**
- Effiziente Zählung der gesetzten Bits

### Aufgabe 5: Zirkuläre Bitverschiebung

In dieser Aufgabe wird eine Funktion geschrieben, die eine Zahl zirkulär nach links verschiebt. Das bedeutet, dass die Bits, die links herausgeschoben werden, wieder rechts eingefügt werden.

**Anforderungen:**
- Zirkuläre Linksverschiebung
- Verwendung von Links- und Rechtsverschiebungen sowie OR-Operationen

### Aufgabe 6: Bitbereich auslesen

Die Funktion extrahiert einen Bitbereich aus einer Ganzzahl. Sie nimmt eine Startposition und eine Länge als Parameter und gibt den entsprechenden Bitbereich zurück.

**Anforderungen:**
- Extrahieren eines Bitbereichs basierend auf Startposition und Länge
- Korrekte Anwendung von Schiebeoperationen und Masken

---

## Installation

1. Klone das Repository:

```bash
git clone https://github.com/aaronAtKt/Cpp_KT-Kurs/tree/master/KT040924Kruemmel/Aufgaben09092024
```

2. Navigiere in das Projektverzeichnis:

```bash
cd Aufgaben09092024
```

3. Kompiliere und führe die Aufgaben mit einem beliebigen C++-Compiler aus:

```bash
g++ aufgabe1.cpp -o aufgabe1
./aufgabe1
```

> Ersetze `aufgabe1.cpp` durch die gewünschte Datei für jede Aufgabe.

## Anforderungen

- C++ Compiler (z. B. GCC oder Clang)
- Grundlegende Kenntnisse in C++ und Bit-Manipulation

## Aufbau der Aufgaben

Jede Aufgabe ist in einer separaten `.cpp`-Datei implementiert, mit vollständigen Kommentaren, die den Code erklären. Die Struktur des Projekts sieht wie folgt aus:

```
├── aufgabe0.md
├── bitberechnung.md
├── aufgabe1.cpp
├── aufgabe2.cpp
├── aufgabe3.cpp
├── aufgabe4.cpp
├── aufgabe5.cpp
├── aufgabe6.cpp
└── README.md
```

## Autor

Ralf Krümmel
