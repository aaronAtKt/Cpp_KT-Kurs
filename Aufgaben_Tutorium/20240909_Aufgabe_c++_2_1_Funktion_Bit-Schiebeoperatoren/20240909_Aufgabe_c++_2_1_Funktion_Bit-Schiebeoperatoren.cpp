#include <iostream>
#include <limits> // Für std::numeric_limits

// Funktion mit einem Fehlerfall, bei dem -1 zurückgegeben wird
unsigned long long berechneEtwas(int eingabe) {
    if (eingabe < 0) {
        // Rückgabe von -1 als Fehlerfall (das entspricht dem maximalen Wert für unsigned long long)
        return static_cast<unsigned long long>(-1);
    }

    // Beispielrechnung
    return static_cast<unsigned long long>(eingabe) * 2;
}

int notmain() {
    int wert;
    std::cout << "Geben Sie eine Zahl ein: ";
    std::cin >> wert;

    // Rückgabewert der Funktion speichern
    unsigned long long ergebnis = berechneEtwas(wert);

    // Prüfen, ob der Rückgabewert -1 (als max. unsigned long long Wert) ist
    if (ergebnis == std::numeric_limits<unsigned long long>::max()) {
        std::cout << "Fehler: Ungültiger Wert (Rückgabewert -1 als Fehlercode)." << std::endl;
    }
    else {
        std::cout << "Ergebnis: " << ergebnis << std::endl;
    }

    return 0;
}
