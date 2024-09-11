# C++: Zeiger und Arrays

Dieses Repository enthält Aufgaben und Lösungen rund um das Thema Zeiger und Arrays in C++. Jede Aufgabe vertieft ein spezifisches Konzept und wird in der dazugehörigen Lösung ausführlich erklärt und kommentiert.

---

## Aufgabe 0: Aussagen einordnen (Wahr oder Falsch)

Ordnen Sie die folgenden Aussagen als **wahr** oder **falsch** ein und begründen Sie Ihre Antwort:

1. **Ein Zeiger speichert die Adresse einer Variablen.**
2. **Ein `const`-Zeiger kann seinen Wert ändern, aber nicht die Adresse, auf die er zeigt.**
3. **Ein `constexpr` muss während der Kompilierung bekannt sein.**
4. **Ein Array kann nach der Initialisierung seine Größe dynamisch ändern.**
5. **Ein C-String ist ein Array von `char`, das mit dem Nullterminator (`\0`) endet.**
6. **`const` schützt eine Variable nur vor der Modifikation durch den Programmierer, nicht jedoch vor einer Modifikation durch Zeiger.**
7. **Ein Zeiger auf `const` erlaubt keine Änderung der Daten, auf die er zeigt.**
8. **`constexpr`-Variablen können während der Laufzeit geändert werden.**
9. **Zeigerarithmetik kann verwendet werden, um durch die Elemente eines Arrays zu iterieren.**
10. **C-Strings werden immer dynamisch allokiert.**

---

## Aufgabe 1: Array-Manipulation mit Zeigern

Schreiben Sie eine Funktion, die ein Array von Ganzzahlen als Zeiger empfängt, den größten Wert im Array findet und dessen Adresse zurückgibt. Implementieren Sie zusätzlich eine `main`-Funktion, um das Programm zu testen.

### Funktionsprototyp:
```cpp
int* findeGroesstenWert(int* arr, int groesse);
```

---

## Aufgabe 2: Vergleich von `const` und `constexpr`

Schreiben Sie ein Programm, das zeigt, wann es sinnvoll ist, `const` und wann `constexpr` zu verwenden. Erklären Sie in den Kommentaren, warum Sie sich in jedem Fall für das eine oder das andere entschieden haben.

---

## Aufgabe 3: C-Strings und Zeiger

Implementieren Sie eine Funktion, die einen C-String als Eingabe erhält und den String umkehrt, ohne eine zusätzliche Kopie zu erstellen. Verwenden Sie dabei Zeigerarithmetik, um die Zeichen zu tauschen.

---

## Aufgabe 4: Mehrdimensionale Arrays mit Zeigern

Schreiben Sie ein Programm, das ein zweidimensionales Array (Matrix) von `int` mit einer festen Größe (z. B. 3x3) erstellt. Implementieren Sie eine Funktion, die die Matrix transponiert (Zeilen werden zu Spalten), und verwenden Sie dafür Zeigerarithmetik.

### Funktionsprototyp:
```cpp
void transponiereMatrix(int matrix[SIZE][SIZE]);
```

---

## Aufgabe 5: Konstante Zeiger und Speicherverwaltung

Schreiben Sie ein Programm, das dynamisch Speicher für ein Array von `const`-Zeigern auf `int` alloziert. Zeigen Sie, wie der Speicher am Ende korrekt freigegeben wird, und erklären Sie den Unterschied zwischen `const int*` und `int* const` in den Kommentaren.

### Beispiel:
```cpp
constArr[0] = new int(10); 

// Speicherfreigabe
for (int i = 0; i < SIZE; i++) {
    delete constArr[i];
}
```

---

## Aufgabe 6: Zufällige Tabellenkalkulation

Schreiben Sie eine kleine "Tabellenkalkulation". Für die Tabelle ist ein Feld mit 10x10 Einträgen anzulegen. Füllen Sie dieses Feld mit Zufallszahlen im Bereich 0...9. Geben Sie die Tabelle sowie die Zeilen- und Spaltensummen aus. Achten Sie bei der Ausgabe auf eine saubere Formatierung.

### Anforderungen:
- Verwenden Sie `<iomanip>` für die Formatierung.
- Verwenden Sie `<cstdlib>` und `<ctime>` für den Zufallszahlengenerator.

### Beispiel für die Initialisierung des Zufallszahlengenerators:
```cpp
std::srand(std::time(0));
int random_number = std::rand() % 10;
```

---

## Formatierte Ausgabe der Tabelle:
Verwenden Sie `std::setw(2)` für eine saubere Ausgabe der Zahlen und eine Trennlinie zwischen Tabelle und Spaltensummen:
```cpp
std::string(cols * 3, '-');
```





