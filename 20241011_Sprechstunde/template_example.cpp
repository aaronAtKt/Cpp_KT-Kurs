#include <iostream>
using namespace std;

/**
 * @brief Allgemeines Template für die Additionsfunktion.
 *
 * Templates in C++ ermöglichen es uns, generischen Code zu schreiben,
 * der mit verschiedenen Datentypen funktioniert. Anstatt mehrere
 * Funktionen für verschiedene Datentypen zu schreiben (z.B. eine für
 * int, eine für double usw.), können wir ein Template erstellen, das
 * für alle Datentypen funktioniert.
 *
 * @tparam T Der generische Datentyp. C++ ersetzt dieses T automatisch durch den spezifischen Datentyp zur Laufzeit.
 * @param a Erster Wert, der addiert werden soll.
 * @param b Zweiter Wert, der addiert werden soll.
 * @return T Die Summe der beiden Werte.
 */
template <typename T>
T add(T a, T b) {
    return a + b;
}

/**
 * @brief Spezialisierung des Templates für das Addieren von C-Strings.
 *
 * Obwohl Templates generisch sind, gibt es Situationen, in denen bestimmte
 * Datentypen eine spezielle Behandlung erfordern. In diesem Fall müssen C-Strings
 * (char Arrays) anders behandelt werden, da sie keine eingebauten Operatoren für
 * die Addition (Verkettung) haben.
 *
 * Diese Template-Spezialisierung definiert eine spezielle Version der add-Funktion,
 * die nur für `const char*` verwendet wird. Wir konvertieren die C-Strings zu
 * C++-Strings, führen die Verkettung durch und geben das Ergebnis zurück.
 *
 * @param a Erster C-String.
 * @param b Zweiter C-String.
 * @return const char* Verkettetes Ergebnis als C-String.
 */
template <>
const char* add<const char*>(const char* a, const char* b) {
    // Die Verwendung von static sorgt dafür, dass die Zeichenfolge während der gesamten Programmlaufzeit erhalten bleibt
    static string result;
    result = string(a) + string(b);  // Verkettung der beiden Strings
    cout << "Adresse von result: " << &result << endl;
    return result.c_str();  // Rückgabe als const char*
}

/**
 * @brief Überladung des Templates für drei Werte.
 *
 * Templates können auch überladen werden, was bedeutet, dass wir mehrere
 * Versionen derselben Funktion mit unterschiedlichen Parameteranzahlen oder
 * -typen definieren können. Diese Funktion addiert drei Werte.
 *
 * @tparam T Der generische Datentyp.
 * @param a Erster Wert, der addiert werden soll.
 * @param b Zweiter Wert, der addiert werden soll.
 * @param c Dritter Wert, der addiert werden soll.
 * @return T Die Summe der drei Werte.
 */
template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main() {
    // Beispiel 1: Nutzung des allgemeinen Templates für int
    // Hier ersetzt der Compiler das T durch int und erzeugt eine Funktion, die mit int-Werten funktioniert.
    cout << "Addition von zwei int: " << add(3, 4) << endl;

    // Beispiel 2: Nutzung des allgemeinen Templates für double
    // Der Compiler ersetzt T durch double. Dies zeigt, wie Templates für verschiedene Typen verwendet werden können.
    cout << "Addition von zwei double: " << add(3.5, 4.5) << endl;

    // Beispiel 3: Nutzung der spezialisierten Version für C-Strings
    // Da es keine allgemeine Methode zur Addition von C-Strings gibt, wird hier die spezialisierte Version aufgerufen.
    cout << "Addition von zwei C-Strings: " << add("Hallo", " Welt") << endl;

    cout << "zweiter Aufruf von C-Strings: " << add(" Zweiter", " Aufruf") << endl;

    // Beispiel 4: Nutzung der überladenen Version der Funktion für drei int-Werte
    // Hier wird die überladene Funktion aufgerufen, die drei Parameter statt zwei akzeptiert.
    cout << "Addition von drei int: " << add(1, 2, 3) << endl;

    return 0;
}