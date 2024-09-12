#include <iostream>
#include <bitset>

using namespace std;

unsigned long long reverseBits(unsigned long long number, int bitWidth);

int main()
{
    auto number1{ 0b00101101ull };
    bitset<8> number1_binary(number1);

    cout << "number1 vor Funktionsaufruf:  0b" << number1_binary << endl;

    number1_binary = reverseBits(number1, 8);

    cout << "number1 nach Funktionsaufruf: 0b" << number1_binary << endl;


    auto number2 { 0b0000100000101101ull };
    bitset<16> number2_binary(number2);

    cout << "\nnumber2 vor Funktionsaufruf:  0b" << number2_binary << endl;

    number2_binary = reverseBits(number2, 16);

    cout << "number2 nach Funktionsaufruf: 0b" << number2_binary << endl;

    auto number3{ 0b00001000001011010000100000101101ull };
    bitset<32> number3_binary(number3);

    cout << "\nnumber3 vor Funktionsaufruf:  0b" << number3_binary << endl;

    number3_binary = reverseBits(number3, 32);

    cout << "number3 nach Funktionsaufruf: 0b" << number3_binary << endl;

    return 0;
}

unsigned long long reverseBits(unsigned long long number, int bitWidth) {

    // Zähler für die Anzahl an Nullen vor dem ersten Bit 
    // Initialisiere mit 1 wenn die erste Stelle von links eine 0 ist, ansonsten mit 0
    int zeroCount = ((number & (1ULL << (bitWidth - 1))) == 0) ? 1 : 0;

    // Validierung
    if (bitWidth != 8 && bitWidth != 16 && bitWidth != 32 && bitWidth != 64) {
        cerr << "Fehler: Ungueltige Bitbreite. Zulaessige sind 8, 16, 32, 64" << endl;
        return number;
    }

    // Schleife beginnt links von number
    for (int i = bitWidth - 1; i >= 0; --i) {
        // Bei zwei aufeinanderfolgenden Nullen, erhöhe Zähler für Nullen
        if (((number & (1ULL << i)) == 0) && ((number & (1ULL << (i - 1))) == 0)) {
            zeroCount++;
        }
        // Gibt es keine aufeinanderfolgende Nullen, verlasse for-Schleife
        else {
            break;
        }
    }
    // Test-Ausgabe für Anzahl an Nullen vor dem ersten Bit
    cout << "Anzahl Nullen: " << zeroCount << endl;

        // Variable für die erste Stelle der Bits, ergibt sich aus Differenz von Bitbreite und zeroCount
        int positionFirstBit = bitWidth - zeroCount;

    // Schleife startet rechts und läuft bis einschließlich zur ersten Stelle mit Bit
    for (int i = 0; i < positionFirstBit; ++i) {
        // Alle 1 und 0 werden durch ein exlusives Oder negiert
        number ^= (1ULL << i);  // Warum nicht '~'? weil geht nur für ein Argument
    }

    // Gibt die veränderte number zurück - die Nullen zu Beginn bleiben erhalten
    return number;
}