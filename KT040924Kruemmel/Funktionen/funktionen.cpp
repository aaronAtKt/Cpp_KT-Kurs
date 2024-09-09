#include "funktionen.h"

// Setzt das Bit an der angegebenen Position
int setBit(int number, int position) {
    return number | (1 << position);  // Bitweise ODER, um das Bit zu setzen
}

// Löscht das Bit an der angegebenen Position
int clearBit(int number, int position) {
    return number & ~(1 << position);  // Bitweise UND mit invertierter Maske, um das Bit zu löschen
}

// Prüft, ob das Bit an der angegebenen Position gesetzt ist
bool checkBit(int number, int position) {
    return (number & (1 << position)) != 0;  // Bitweise UND, um zu prüfen, ob das Bit gesetzt ist
}
