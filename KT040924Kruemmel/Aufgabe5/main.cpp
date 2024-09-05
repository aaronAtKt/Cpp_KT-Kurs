#include <iostream>  // Für die Ein- und Ausgabe auf der Konsole
#include <limits>    // Für Fehlerbehandlung bei der Eingabe

int main() {
    // 1. Teil: Temperaturumrechnung von Celsius in Fahrenheit und Kelvin
    const double ABSOLUTER_NULLPUNKT = -273.15;  // Was: Definiert die Konstante für den absoluten Nullpunkt in Celsius.
    // Warum: Der absolute Nullpunkt ist die niedrigste mögliche Temperatur.

    double celsius;  // Was: Deklaration der Variable für die Eingabe der Temperatur in Celsius.

    std::cout << "Bitte geben Sie die Temperatur in Celsius ein: ";  // Aufforderung zur Eingabe der Temperatur.
    std::cin >> celsius;  // Einlesen der Temperatur.

    // Überprüfen, ob die Eingabe gültig ist
    if (celsius < ABSOLUTER_NULLPUNKT) {
        std::cout << "Fehler: Die Temperatur liegt unter dem absoluten Nullpunkt!" << std::endl;  // Ausgabe einer Fehlermeldung.
        return 1;  // Programm mit Fehlercode beenden.
    }

    // Umrechnung in Fahrenheit und Kelvin
    double fahrenheit = (celsius * 9 / 5) + 32;  // Formel zur Umrechnung von Celsius in Fahrenheit.
    double kelvin = celsius - ABSOLUTER_NULLPUNKT;  // Umrechnung von Celsius in Kelvin.

    // Ausgabe der umgerechneten Temperaturen
    std::cout << "Temperatur in Fahrenheit: " << fahrenheit << std::endl;  // Ausgabe der Temperatur in Fahrenheit.

    std::cout << "Temperatur in Kelvin: " << kelvin << std::endl;  // Ausgabe der Temperatur in Kelvin.

    // 2. Teil: Längenumrechnung
    double meter;  // Was: Deklaration der Variable für die Eingabe der Länge in Metern.
    std::cout << "Bitte geben Sie die Länge in Metern ein: ";  // Aufforderung zur Eingabe der Länge.
    std::cin >> meter;  // Einlesen der Länge.

    if (meter < 0) {
        std::cout << "Fehler: Die Länge darf nicht negativ sein!" << std::endl;  // Fehlerausgabe bei negativen Werten.
        return 1;  // Programm mit Fehlercode beenden.
    }

    // Umrechnungen in verschiedene Einheiten
    double zentimeter = meter * 100;  // 1 Meter = 100 Zentimeter.
    double millimeter = meter * 1000;  // 1 Meter = 1000 Millimeter.
    double kilometer = meter / 1000;  // 1 Meter = 0.001 Kilometer.

    // Ausgabe der umgerechneten Längen
    std::cout << "Länge in Zentimetern: " << zentimeter << std::endl;  // Ausgabe in Zentimetern.

    std::cout << "Länge in Millimetern: " << millimeter << std::endl;  // Ausgabe in Millimetern.

    std::cout << "Länge in Kilometern: " << kilometer << std::endl;  // Ausgabe in Kilometern.

    // 3. Teil: Gewichtsumrechnung
    double kilogramm;  // Was: Deklaration der Variable für das Gewicht.
    std::cout << "Bitte geben Sie das Gewicht in Kilogramm ein: ";  // Eingabeaufforderung.
    std::cin >> kilogramm;  // Einlesen des Gewichts.

    if (kilogramm < 0) {
        std::cout << "Fehler: Das Gewicht darf nicht negativ sein!" << std::endl;  // Fehlerausgabe bei negativen Gewichten.
        return 1;  // Programm mit Fehlercode beenden.
    }

    // Umrechnung in Gramm und Tonnen
    double gramm = kilogramm * 1000;  // 1 Kilogramm = 1000 Gramm.
    double tonnen = kilogramm / 1000;  // 1 Kilogramm = 0.001 Tonnen.

    // Ausgabe der umgerechneten Gewichte
    std::cout << "Gewicht in Gramm: " << gramm << std::endl;  // Ausgabe in Gramm.

    std::cout << "Gewicht in Tonnen: " << tonnen << std::endl;  // Ausgabe in Tonnen.

    return 0;  // Programm erfolgreich beendet
}
