#ifndef UTILS_H
#define UTILS_H

#include <string>

// Deklaration der Funktion, die eine Zahl in eine Bin�rzeichenkette umwandelt
std::string binaryToString(int number, int bits);

// Deklaration der Funktion, die einen Bin�rstring in eine Ganzzahl umwandelt
int btoi(std::string binaryStr);

#endif
