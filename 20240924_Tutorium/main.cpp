#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int, int, int &);
int divide_except(int, int);
void outer_function();
void rest();

int main()
{
    try {
        outer_function();
    }
    catch (const exception& e) {
        cerr << "Fehler in der main-Funktion abgefangen: " << e.what() << endl;
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