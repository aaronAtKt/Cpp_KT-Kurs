#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* arr, int groesse) {
	char c;
	char d;
	int mid = groesse / 2;
	groesse--;									// Gr��e OHNE den Null-Terminator. Den wollen wir nicht ver�ndern.
	for (int i = 0; i < mid; i++) {
		char c = arr[i];
		char d = arr[groesse - i];
		arr[groesse - i] = c;
		arr[i] = d;
	}
}

void stringUmkehren(char* str) {
	char* start = str;
	char* ende = str + strlen(str) - 1;

	while (start < ende) {
		swap(*start, *ende);
		start++;
		ende--;
	}
}

void main() {

	char cArr[] = { "Hallo, Welt!" };
	char str[] = "Hallo C++";

	cout << "Originaler String:  " << cArr << endl;
	reverseString(cArr, 12);	// Call-by-Reference
	cout << "Umgekehrter String: " << cArr << endl;

	cout << "\nOriginaler String:  " << str << endl;
	stringUmkehren(str);	// Call-by-Reference
	cout << "Umgekehrter String: " << str << endl;
}