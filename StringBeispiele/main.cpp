#include <iostream>
#include <string>
using std::string;

int main()
{
    string text = "Hallo Welt";
    const char* text1 = text.c_str();
    string text2(" Strings in C++");

    // Konkatenieren / Verkettung von Strings
    string texte = text + text1 + text2;

    const string sometext = "B";    // Am Ende wird immer '\0'
    char textArray[2] = { 'B', '\0' };

    char string2[101];

    char* string3;
    string3 = string2;


    // Wahrheitsdatentyp bool
    bool istWahr = true;
    istWahr = false;

    // sometext = "A"; // Das ist nicht m�glich, weil es als const deklariert wurde

    std::cout << "L�nge von Texte: " << texte.length()
        << "\n Size von texte: " << texte.size() << std::endl;

    return 0;
}
