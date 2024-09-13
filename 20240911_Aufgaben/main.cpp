#include <iostream>
#include <numbers>  // für std::numbers::pi

using namespace std;


/*constexpr int square(const int number) {
    return number * number;
}

int main()
{
    const int x = 20;   // Wert x kann nicht mehr geändert werden.

    cout << "wert von const x: " << x << endl;

    // constexpr wird zur Compile-Zeit ausgewertet
    constexpr int result = square(x);
    cout << "Ergebnis der Compile-Zeit-Berechnung (constexpr): " << result << endl;
    return 0;
}*/

// constexpr int square(const int number);

constexpr int square(const int number) {    // diese Funktion ist inline
    return number * number;
}

inline int add(int a, int b) {
    return a + b;
}
 
constexpr int value = 4;    // bekannt global scope

void main_()
{
    int x = 7, y = 6;   // Wert x kann nicht mehr geändert werden. Bekannt im local Scope

    cout << "Summe: " << add(x, y) << "\nWert von Pi: " << numbers::pi << endl;

    // constexpr wird zur Compile-Zeit ausgewertet
    // const int result = square(x);



    // **************************************************************************************
    // Armin's Evaluation

    // auch so würde ein konstanter Wert (const oder constexpr) so übergeben werden können

    // oder einfach so mit einem festen, konstanten Wert
    constexpr int result = square(value);

    // **************************************************************************************



    cout << "Ergebnis der Compile-Zeit-Berechnung (constexpr): " << result << endl;
}
 
 