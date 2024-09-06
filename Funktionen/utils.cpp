#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int btoi(string binaryStr) {
	// string binaryStr = "101010";
	bitset<32> binarySet(binaryStr);

	int num = binarySet.to_ulong();

	return num;
}

int btoi(bitset<4> binary) {
	return (int)binary.to_ulong();
}