#include <iostream>
#include "header.hpp"

double add(int, int = 3);
int add(int, double);

PROGRAM
BEGIN
    std::cout << add(3) << "\n" << ABC << "\n" << QUADRAT(4)
END

double add(int x, int y) {
    return x + y;
}

double add(int x, double y) {
    return x + y;
}