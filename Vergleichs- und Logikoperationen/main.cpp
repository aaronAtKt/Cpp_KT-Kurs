#include <iostream>
using namespace std;

int main()
{
    int zahl1 = 4, zahl2 = 6;

    if (zahl1 <= zahl2 || zahl1 < zahl2) {       // < / <=
        cout << "Zahl1 ist kleiner gleich oder kleiner als Zahl2.";
    }
    else if (zahl1 >= zahl2 && zahl1 > zahl2) {  // > / >=
        cout << "Zahl1 ist groesser gleich und groesser als Zahl2.";
    }
    else if (!(zahl1 == zahl2)) {       // ! = not Ergebnis gleich Zeile 17
        cout << "Nicht Zahl1 ist gleich Zahl2.";
    }
    else if (zahl1 != zahl2) {
        cout << "Zahl1 ist ungleich Zahl2.";
    }
    else {
        cout << "Zahl1 ist nicht kleiner als Zahl2.";
    }

    // spaceship-Operator <=>

    char var = 0x80;
    bool res = (var == 0x80);

    cout << "\n\n" << res << endl;

    // Was wird ausgegeben?
    res = (0xFFFF'FF80 == 0x0000'0080); // (-80 == 128)

    (1.1 / 3.) == (22. / (3. * 20.)); // nicht gleich
    5.3123456789123456789 == 5.3123456789123456789; // Lösung round();

    return 0;
}
