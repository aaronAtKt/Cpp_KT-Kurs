#define NDEBUG  // Deaktiviert alle Assertions in der Datei

#include <iostream>
#include <stdexcept>
#include <cassert>  // Nur füden Debug / Entwicklungsmodus! Nicht für die finale Release Version
#include <optional> // Erst Verfügbar ab C++-17 Version oder neuer
#include <variant>  // Erst Verfügbar ab C++-17 Version oder neuer
#include <string>
using namespace std;

int divide(int, int, int &);
int divide_except(int, int);
int divide_assert(int, int);
void outer_function();
optional<int> divide_opt(int, int);
variant<int, string> divide_var(int, int);
void rest();

int _main()
{
    auto result = divide_var(10, 0);

    if (holds_alternative<string>(result)) {
        cout << get<string>(result) << endl;
    }
    else {
        cout << "Ergebnis: " << get<int>(result) << endl;
    }
    
    return 0;
}


int divide(int a, int b, int &result) {
    if (b == 0) {
        return -1; // Fehlercode für Division durch 0
    }
    result = a / b;
    return 0; // Erfolg
}

void rest() {
    /*int result = 0;
int error = divide(10, 5, result);

if (error != 0) {
    cerr << "Fehler: Division durch 0!" << endl;
}
else {
    cout << "Ergebnis: " << result << endl;
}*/
    int ergebnis = 0, divident = 0, divisor = 0, errResult = 0;

    // Exception Behandlung
    try {
        if (divisor == 0) {
            throw "Fehler: Division durch Null (intern)";
        }
        ergebnis = divident / divisor;
        errResult = 0;
    }


    catch (const char* errMsg) {   // Für const char * Exceptions
        cout << errMsg << endl;
        errResult = -1;
    }


    catch (...) {   // Für alle möglichen Exceptions
        cout << "Unbekannter Fehler";
        errResult = -2;
    }

    //return errResult;
    /*------------------------------------------------------------*/
    try {
        outer_function();
    }
    catch (const exception& e) {    // Einen allgemeinen Fehler / Ausnahme abzufangen
        cerr << "Fehler in der main-Funktion abgefangen: " << e.what() << endl;
    }
    catch (...) {       // Einen Unbekannten Fehler / Ausnahme abzufangen
        cerr << "Ein unbekannter Fehler ist aufgetreten!" << endl;
    }
    /*------------------------------------------------------------*/
    int result = divide_assert(10, 2); // Kein Fehler
    cout << "Ergebnis: " << result << endl;

    result = divide_assert(10, 0); // Hier wird die Assertion fehlschlagen
    cout << "Ergebnis 2: " << result << endl;
    /*------------------------------------------------------------*/
    /*auto result = divide_opt(10, 0);
    if (result) {
        cout << "Ergebnis: " << *result << endl;
    }
    else {
        cerr << "Fehler: Division durch 0!" << endl;
    }*/
}

int divide_except(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division durch 0 im inneren try-Block!");
    }
    return a / b;
}

void outer_function() {
    try {
        // Äußerer try-Block
        try {
            // Innerer try-Block
            int result = divide_except(10, 0);
            cout << "Ergebnis: " << result << endl;
        }
        catch (const runtime_error& re) {
            cerr << "Innerer Fehler abgefangen: " << re.what() << endl;
            throw logic_error("Neuer Fehler im aeusseren try-Block!");
        }
    }
    catch (const logic_error& le) {
        cerr << "Aeusserer Fehler abgefangen: " << le.what() << endl;
    }
}

int divide_assert(int a, int b) {
    assert(b != 0 && "Division durch 0!"); // Überprüft, ob b ungleich 0 ist
    return a / b;
}

optional<int> divide_opt(int a, int b) {
    if (b == 0) {
        return nullopt; // Kein Wert
    }
    return a / b;
}

variant<int, string> divide_var(int a, int b) {
    if (b == 0) {
        return "Fehler: Division durch 0!";
    }
    return a / b;
}