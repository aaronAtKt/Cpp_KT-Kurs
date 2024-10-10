#include <iostream>
#include <algorithm>	// Klassen und Funktionen implementiert
#include <string>
using namespace std;

int main_() {

	int zahlen[9] = { 1,2,3,4,5,6,7,8,9 };
	///*int* found;
	//found = find(zahlen, zahlen + 9, 4);
	//if (found != zahlen + 9) {
	//	cout << "Gefunden: " << *found << endl;
	//}
	//else {
	//	cout << "Nichts gefunden!" << endl;
	//}*/

	//int ziel[5];
	//copy(zahlen, zahlen + 5, ziel);

	//for (auto i = 0; i < 5; i++) {
	//	cout << ziel[i] << " ";
	//}

	//string wort {"Lagerregal"};
	//reverse(wort.begin(), wort.end());
	//cout << wort << endl;

	fill(zahlen, zahlen + 9, 4);

	for (int i = 0; i < 9; i++) {
		cout << zahlen[i] << endl;
	}

	return 0;
}