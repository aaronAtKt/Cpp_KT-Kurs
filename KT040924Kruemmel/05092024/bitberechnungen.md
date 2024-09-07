
# Zahlensysteme und Bitmanipulation

In dieser Lektion lernst du, wie du zwischen verschiedenen Zahlensystemen umrechnen kannst und wie Bitmanipulationen funktionieren.

## Zahlensysteme – Schritt-für-Schritt-Umrechnung

### 1. Dezimal zu Binär
Das Binärsystem verwendet nur die Ziffern 0 und 1, die sogenannten Bits. Um eine Dezimalzahl in eine Binärzahl umzuwandeln, teilt man die Zahl durch 2 und merkt sich den Rest (dieser ist immer 0 oder 1). Der Vorgang wird so lange wiederholt, bis das Ergebnis 0 ist.

**Beispiel: Umrechnung von 37 (Dezimal) in Binär**

| Schritt | Division durch 2 | Rest |
| ------- | ---------------- | ---- |
| 1       | 37 ÷ 2 = 18      | 1    |
| 2       | 18 ÷ 2 = 9       | 0    |
| 3       | 9 ÷ 2 = 4        | 1    |
| 4       | 4 ÷ 2 = 2        | 0    |
| 5       | 2 ÷ 2 = 1        | 0    |
| 6       | 1 ÷ 2 = 0        | 1    |

Die Binärdarstellung von 37 ist: **0b100101**

---

### 2. Oktal zu Dezimal
Das Oktalsystem verwendet die Basis 8. Um eine Oktalzahl in eine Dezimalzahl umzuwandeln, multipliziert man jede Stelle mit 8^Position, wobei die Position von rechts nach links gezählt wird.

**Beispiel: Umrechnung von 045 (Oktal) in Dezimal**

| Stelle (von rechts nach links) | Wert der Potenz von 8 | Oktalwert | Berechnung        |
| ------------------------------ | --------------------- | --------- | ----------------- |
| 0 (rechts)                     | 8^0 = 1               | 5         | 5 × 1 = 5         |
| 1                               | 8^1 = 8               | 4         | 4 × 8 = 32        |

**Berechnung:** **32 + 5 = 37**

---

### 3. Hexadezimal zu Dezimal
Das Hexadezimalsystem verwendet die Basis 16. Um eine Hexadezimalzahl in eine Dezimalzahl umzuwandeln, multipliziert man jede Stelle mit 16^Position.

**Beispiel: Umrechnung von 0x25 (Hexadezimal) in Dezimal**

| Stelle (von rechts nach links) | Wert der Potenz von 16 | Hexadezimalwert | Berechnung       |
| ------------------------------ | --------------------- | --------------- | ---------------- |
| 0 (rechts)                     | 16^0 = 1              | 5               | 5 × 1 = 5        |
| 1                               | 16^1 = 16             | 2               | 2 × 16 = 32      |

**Berechnung:** **32 + 5 = 37**

---

## Bitmanipulation – Schritt-für-Schritt-Erklärung

### 1. Linksverschiebung (<<)
Die **Linksverschiebung** verschiebt die Bits einer Zahl um eine bestimmte Anzahl von Positionen nach links. Dies entspricht einer Multiplikation mit 2^Anzahl der Verschiebungen.

**Beispiel: Umrechnung von 0b00100101 << 3**

Die Binärzahl `0b00100101` entspricht der Dezimalzahl **37**. Wir verschieben nun die Bits dieser Zahl um **3 Positionen nach links**.

| Binärstelle | Vor der Verschiebung | Nach der Verschiebung |
| ----------- | -------------------- | --------------------- |
| 5. Stelle   | 1                    | 1                     |
| 4. Stelle   | 0                    | 0                     |
| 3. Stelle   | 0                    | 0                     |
| 2. Stelle   | 1                    | 1                     |
| 1. Stelle   | 0                    | 0                     |
| 0. Stelle   | 1                    | 0                     |
| -           | -                    | 0 (neue Nullen werden hinzugefügt) |

**Berechnung:** Eine Linksverschiebung um 3 Positionen multipliziert die Zahl mit 2^3 = 8.

> **37 × 8 = 296**

Die Binärdarstellung von 296 ist: **0b00101000**

**Visualisierung:**
```
Vorher:    0b00100101   (37 Dezimal)
Nachher:   0b00101000   (296 Dezimal)
```

**Zusammenfassung der Linksverschiebung:**
- `0b00100101` (37 in Dezimal) wird um 3 Stellen nach links verschoben.
- Ergebnis ist `0b00101000` (296 in Dezimal).

---

### 2. Rechtsverschiebung (>>)
Die **Rechtsverschiebung** verschiebt die Bits einer Zahl nach rechts und entspricht einer Division durch 2^Anzahl der Verschiebungen.

**Beispiel: Umrechnung von 0b00101000 >> 3**

Die Binärzahl `0b00101000` entspricht der Dezimalzahl **296**. Wir verschieben nun die Bits dieser Zahl um **3 Positionen nach rechts**.

**Berechnung:** Eine Rechtsverschiebung um 3 Positionen teilt die Zahl durch 2^3 = 8.

> **296 ÷ 8 = 37**

Die Binärdarstellung von 37 ist: **0b00000101**

**Visualisierung:**
```
Vorher:    0b00101000   (296 Dezimal)
Nachher:   0b00000101   (37 Dezimal)
```

**Zusammenfassung der Rechtsverschiebung:**
- `0b00101000` (296 in Dezimal) wird um 3 Stellen nach rechts verschoben.
- Ergebnis ist `0b00000101` (37 in Dezimal).

---

## Zusammenfassung
- **Linksverschiebung** multipliziert die Zahl mit einer Potenz von 2.
- **Rechtsverschiebung** teilt die Zahl durch eine Potenz von 2.
- Die Umrechnung zwischen Zahlensystemen erfordert das Verständnis der Basis und Potenzen.
