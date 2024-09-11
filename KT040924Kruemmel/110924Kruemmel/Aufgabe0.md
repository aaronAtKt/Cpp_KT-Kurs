Aufgabe 0: Aussagen einordnen (Wahr oder Falsch)
a) Ein Zeiger speichert die Adresse einer Variablen.

Wahr. Ein Zeiger ist eine Variable, die die Adresse einer anderen Variablen speichert, d. h., er zeigt auf die Speicheradresse, wo der Wert der Variablen gespeichert ist.
b) Ein const-Zeiger kann seinen Wert �ndern, aber nicht die Adresse, auf die er zeigt.

Falsch. Ein const-Zeiger (also int* const ptr) kann die Adresse, auf die er zeigt, nicht �ndern, aber er kann die Werte an der Adresse �ndern.
c) Ein constexpr muss w�hrend der Kompilierung bekannt sein.

Wahr. constexpr bedeutet, dass der Wert zur Kompilierzeit bekannt sein muss, um eine Optimierung durch den Compiler zu erm�glichen.
d) Ein Array kann nach der Initialisierung seine Gr��e dynamisch �ndern.

Falsch. Ein statisches Array in C++ hat eine feste Gr��e und kann seine Gr��e nach der Initialisierung nicht �ndern.
e) Ein C-String ist ein Array von char, das mit dem Nullterminator (\0) endet.

Wahr. C-Strings sind char-Arrays, die mit einem Nullterminator (\0) enden, um das Ende des Strings zu markieren.
f) const sch�tzt eine Variable nur vor der Modifikation durch den Programmierer, nicht jedoch vor einer Modifikation durch Zeiger.

Falsch. const sch�tzt auch vor Modifikationen durch Zeiger, wenn der Zeiger auf eine const-Variable zeigt.
g) Ein Zeiger auf const erlaubt keine �nderung der Daten, auf die er zeigt.

Wahr. Ein Zeiger auf const (z. B. const int* ptr) erlaubt keine Modifikation der Daten, auf die er zeigt.
h) constexpr-Variablen k�nnen w�hrend der Laufzeit ge�ndert werden.

Falsch. constexpr-Variablen sind zur Kompilierzeit festgelegt und k�nnen zur Laufzeit nicht mehr ge�ndert werden.
i) Zeigerarithmetik kann verwendet werden, um durch die Elemente eines Arrays zu iterieren.

Wahr. Zeigerarithmetik erm�glicht es, durch die Elemente eines Arrays zu iterieren, da Arrays zusammenh�ngend im Speicher abgelegt sind.
j) C-Strings werden immer dynamisch allokiert.

Falsch. C-Strings k�nnen sowohl statisch (im Stack-Speicher) als auch dynamisch (im Heap-Speicher) allokiert werden.