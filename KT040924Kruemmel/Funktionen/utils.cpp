#include "utils.h"
#include <bitset>

// Wandelt eine Zahl in eine Bin�rzeichenkette um
std::string binaryToString(int number, int bits) {
    return std::bitset<32>(number).to_string().substr(32 - bits, bits);
}

// Wandelt einen Bin�rstring in eine Ganzzahl um
int btoi(std::string binaryStr) {
    std::bitset<32> binarySet(binaryStr);
    return binarySet.to_ulong();
}
