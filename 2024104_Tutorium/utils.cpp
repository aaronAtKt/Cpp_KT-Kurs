#include "utils.hpp"
#include <iostream>

namespace util {
	int zaehler;
}

void util::sucheAnfang() {
	std::cout << "Nachricht von util." << std::endl;
}

void myUtil::sucheAnfang() {
	std::cout << "Nachricht von myUtil." << std::endl;
}

int mathOperation::add(int a, int b) {
	return a + b;
}

int mathOperation::sub(int a, int b) {
	return a - b;
}

void company::sales::recordTransaction() {
	std::cout << "Verkauf aufgezeichnet!" << std::endl;
}

void company::hr::processSalery() {
	std::cout << "Gehalt verarbeitet!" << std::endl;
}
