#include "funktionen.h"

// Setzt das Bit an der angegebenen Position
int setBit(int number, int position) {
    return number | (1 << position);  // Bitweise ODER, um das Bit zu setzen
}

// L�scht das Bit an der angegebenen Position
int clearBit(int number, int position) {
    return number & ~(1 << position);  // Bitweise UND mit invertierter Maske, um das Bit zu l�schen
}

// Pr�ft, ob das Bit an der angegebenen Position gesetzt ist
bool checkBit(int number, int position) {
    return (number & (1 << position)) != 0;  // Bitweise UND, um zu pr�fen, ob das Bit gesetzt ist
}
