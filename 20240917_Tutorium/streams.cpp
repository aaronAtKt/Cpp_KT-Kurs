#include <iostream>	// input/output Stream (cin, cout)
#include <string>
#include <iomanip>	// i/o Manipulator
using namespace std;

void using_streams();
void using_iomanip();
void read_only_ints();

int main(int argc, char** argv) {
	//using_iomanip();
	read_only_ints();
}

void using_streams() {
	int i = 45324;
	double dValue = 4.0 * 12.0;
	string name = "Aaron";
	string sWert{ "Das ist ein Text" };

	//cout << "i=" << 'c' << "\ndValue=" << dValue << endl;
	//cerr << "##### "<< "ERROR "<< "#####" << endl;

	std::string str1 = "Hallo, ";
	std::string str2 = "Welt!";
	//std::cout << str1 + str2 << std::endl;
	/*cout << std::string("##### INFO #####\ni=")
		+ to_string(i)	// Python: print(str(i))
		+ "\ndValue="
		+ to_string(dValue)
		+ "\n##### END #####" << endl;*/

		// Verkopplung von Cin und cout
		//cin.tie(&cout);	// Bindung wird gesetzt (Standardmäßig)
	cin.tie(nullptr);	// Bindung wird aufgehoben
	cout << "Name eingeben: ";
	cin >> name;
	cout << "\nHallo " << name << "!" << endl;
}

void using_iomanip() {	// Rainbow as integers
	for (int i = 1; i < 200; i++) {
		for (int j = 1; j < 200; j++) {
			cout << right << setw(10) << i * j;
		}
		cout << endl;
	}
}

/// <summary>
/// soll beim Einlesevorgang nur Integer-Werte akzeptieren.
/// </summary>
void read_only_ints() {
	int num = 0;

	cout << "Gibt eine Ganzzahl ein: ";

	while (true) {
		cin >> num;

		// Überprüfen, ob die Eingabe erfolgreich war
		if (((num > 13) && (num < 500)) || cin.fail()) {
			// Falls die Eingabe kein gültiger Integer war:
			cin.clear(); // Setzt den Fehlerstatus von cin zurück
			// Entfernt die Eingabe aus dem Eingabepuffer
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cerr << "Ungültige Eingabe. Bitte eine Ganzzahl eingeben: ";
		}
		else {
			// Gültige Eingabe
			cout << "Eingegebene Zahl: " << setw(5) << num << endl;
			break;
		}
	}
}