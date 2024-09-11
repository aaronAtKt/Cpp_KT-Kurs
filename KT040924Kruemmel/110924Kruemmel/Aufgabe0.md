Aufgabe 0: Aussagen einordnen (Wahr oder Falsch)
a) Ein Zeiger speichert die Adresse einer Variablen.

Wahr. Ein Zeiger ist eine Variable, die die Adresse einer anderen Variablen speichert, d. h., er zeigt auf die Speicheradresse, wo der Wert der Variablen gespeichert ist.
b) Ein const-Zeiger kann seinen Wert ändern, aber nicht die Adresse, auf die er zeigt.

Falsch. Ein const-Zeiger (also int* const ptr) kann die Adresse, auf die er zeigt, nicht ändern, aber er kann die Werte an der Adresse ändern.
c) Ein constexpr muss während der Kompilierung bekannt sein.

Wahr. constexpr bedeutet, dass der Wert zur Kompilierzeit bekannt sein muss, um eine Optimierung durch den Compiler zu ermöglichen.
d) Ein Array kann nach der Initialisierung seine Größe dynamisch ändern.

Falsch. Ein statisches Array in C++ hat eine feste Größe und kann seine Größe nach der Initialisierung nicht ändern.
e) Ein C-String ist ein Array von char, das mit dem Nullterminator (\0) endet.

Wahr. C-Strings sind char-Arrays, die mit einem Nullterminator (\0) enden, um das Ende des Strings zu markieren.
f) const schützt eine Variable nur vor der Modifikation durch den Programmierer, nicht jedoch vor einer Modifikation durch Zeiger.

Falsch. const schützt auch vor Modifikationen durch Zeiger, wenn der Zeiger auf eine const-Variable zeigt.
g) Ein Zeiger auf const erlaubt keine Änderung der Daten, auf die er zeigt.

Wahr. Ein Zeiger auf const (z. B. const int* ptr) erlaubt keine Modifikation der Daten, auf die er zeigt.
h) constexpr-Variablen können während der Laufzeit geändert werden.

Falsch. constexpr-Variablen sind zur Kompilierzeit festgelegt und können zur Laufzeit nicht mehr geändert werden.
i) Zeigerarithmetik kann verwendet werden, um durch die Elemente eines Arrays zu iterieren.

Wahr. Zeigerarithmetik ermöglicht es, durch die Elemente eines Arrays zu iterieren, da Arrays zusammenhängend im Speicher abgelegt sind.
j) C-Strings werden immer dynamisch allokiert.

Falsch. C-Strings können sowohl statisch (im Stack-Speicher) als auch dynamisch (im Heap-Speicher) allokiert werden.