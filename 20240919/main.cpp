#include <iostream>
#include <cstring>
using namespace std;


int _main(int argc,    //argument count (Anzahl der Argumente von der Kommandozeile)
         char** argv, //argument values (Werte der Argumente) char* argv[] >= 1
         char* envp[])//environment pointer (Zeiger auf Umgebungsvariablen) PATH char** envp (NAME=WERT)
{   
    // Dieser Ansatz ist FALSCH und nicht zulässig.
    //char cValue = 'A';
    //char* pChar = &cValue;
    //argv[1] = pChar;

    /*if (argc != 3) {
        cerr << "Richtige Benutzung: " << argv[0] << " zahl1 zahl2" << endl;
        return -1; // Fehlercode zurückgeben
    }*/

    // Umwandeln der Argumente in Ganzzahlen (arguments to Int-Werte)
    //int zahl1, zahl2;
    //zahl1 = atoi(argv[1]);  // atoi = argument to int
    //zahl2 = atoi(argv[2]);

    /*cout << "Anzahl der Argumente: " << argc << endl;
    for (int i = 0; i < argc; i++) {
        cout << "argv[" << i << "]: " << argv[i] << endl;
    }

    cout << "\nUmgebungsvariablen: " << endl; 
    for (int i = 0; envp[i] != nullptr; i++) {
        cout << "envp[" << i << "]: " << envp[i] << endl;
    }*/

    //int summe = zahl1 + zahl2;
    //cout << "Die Summer der Argumente ist: " << summe << endl;

    const char* gesuchte_variable = "PATH";

    //const char* path = getenv("PATH");

    for (int i = 0; envp[i] != nullptr; i++) {
        // Prüfen, ob der Eintrag mit der gesuchten Variable beginnt
        if (strncmp(envp[i], gesuchte_variable, strlen(gesuchte_variable)) == 0) {
            cout << "Gefundene Umgebungsvariable: envp[" << i << "]: " << envp[i] << endl;
            //break;
        }
    }

    /*if (path != nullptr) {
        cout << "PATH: " << path << endl;
    }
    else {
        cout << "PATH-Var nicht gefunden." << endl;
    }*/

    return 0;
}
