#include <iostream>
#include <iomanip>

int main()
{
    // dezimale Zahlen haben die Ziffern 0 ... 9 (Normales Zahlensystem)
    // binäre Zahlen bestehen nur aus 0 und 1
    // oktale Zahlen bestehen von 0 ... 7
    // hexadezimale Zahlen bestehen von 0 ... F
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
    // 0x10 = 0d16 = 1 * 16^1 + 0 * 16^0
    // 32 16 8 4 2 1 0
    // 0b0000 0111 = 0x07
    // 0b000 000 111 = \07
    // & und; | oder; ^ exklusives oder; ~ not/Invertierung
    // 0b00100101 & 0b10010101 = 0b00000101
    // 0b00100101 & UND
    // 0b10010101
    //=0b00000101 
    // &: Liefert an den Stellen eine '1' an denen zahl1 und zahl2 eine '1' besitzen, sonst '0'

    // 0b00100101 | ODER
    // 0b10010101
    //=0b10110101
    // |: Liefert an den Stellen eine '1' an denen zahl1 oder zahl2 eine '1' besitzen, sonst '0'

    // 0b00100101 ^ XOR / Exklusives Oder
    // 0b10010101
    //=0b10110000
    // ^: Liefert an den Stellen eine '1' an denen zahl1 und zahl2 unterschiedliche Bits haben, sonst '0'

    // ~0b00100101
    // =0b11011010
    // ~: Dreht alle Bits um. '1' werden zu '0' und umgekehrt.

    // Schiebeoperationen
    // <<: Verschiebt die Bits in zahl1 um zahl2 Poisitonen nach links
    //     Multiplikation zur Basis 2 mit Exponent als zahl2:
    //      <zahl1> *= 2^<zahl2>
    int zahl1 = 0b00100101; //binäres Literal
    zahl1 = zahl1 << 3; //0b00101000
    // zahl1 <<= 3; // zahl1 *= 2^3;

    std::cout << "Ganzzahl zur Basis 10: '010'" << zahl1
        << "\nGanzzahl zur Basis 16: 0x" << std::hex << std::uppercase
        << zahl1 << std::endl << "Ganzzahl zur Basis 10: '010'"
        << std::dec << zahl1 << std::endl;

    // >>: Verschiebt die Bits in zahl1 um zahl2 Poisitonen nach rechts
    //     Division zur Basis 2 mit Exponent als zahl2:
    //      <zahl1> /= 2^<zahl2>
    zahl1 = zahl1 >> 3; //0b00000100
    // zahl1 >>= 3; // zahl1 /= 2^3 => zahl1 /= 8;

    std::cout << "Ganzzahl zur Basis 10: '010'" << zahl1
        << "\nGanzzahl zur Basis 16: 0x" << std::hex << std::uppercase
        << zahl1 << std::endl << "Ganzzahl zur Basis 8: '08'"
        << std::oct << zahl1 << std::endl;
    return 0;
}
