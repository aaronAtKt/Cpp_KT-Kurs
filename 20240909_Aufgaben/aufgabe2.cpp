#include <iostream>
#include <bitset>

using namespace std;
// Kehrt die Bits einer Ganzzahl um, abhängig von der angegebenen Bitbreite
unsigned long long reverseBits(unsigned long long number, int bitWidth);

/* int main()
{
    unsigned long long num = 42;    // Bsp.-Zahl: 00 101010
    int bitWith = 8;

    unsigned long long res = reverseBits(num, bitWith);
    bitset<8> binary(res);
    bitset<8> num_bin(num);

    cout << "Ergebnis vor  der Umkehrung der Bits: " << num_bin << endl;
    cout << "Ergebnis nach der Umkehrung der Bits: " << binary << endl;

    // Umkehrung einer 32-Bit-Zahl
    num = 123456789;    // Binärzahl: 00000 111 0101 1011 1100 1101 0001 0101
    res = reverseBits(num, 32);
    bitset<32> num_bin32(num);
    bitset<32> binary1(res);

    cout << "Ergebnis vor  der Umkehrung der 32-Bit-Zahl: " << num_bin32 << endl;
    cout << "Ergebnis nach der Umkehrung der 32-Bit-Zahl: " << binary1 << endl;
    return 0;
}


unsigned long long reverseBits(unsigned long long number, int bitWidth) {
    unsigned long long reversed = 0;

    // Validierung
    if (bitWidth != 8 && bitWidth != 16 && bitWidth != 32 && bitWidth != 64) {
        cerr << "Fehler: Ungültige Bitbreite. Zulässige sind 8, 16, 32, 64." << endl;
        return number;  // -1 als Normalfall, hier jedoch unsigned
    } 

    // Bit-Umkehrung nur über die angegebene Bitbreite
    for (int i = 0; i < bitWidth; i++) {
        // Überprüfung/Validierung, ob aktuelles Bit gesetzt ist
        if (number & (1ULL << i)) {
            // Setzt das Bit an der spiegelverkehrten Position gesetzt
            reversed |= (1ULL << (bitWidth - 1 - i));
        }
    }

    return reversed;
}*/