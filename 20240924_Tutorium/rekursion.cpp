/*
Rekursion
*********

* Funktionen, die sich selber aufrufen, bis sie ihren Zweck erfüllt haben
* Aufgabe soll in kleinere Teilprobleme zerlegt werden
* 
* Mind. 2 Sachen für eine Rekursion:
*	- Abbruchbedingung (Basisfall): 
*		# Verhinderung von Endlosschleifen
*		# Sobald der gewünschte Zustand erreicht ist --> Rekursion wird beendet
*	- Rekursiver Fall:
*		# Die Funktion ruft sich selber auf
*		# Reduktion des gesamten Problems in kleinere Teilprobleme 
*/

#include <iostream>
#include <string>
using namespace std;

// Funktionsdeklarationen
int factorial(int);
int fibonacci(int);
int sumArray(int[], int);
void reverseString(string&, int, int);

/// <summary>
/// main function call
/// </summary>
/// <returns> 0: no errors </returns>
int main() {
	int arr[]{ 1,2,3,4,5 };
	int n = size(arr);// sizeof(arr) / sizeof(arr[0]);
	string str = "Hallo";

	//cout << "Fakultät von " << n << " = " << factorial(n) << endl;
	/*for (auto i = 0; i < n; i++) {
		cout << fibonacci(i) << " ";
	}
	cout << endl;*/

	//cout << "Summe des Arrays: " << sumArray(arr, n) << endl;

	reverseString(str, 0, str.length() - 1);
	cout << "Umgekehrter String: " << str << endl;

	return 0;
}

// Funktionsdefinitionen

/// <summary>
/// Berechnet die Fakultät einer ganzen Zahlen ( n! = n * (n - 1)!)
/// </summary>
/// <param name="n"> die Zahl, von der die Fakultät berechnet werden soll </param>
/// <returns> die Fakultät der Zahl n </returns>
int factorial(int n) {
	// Basisfall: 0! oder 1! = 1
	if (n == 0/* || n == 1*/)
		return 1;

	// Rekursiver Fall
	return n * factorial(n - 1);
}

/// <summary>
/// Erstellt die Fibonacci-Sequenz als Zahlenfolge. Jede Zahl ist die Summe der beiden
/// vorherigen Zahlen. Außer die ersten beiden Zahlen sind 0 und 1.
/// (fibonacci(n) = fibonacci(n-1) + fibonacci(n-2))
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int fibonacci(int n) {
	// Basisfälle
	if (n == 0) return 0;
	if (n == 1) return 1;
	// Rekursiver Fall
	return fibonacci(n - 1) + fibonacci(n - 2);
}

/// <summary>
/// berechnet die Summe der Elemente eines Arrays mit Rekursion
/// </summary>
/// <param name="arr"> Das übergebene Array </param>
/// <param name="n"> Die Anzahl der Elemente </param>
/// <returns> Die Summe der Elemente </returns>
int sumArray(int arr[], int n) {
	// Basisfall: Wenn das Array keine Elemente mehr hat
	if (n == 0) {
		return 0;
	}
	// Rekursiver Fall: Das letzte Element hinzufügen und das Array auf n - 1 Elemente reduzieren
	return arr[n - 1] + sumArray(arr, n - 1);
}

/// <summary>
/// einen String rekursiv umkehren
/// </summary>
/// <param name="str"> Der String, der umgekehrt werden soll </param>
/// <param name="start"> Das Startzeichen </param>
/// <param name="end"> Das Endzeichen </param>
void reverseString(string& str, int start, int end) {
	// Basisfall: Wenn start >= end ist, ist der String umgekehrt
	if (start >= end) return;

	// Vertauchen die Zeichen am Start- und am Endindex
	swap(str[start], str[end]);
	// Rekursiver Fall: Aufruf für den restlichen String
	reverseString(str, start + 1, end - 1);
}