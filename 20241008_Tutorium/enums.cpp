#include <iostream>
using namespace std;

// Aufzählung für Wochentage mit den Tagen als Konstanten
enum wochentage {
    Montag,     // 0
    Dienstag,   // 1
    Mittwoch,   // 2
    Donnerstag, // 3
    Freitag,    // 4
    Samstag,    // 5
    Sonntag     // 6
};

enum class Farben {
    Rot,
    Blau,
    Gruen
};


int main()
{
    wochentage heute = Dienstag;
    heute = (wochentage) 5;
    Farben meineFarbe = Farben::Blau;

    if (heute == Dienstag)
        cout << "Heute ist Dienstag." << endl;

    if (meineFarbe == Farben::Blau)
        cout << "Die Farbe ist blau." << endl;

    return 0;
}
