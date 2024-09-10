#include <iostream>
using namespace std;

/*int main()
{
    // Zeiger: Variable, die auf eine Adresse im Speicher (RAM) zeigt
    //         Indirekter Zugriff auf den Speicher
    // Deklaration: <dtype> *pName; // *ptrName;
    // * Zeiger-Operator/Dereferenzierungsoperator, & Adressoperator/Referenzierungsoperator

    short* pShortVar;
    long* pCounter;
    char* pChar;

    //int* pVar1, pVar2;  // *pVar1 ist ein Zeiger, pVar2 ist KEIN Zeiger
    //int *pVar_1, *pVar2;  // *pVar1 ist ein Zeiger, *pVar2 ist nun ein Zeiger

    short var;     // Deklaration von einer short-Variable
    short* pSVar1; // Deklaration von einem short-Zeiger
    // var = 0x1F00;
    pSVar1 = &var; // Adresse von var im Zeiger ablegen
    auto pSVar2 = &var; // Definition und Initalisierung eines Short-Zeigers;

    short** pSVar3 = &pSVar1;
    short*** pSVar4 = &pSVar3;
    auto pSVar5 = pSVar4;

    pSVar2 = pSVar1; // == pSVar2 = *& pSVar1;

    int* pInt = nullptr;    // Nullptr ist typlos, deswegen brauchen wir einen konkreten Datentyp (int*)
    // z.B. um zu prüfen, ob eine Datei korrekt geöffnet wurde
    int val;
    pInt = &val;

    char text = 123;
    //char* p_Char = nullptr;
    const char* pText = "Das ist ein String Literal";
    // Die Adresse ändert sich nicht, nur der Inhalt.
    pText = "Mein String Literal";
    pText = "Ein anderes String Literal";
    pText = &text;
    //pText = p_Char;

    /*cout << "Adresse von text: " << &text
        << "\nWert von pText: " << pText << endl;*/

  /*  auto pAny = reinterpret_cast<int*>(0x0100);
    //cout << pAny << endl;
    pAny++; // 0x0104   sizeof() gibt die Anzahl Byte des Datentyps zurücks
    //cout << pAny << endl;

    auto pShort = reinterpret_cast<short*>(0x0200);
    //cout << pShort << endl;
    pShort -= 2;    // pshort -= 2*2Byte
    //cout << pShort << endl;
    short x = 50;
    pShort = &x;
    //cout << pShort << endl;
    //cout << *pShort << endl;
    (*pShort)++;
    //cout << *pShort << endl;
    *pShort++;  // pShort += 2Byte;
    //cout << pShort << endl;


    const char* pChPtr;
    char* const pconstCharPtr = &text;





    // Zeichenkonstante
    const char constChar = 'A'; // Wert nicht veränderbar
    // Zeichenvariable
    char zeichen = 'a'; // Wert veränderbar

    // Zeiger auf char-Konstante
    const decltype(constChar)* pCharPtr = &constChar;   // Adresse einer konstanten Variable
    // const-Zeiger auf eine char-Variable
    decltype(zeichen)* const pCharPtr1 = &zeichen;      // Adresse einer nicht-Konstanten
    // const-Zeiger auf eine Char-Konstante
    decltype(constChar) const* const pCharPtr2 = &constChar;  // Adresse einer konstanten Variable
    // const <dtype>* ist gleich mit <dtype> const*

    //*pCharPtr = 'B';    // nicht erlaubt, wegen Zeichenkonstante
    // cout << sizeof(pCharPtr); // Gibt Byte aus
    pCharPtr++;         // erlaubt,       Zeiger ist nicht konstant, somit ist Adresse veränderbar
    *pCharPtr1 = 'b';   // erlaubt,       weil die Variable nicht konstant ist.
    //pCharPtr1++;        // nicht erlaubt, weil der Zeiger konstant ist;
    //*pCharPtr2 = 'B';    // nicht erlaubt, wegen Zeichenkonstante
    //pCharPtr2++;        // nicht erlaubt, weil der Zeiger konstant ist;


    int* pInt1;
    //cout << sizeof(pInt1);  // Zeiger-Variablen haben eine Größe von 8 Byte




    // Adresse 0x2000 in char-Zeiger laden
    auto pChVar = reinterpret_cast<char*>(0x2000);  // Zuweisung eines Adress-Literal

    /*cout << "Wert von Zeiger1: " << *pSVar1
        << "\nWert von Zeiger2: " << pSVar2
        << "\nAdresse von Zeiger1: " << &pSVar1
        << "\nAdresse von Zeiger2: " << &pSVar2
        << "\nAdresse von var: " << &var << endl;*/
        //<< "\nWert vom Char-Zeiger: " << pChVar << endl;

   // return 0;*/
//}
