#include <iostream>
#include <fstream> // file stream (Datei-Strom)
#include <string>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "de_DE");

	fstream f;	// Allgemeine Klasse f�r den Gebrauch von Dateien
	ofstream of; // output-file Stream: Klasse, um in die Datei zu schreiben
	ifstream if_; // input-file Stram: Klasse, f�r reine Eingabe Dateien

	char buffer[256];	// Ziechenpuffer als Zwischenablage
	const char tDateien[]{ "Das ist mein Text f�r die Datei." };
	f.open("datei.txt", ios::out);
	f.write(tDateien, strlen(tDateien));
	f.close();

	if (f.good()) {	// Sind bei der vorherigen Aktion Fehler aufgetreten?
		f.open("datei.txt", ios::in);

		while (!f.eof())	// (f.is_open()) Solange wir nicht das Ende der Datei erreicht haben, gehe in die Schleife
		{
			f.getline(buffer, sizeof(buffer));
			cout << buffer << endl;
		}
		f.close();	// Datei wird geschlossen.
	}
	else {
		cerr << "Es ist ein Fehler beim Schreiben aufgetreten." << endl;
	}
	/*
	Dateimodi
	*********
	ios::out    = Zum Schreiben oder �berschreiben in die Datei. (Wenn die Datei noch nicht existiert, dann wird sie erstellt. Ordner muss man manuell erstellen)
	ios::in     = Zum Lesen aus der Datei
	ios::trunc  = Datei wird beim �ffnen geleert.
	ios::app    = (append) Geschriebene Daten werden ans Ende der Datei angeh�ngt. (Dateizeiger wird immer ans Ende gesetzt)
	ios::ate    = (at the end) Positionszeiger f wird ans Ende gesetzt. (dateizeiger kann auch manuell nach vorne geschoben werden.
	ios::binary = Kann bin�re Dateien �ffnen und bearbeiten
	ios::beg	= Poistionszeiger wird an den Anfang gesetzt
	ios::cur	= Poisionszeiger wird an die aktuelle Position im Dateistrom gesetzt
	ios::end	= Positionszeiger wird ans Ende der Datei gesetzt ( = ios:ate)
	*/
	//f << "Dieser Text geht in die Datei." << endl;
	//f.close();
}