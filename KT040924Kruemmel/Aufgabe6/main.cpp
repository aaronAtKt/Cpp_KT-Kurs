#include <iostream>  // Bibliothek für die Konsoleneingabe und -ausgabe
#include <iomanip>   // Für die Formatierung der Ausgaben (std::setprecision)
#include <stdexcept> // Für die Verwendung von Exceptions wie std::invalid_argument
#include <limits>    // Für die Verwendung von std::numeric_limits, um Eingabefehler zu behandeln

// Funktion zur Anzeige des Menüs und Einlesen der Auswahl
int zeigeMenü() {
    std::cout << "\n*** Bankkonto Menue ***" << std::endl;
    std::cout << "1. Einzahlung\n2. Abhebung\n3. Kontostand anzeigen\n4. Programm beenden\n";
    std::cout << "Bitte treffen Sie Ihre Wahl: ";
    int wahl;
    std::cin >> wahl;
    return wahl;
}

// Funktion zur Verarbeitung von Ein- und Auszahlungen
void verarbeiteTransaktion(double& kontostand, double betrag, bool istEinzahlung) {
    if (betrag <= 0) {
        throw std::invalid_argument("Ungültiger Betrag! Der Betrag muss eine positive Zahl sein.");
    }
    if (!istEinzahlung && betrag > kontostand) {
        throw std::runtime_error("Abhebung fehlgeschlagen! Nicht genug Guthaben.");
    }
    kontostand += (istEinzahlung ? betrag : -betrag);
}

int main() {
    // Initialisierung von Konstanten und Variablen
    constexpr double INITIAL_BALANCE = 1000.0;  // Startguthaben als Kompilezeit-Konstante
    double kontostand = INITIAL_BALANCE;        // Aktueller Kontostand
    int anzahlTransaktionen = 0;                // Zählt die Anzahl der Transaktionen
    int wahl;                                   // Variable für die Menüauswahl des Benutzers

    // Setzt die Ausgabe von Geldbeträgen auf 2 Dezimalstellen
    std::cout << std::fixed << std::setprecision(2);

    // Schleife für das Menü
    do {
        wahl = zeigeMenü();  // Menü anzeigen und Benutzerwahl einlesen

        // Fehlerbehandlung bei falscher Eingabe
        if (std::cin.fail()) {
            std::cin.clear();  // Setzt den Fehlerstatus des Eingabestreams zurück
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Löscht den Eingabepuffer
            std::cout << "Ungültige Eingabe! Bitte geben Sie eine Zahl ein." << std::endl;
            continue;  // Springt zurück zum Anfang der Schleife
        }

        // Verarbeitung der Benutzerauswahl
        try {
            switch (wahl) {
            case 1: {  // Einzahlung
                double betrag;
                std::cout << "Geben Sie den Einzahlungsbetrag ein: ";
                std::cin >> betrag;

                if (std::cin.fail()) {  // Überprüfung auf ungültige Eingaben
                    throw std::invalid_argument("Ungültige Eingabe! Bitte geben Sie eine gültige Zahl ein.");
                }

                verarbeiteTransaktion(kontostand, betrag, true);  // Einzahlung verarbeiten
                anzahlTransaktionen++;
                std::cout << "Einzahlung erfolgreich! Neuer Kontostand: " << kontostand << " EUR" << std::endl;
                break;
            }
            case 2: {  // Abhebung
                double betrag;
                std::cout << "Geben Sie den Abhebungsbetrag ein: ";
                std::cin >> betrag;

                if (std::cin.fail()) {  // Überprüfung auf ungültige Eingaben
                    throw std::invalid_argument("Ungültige Eingabe! Bitte geben Sie eine gültige Zahl ein.");
                }

                verarbeiteTransaktion(kontostand, betrag, false);  // Abhebung verarbeiten
                anzahlTransaktionen++;
                std::cout << "Abhebung erfolgreich! Neuer Kontostand: " << kontostand << " EUR" << std::endl;
                break;
            }
            case 3: {  // Kontostand anzeigen
                std::cout << "Aktueller Kontostand: " << kontostand << " EUR" << std::endl;
                std::cout << "Anzahl der Transaktionen: " << anzahlTransaktionen << std::endl;
                break;
            }
            case 4: {  // Programm beenden
                std::cout << "Programm wird beendet..." << std::endl;
                break;
            }
            default: {
                throw std::invalid_argument("Ungültige Wahl! Bitte wählen Sie eine gültige Option.");
            }
            }
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Fehler: " << e.what() << std::endl;
        }
        catch (const std::runtime_error& e) {
            std::cerr << "Fehler: " << e.what() << std::endl;
        }

    } while (wahl != 4);  // Schleife läuft, bis der Benutzer 4 wählt (Programm beenden)

    // Abschlussbericht bei Programmende
    std::cout << "\n*** Zusammenfassung ***" << std::endl;
    std::cout << "Startguthaben: " << INITIAL_BALANCE << " EUR" << std::endl;
    std::cout << "Endguthaben: " << kontostand << " EUR" << std::endl;
    std::cout << "Anzahl der Transaktionen: " << anzahlTransaktionen << std::endl;

    return 0;  // Programm erfolgreich beendet
}
