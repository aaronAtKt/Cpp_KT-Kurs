#include <iostream>  // Für die Konsolenausgabe

int main() {
    // 1. Definieren einer Konstanten für den Wert von Pi
    const double PI = 3.14159;  // Was: Definiert eine Konstante PI mit dem Wert 3.14159.
    // Warum: Konstanten werden verwendet, um Werte festzulegen, die sich im Programm nicht ändern dürfen.

    // 2. Deklaration einer Variable für den Radius des Kreises
    double radius = 5.0;  // Was: Deklaration der Variable "radius" und Initialisierung mit 5.0.
    // Warum: Der Radius wird benötigt, um die Fläche zu berechnen.

    // 3. Berechnung der Fläche des Kreises
    double flaeche = PI * radius * radius;  // Was: Berechnung der Fläche mit der Formel PI * radius^2.
    // Warum: Um die Fläche des Kreises zu berechnen.

    // 4. Ausgabe des Radius und der berechneten Fläche
    std::cout << "Radius: " << radius << std::endl;  // Was: Ausgabe des Radius.

    std::cout << "Fläche des Kreises: " << flaeche << std::endl;  // Was: Ausgabe der Fläche.

    return 0;  // Programm erfolgreich beendet
}
