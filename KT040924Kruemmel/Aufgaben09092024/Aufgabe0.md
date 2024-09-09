Aufgabe 0: Aussagen einordnen (Wahr oder Falsch)
a) Wahr
Begründung: Bitweise Operatoren wie &, | und ^ funktionieren nur mit Ganzzahlen (z. B. int, short), da sie direkt auf den binären Repräsentationen der Zahlen operieren. Gleitkommazahlen (z. B. float, double) haben eine andere interne Struktur (IEEE-754 Standard) und unterstützen keine bitweisen Operationen.

b) Wahr
Begründung: Der Schiebeoperator << verschiebt die Bits einer Zahl nach links. Jede Verschiebung um eine Position entspricht einer Multiplikation mit 2 bei positiven Ganzzahlen, da jedes Bit eine höhere Potenz von 2 repräsentiert.

c) Falsch
Begründung: Der Schiebeoperator >> halbiert den Wert einer Zahl nur bei positiven Ganzzahlen. Für negative Zahlen wird das höchstwertige Bit abhängig vom Datentyp und Compiler implementierungsabhängig behandelt (arithmetische vs. logische Verschiebung).

d) Falsch
Begründung: C++ unterstützt die Übergabe von Parametern per Referenz. Dies ermöglicht es, eine Funktion so zu definieren, dass Änderungen am Parameter auch außerhalb der Funktion sichtbar sind.

e) Wahr
Begründung: Der Ausdruck x << 1 entspricht einer Multiplikation von x mit 2, da die Bits von x um eine Position nach links verschoben werden, was den Wert effektiv verdoppelt, solange x positiv ist.

f) Wahr
Begründung: In C++ können Operatoren überladen werden, einschließlich der bitweisen Operatoren. Das bedeutet, dass benutzerdefinierte Datentypen (wie Klassen) auch bitweise Operatoren wie &, |, ^ unterstützen können, wenn diese überladen werden.

g) Falsch
Begründung: Funktionen in C++ können Funktionszeiger als Parameter akzeptieren. Dies ermöglicht es, Funktionen als Argumente an andere Funktionen zu übergeben.

h) Wahr
Begründung: Der bitweise XOR-Operator ^ ergibt 1, wenn die beiden Bits unterschiedlich sind, und 0, wenn sie gleich sind.

i) Wahr
Begründung: C++ bietet die Klasse std::bitset in der Standardbibliothek, um einzelne Bits zu manipulieren. Sie ermöglicht einfache Bitoperationen wie Setzen, Rücksetzen und Abfragen von Bits.

j) Falsch
Begründung: Der Schiebeoperator << wird nicht nur zur Bitmanipulation verwendet, sondern auch in der Standardbibliothek für die Ausgabe über std::cout. Beispielsweise ist std::cout << "Text" eine gängige Methode, um Texte auf der Konsole auszugeben.