#include <iostream>
using namespace std;

int main()
{
    /*int summand1, summand2;

    cout << "Gib die 1. Zahl ein: ";    // 5
    cin >> summand1;
    cout << "Gib die 2. Zahl ein: ";    // 3
    cin >> summand2;

    summand1 += summand2; //summand1 = summand1 + summand2; 8
    summand1 *= 3 + 4;    //summand1 = summand1 * (3 + 4); 56
    // += *= -= /=
    cout << summand1 << endl;

    int zahl = 5;
    // Inkrement / Dekrement    C++ => C = C + 1
    //zahl++;  zahl += 1    zahl = zahl + 1
    //zahl--;  zahl -= 1    zahl = zahl - 1

    zahl++; // Postfix Inkrement (zahl = 6) --> 5 wird übergeben, danach hochgezählt
    ++zahl; // Präfix Inkrement (zahl = 7) --> erst hochgezählt, danach wird 7 übergeben
    zahl--; // Präfix Dekrement (zahl = 6) --> 7 wird übergeben, danach runtergezählt
    --zahl; // Präfix Dekrement (zahl = 5) --> erst runtergezählt, danach wird 5 übergeben
    */
    int n = 4;
    string myChange = "change";

    /*for (int teiler = 1; teiler <= n; ++teiler) {
        if (n % teiler == 0) {
            cout << teiler << ", " << endl;
        }
        cout << teiler << endl;
    }*/

    int count1 = 0;
    int count2 = 0;

    /*std::cout << "Beispiel mit ++count1:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Wert von count1: " << ++count1 << std::endl;
    }

    std::cout << "Beispiel mit count2++:" << std::endl;
    for (int j = 0; j < 5; j++) {
        std::cout << "Wert von count2: " << count2++ << std::endl;
    }*/

    /*char zeichen = 'A' + 32;  // 'a'
    char zeichen2 = 53; // '5'


    cout << zeichen-48 + zeichen2-48 << endl;

    if (zeichen == 32)
        cout << " ";*/

    const int zahl = 400;
    const int zahl1(400);
    int const zahl2(400);

    long grosseZahl = 1'000'000ul;
    int zahl = 5;

    long z = 10L;

    double x = 1.;

    L'a';

    return 0;
}
