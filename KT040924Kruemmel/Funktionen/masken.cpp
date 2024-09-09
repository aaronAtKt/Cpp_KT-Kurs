#include "masken.h"

// Setzt Bits in 'number' entsprechend der Bitmaske 'mask'
int applyMaskAdd(int number, int mask) {
    return number | mask;
}

// Löscht Bits in 'number' entsprechend der Bitmaske 'mask'
int applyMaskClear(int number, int mask) {
    return number & ~mask;
}

// Prüft, ob alle Bits der Maske in 'number' gesetzt sind
int applyMaskCheck(int number, int mask) {
    return (number & mask) == mask;
}
