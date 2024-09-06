#include <iostream>  // Bibliothek für Ein- und Ausgabe
#include <string>    // Bibliothek für die Verwendung von std::string

int main() {
    // 1. Deklaration einer Ganzzahl-Variable und Initialisierung
    int age = 25;  // Was: Deklaration und Initialisierung der Ganzzahl-Variable "age" mit dem Wert 25.
    // Warum: Speichert das Alter einer Person.

    // 2. Deklaration einer Gleitkommazahl-Variable und Initialisierung
    double height = 1.75;  // Was: Deklaration und Initialisierung einer Gleitkommazahl-Variable "height".
    // Warum: Speichert die Körpergröße in Metern.

    // 3. Deklaration einer Zeichen-Variable und Initialisierung
    char initial = 'A';  // Was: Deklaration der Zeichen-Variable "initial" und Initialisierung mit 'A'.
    // Warum: Speichert den ersten Buchstaben eines Namens.

    // 4. Deklaration einer Zeichenketten-Variable (String) und Initialisierung
    std::string name = "Max";  // Was: Deklaration einer Zeichenkette (std::string) und Initialisierung mit "Max".
    // Warum: Speichert den Namen als String.

    // 5. Deklaration einer booleschen Variable und Initialisierung
    bool isStudent = true;  // Was: Deklaration einer booleschen Variable "isStudent" und Initialisierung mit true.
    // Warum: Speichert den Wahrheitswert, ob jemand ein Student ist oder nicht.

    // Ausgabe der Werte auf der Konsole
    std::cout << "Alter: " << age << std::endl;  // Was: Ausgabe des Alters auf der Konsole.
    // Wie: Der Operator `<<` gibt die Daten auf der Konsole aus.

    std::cout << "Größe: " << height << " Meter" << std::endl;  // Was: Ausgabe der Größe.

    std::cout << "Anfangsbuchstabe: " << initial << std::endl;  // Was: Ausgabe des Anfangsbuchstabens.

    std::cout << "Name: " << name << std::endl;  // Was: Ausgabe des Namens.

    std::cout << "Ist Student: " << (isStudent ? "Ja" : "Nein") << std::endl;  // Was: Ausgabe, ob die Person ein Student ist.

    return 0;  // Programm erfolgreich beendet
}
