#ifndef PRINT_H    // Verhindert mehrfaches Einbinden der Header-Datei
#define PRINT_H

#include <iostream>  // Für std::cout
#include <cstdio>    // Für printf
using namespace std; // Optional, um den Namensraum std zu nutzen

// Funktion zur Ausgabe eines int-Arrays mit cout
inline void printIntArray(const int* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        cout << array[i];
        if (i < size - 1) {
            cout << ", ";  // Komma zwischen den Werten, aber nicht nach dem letzten
        }
    }
    cout << endl;  // Zeilenumbruch nach der Ausgabe des Arrays
}

// Funktion zur Ausgabe eines short-Arrays mit printf
inline void printShortArray(const short* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");  // Komma zwischen den Werten, aber nicht nach dem letzten
        }
    }
    printf("\n");  // Zeilenumbruch nach der Ausgabe des Arrays
}

// Funktion zur Ausgabe eines C++-Strings mit cout
inline void printString(const string& text) {
    cout << text << endl;
}

// Funktion zur Ausgabe eines C-Strings (char-Array) mit printf
inline void printCString(const char* text) {
    printf("%s\n", text);  // Ausgabe des C-Strings
}

#endif  // PRINT_H
