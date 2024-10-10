/*
Lambdas in C++
- anonyme Funktionen (Funktionen ohn Namen)
- Funktionslogik direkt im Code zu definieren, ohne extra die Funktion zu deklarieren und
  zu definieren
- Wenn eine Funktion als Argument/Parameter einer anderen Funktion übergeben wird (std::for_each)
- Funktionslogik loakl in einem bestimmten Kontext definieren

Syntax einer Lambda-Funktion

[capture](parameter) -> return_type { body }

capture wird als konstant erfasst und der initialisierte Wert übergeben
und parameter können verändert werden

capture: Welche Variablen aus der lokalen Umgebung soll die Lambda Funktion verwenden.

[ ]: Keine Variablen erfasst
[=]: Alle Variablen als Wert erfassen
[&]: Alle Variablen als Referenz erfassen
[x]: Nur die Variable x als Wert erfassen
[&x]: Nur die Variable x als Referenz erfassen
[x, y]: Nur die Variablen x und y als Wert erfasst
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main__()
{
    //auto sageHallo = []() {
    //    cout << "Hallo meine Welt!" << endl;
    //    };

    //sageHallo();

    // Lambda-Funktion zum Eingen und Ausdrucken eines Stringinputs
    string line;
    //[](string& line) {
    //    cout << "Geben Sie etwas ein: ";
    //    getline(cin, line);
    //    cout << line << endl;
    //    }(line);

    //cout << "line nach der Lamda-Funktion: " << line << endl;

    //line = { "Das ist der Wert von line" };
    //auto printLine = [line]() {
    //    cout << line << endl;
    //    };

    //printLine();

    auto add = [](int a, int b) -> int { return a + b; };

    //cout << "Summe: " << add(5, 3) << endl;

    // Die Übergabe von const wird umgangen
    /*[=]() mutable {
        line = "Probieres es aus!";
        cout << line << endl;
        }();*/

    /*int x = 10;
    int y = 20;

    auto increase = [&x]() { x++; };
    auto printSum = [x, y]() { cout << "Summe: " << x + y << endl; };

    increase();
    cout << "x: " << x << endl;
    printSum();*/

    vector<int> nummern = { 1,2,3,4,5 };

    for_each(nummern.begin(), nummern.end(), [](int n) {cout << n << " ";});

    return 0;
}
