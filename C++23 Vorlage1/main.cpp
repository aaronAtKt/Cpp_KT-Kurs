#include <iostream>
using namespace std;


int main()
{

    // C++23 Vorlage1
    // Variable (Wertespeicher)
    unsigned int iVar;   // Integer (Nur positive Ganze Zahlen: 0, 1, 2, ...)
    //cout << "Bitte gebe eine Zahl ein: ";
    //cin >> iVar;

    //cout << "Du hast folgenden Wert eingegeben: " << iVar << endl;

    // Implizit / automatisch
    int i = 10;
    double d = i;

    // C-Style Cast
    d = 3.99;
    i = (int) d;

    // Functional Casting (C)
    d = 6.987;
    i = int(d);

    // static cast
    i = static_cast<int>(d);

    // dynamic cast
    class Basis { virtual void func() {} };
    class Ableitung : public Basis{};

    Basis* b = new Ableitung();
    Ableitung* a = dynamic_cast<Ableitung*>(b);

    cout << i << endl;

    return 0;
}
