// Vektoren sind dynamische Arrays, die keine feste Größe haben und sich
// dynamisch der Anzahl der Elemente anpassen (Containertyp)
#include <iostream>
#include <vector>
#include <algorithm>    // Für std::sort

using namespace std;

// Funktionsdeklarationen
void util_vector();
void sort_vector();
void ralf_vector();
void vector_2d();

// main-Funktion
/*int main()
{
    util_vector();
    //sort_vector();
    //ralf_vector();
    //vector_2d();
    return 0;
}*/

// Funktionsdefintionen
void util_vector() {
    vector<int> iVector = { 1, 2, 3, 4, 5 }; // Dynamisches Array von integer-Werten (Deklaration)
    vector<double> dVector; // Leerer Double Vector

    for (int i = 0; i < 100; i++) {
        iVector.push_back(i);   // Fügt i ans Ende von iVector
        iVector[1]++;           // Erhöht den Wert um 1 vor dem Zugriff
    }

    for (auto i = 0; i < iVector.size(); i++) {
        cout << iVector[i] << " ";
    }

    cout << "\nDas dritte Element ist: " << iVector[2] << endl;
    cout << "Auch das dritte Element ist: " << iVector.at(2) << endl; // Zum Aufrufen eines Wertes an einer bestimmten Stelle immer .at() benutzen. Warum? Es ist sicherer.

    iVector.pop_back(); // Entfernt das letzte Element
    cout << "\nDas Array nach dem Entfernen des letzten Wertes:" << endl;
    for (auto i = 0; i < iVector.size(); i++) {
        cout << iVector[i] << " ";
    }

    cout << "\n\nAusgabe mit der range-for-Schleife: " << endl;
    // Ausgabe mit der range-based for Schleife
    for (auto elem : iVector) {     //python: for elem in iVector: print(elem)
        cout << elem << " ";
    }

    cout << "\nWert des 1. Elements: " << &iVector.front()
        << "\nReferenz des letzten Elements: " << &iVector.back() 
        << "\nGroesse des Vektors: " << sizeof(&iVector) << endl;

    iVector.clear();                // Entfernt alle Elemente aus dem Vetor
    for (auto elem : iVector) {     //python: for elem in iVector: print(elem)
        cout << elem << " ";
    }
}

void sort_vector() {
    vector<int> vec = { 50, 20, 40, 10, 30 };

    cout << "Unsortierter Vector: " << endl;
    for (auto elem : vec) {
        cout << elem << " ";
    }

    // sortiert den Vektor
    sort(vec.begin(), vec.end());

    cout << "\n\nSortierter Vector: " << endl;
    for (auto elem : vec) {
        cout << elem << " ";
    }
}

void ralf_vector() {
    vector<int> iVector = { 10, 2, 30, 40, 50 };

    // Schleife, um alle Elemente von iVector auszugeben    
    cout << "Werte im iVector: " << endl;    
    for (auto i = 0; i < iVector.size(); i++) {
        cout << iVector[1]++ << " ";  // Ausgabe der Elemente mit einem Leerzeichen dazwischen    
    }
    // Schleife, um alle Elemente von iVector auszugeben    
    cout << "Werte im iVector: " << endl;    
    for (auto i = 0; i < iVector.size(); i++) {
        cout << iVector[i] << " ";  // Ausgabe der Elemente mit einem Leerzeichen dazwischen     
    }
}

void vector_2d() {

    // dynamischer Vector
    vector<vector<int>> iVector_2d = {
        {1, 2, 3},
        {4, 5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Ausgabe des gesamte Vektors
    for (auto i = 0; i < iVector_2d.size(); i++) {
        for (auto j = 0; j < iVector_2d[i].size(); j++) {
            cout << iVector_2d[i][j] << " ";
        }
        cout << endl;
    }

    // statisches Array
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    array[1][2]; // = 7
}