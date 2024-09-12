#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// Funktionsdeklarationen
// <Rückgabedatentyp> <Name der fkt>(<dtype> param1, <dtype> param2, ....);
int setBit(int number, int position);
int clearBit(int, int);
bool checkBit(int, int);

// Hauptfunktion
/*int main()
{
    int number = 0b1010; // Zur Basis 10 = 10
    int position = 2;
    bitset<4> binary = number; // Zahl in binär umwandeln
    bitset<4> bin_position(position);

    cout << "Verschiebung: 0b0001 << 0b" << bin_position 
         << " = 0b" << bitset<4>(1 << 2) << endl;
    cout << "Urspruengliche Zahl: 0b" << binary 
        << " | 0b0100" << endl;
    
    // Setze Bit an Position 2
    binary = setBit(number, position);
    cout << "Nach dem Setzen von Bit " << position
        << ": 0b" << binary << endl;

    // Lösche Bit an Position 1
    position = 1;
    string binStr = "1110";
    binary = clearBit(number, position);
    cout << "Nach dem Löschen von Bit " << position
        << ": 0b" << binary << endl;

    // Überprüfe, ob Bit an Position 3 gesetzt ist
    position = 3;
    if (checkBit(number, position)) {
        cout << "Bit " << position << " ist gesetzt.";
    }
    else {
        cout << "Bit " << position << " ist nicht gesetzt.";
    }
    binary = number;
    cout << "Binärzahl: 0b" << binary << endl;


    return 0;
}*/

// Funktionsdefinitionen
// Bit auf 1 setzen
int setBit(int number, int position) {
    int returnValue = 0;
    returnValue = number | (1 << position);
    // 0b1010 | (0b0001 << 2 = 0b0100)
    return returnValue;
}

// Bit auf 0 setzen (Bit löschen)
int clearBit(int number, int position) {
    return number & ~(1 << position);
    // 0b1010 & ~(0b0001 << 1 = 0b0010)
    // 0b1010 & 0b1101 = 0b1000
}

// Überprüfen, ob ein Bit gesetzt ist
bool checkBit(int number, int position) {
    return (number & (1 << position)) != 0;
}