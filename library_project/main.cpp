#include "Library.hpp"

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>

std::string		RED = "\x1B[31m";
std::string		GREEN = "\x1b[32m";
std::string		YELLOW = "\x1b[33m";
std::string		WHITE = "\x1B[0m";

//	Der Parameter "range" bestimmt, bis zu welcher Nummer Input akzeptiert werden soll.
int		inputNumber(int range) {
	int input = 0;
	while (1)
	{
		std::cin >> input;
		if (std::cin.fail() || (input < 1 || input > range)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Bitte eine gültige Zahl eingeben!\n";
		}
		else
			break;
	}
	return input;
}

std::string	enterString(std::string request) {
	std::string input;
	while (1) {
		std::cout << GREEN << request << WHITE;
		input.clear();
		std::getline(std::cin >> std::ws, input);
		//std::cout << YELLOW << input << "(" << input.size() << ")\n" << WHITE;	// DEBUGGING
		if (input.empty())
			std::cout << RED << "Leerer Input wird nicht akzeptiert.\n" << WHITE;
		else
			break;
	}
	return input;
}

void	registerUser(Library& lib) {
	std::string name = enterString("Bitte einen vollständigen Namen eingeben.\n");
	std::string adresse = enterString("Bitte die Adresse des Nutzers eingeben.\n");
	std::string kontakt = enterString("Bitte eine Telefonnummer eingeben.\n");
	lib._users.push_back(Nutzer(name, adresse, kontakt));
	std::cout << YELLOW << "Registrierung abgeschlossen.\n\n" << WHITE;
}

bool	checkForDupes(Library& lib, std::string ISBN) {
	auto books = lib._regale.getBuecherRegal();
	for (auto it = books->begin(); it != books->end(); it++) {
		if (it->getCode() == ISBN)
			return true;
	}
	return false;
}

void	addBook(Library& lib, std::vector<std::string> words) {
	std::string titel = words[0];
	std::string autor = words[1];
	std::string genre = words[2];
	std::string isbn = words[3];
	if (!checkForDupes(lib, words[3])) {
		Buch b(genre, autor, titel, isbn, "", "");
		lib._regale.addBook(b);
	}
}

void	parseFile(Library& lib, std::ifstream &fd) {
	char					 c;
	std::string				 word;
	std::vector<std::string> words;
	bool					 flag = false;

	while (!fd.eof() && fd >> std::noskipws >> c) {
		if (c == 10) {
			if (words.size() == 3) {
				words.push_back(word);
				addBook(lib, words);
			}
			word.clear();
			words.clear();
		}
		else if (c == ';') {
			words.push_back(word);
			word.clear();
			flag = true;
		}
		else if (!flag && c != 10)
			word += c;
		else if (!isspace(c)) {
			flag = false;
			word += c;
		}
	}
	words.push_back(word);
	if (words.size() == 4)
		addBook(lib, words);
}

void	registerMediums(Library &lib) {
	std::cout << GREEN << "Bitte einen Dateinamen/Dateipfad eingeben zur Medien-Registrierung.\n" << WHITE;
	std::cout << YELLOW << "Gewünschtes Datei-Format: [TITEL]; [AUTOR]; [GENRE]; [ISBN]\n\n" << WHITE;
	
	std::ifstream	fd;
	std::string		input;

	std::cin >> input;
	fd.open(input);
	if (!fd) {
		std::cout << RED << "Der eingetragene Dateipfad wurde nicht erkannt.\n\n" << WHITE;
		return;
	}
	std::cout << YELLOW << "Datei wurde erkannt, Inhalt wird nun registriert.\n\n";
	parseFile(lib, fd);
	fd.close();
}

//	Wird nachsehen, ob irgendwelche verleihbaren Medien existieren.
//	Der Parameter "mode" bestimmt, ob der Verleihstatus als "true"
//	oder "false" interpretiert werden soll.

bool	availableMedium(Library &lib, int mode) {
	auto books = lib._regale.getBuecherRegal();
	if (books->empty())
		return false;
	if (mode == 0) {
		for (auto it = books->begin(); it != books->end(); it++) {
			if (!it->getBorrowedStatus())
				return true;
		}
	}
	else {
		for (auto it = books->begin(); it != books->end(); it++) {
			if (it->getBorrowedStatus())
				return true;
		}
	}
	return false;
}

void	removeMedium(Library& lib) {
	if (!availableMedium(lib, 0)) {
		std::cout << RED << "Es sind keine Medien zum Entfernen verfügbar.\n\n" << WHITE;
		return;
	}
	std::cout << YELLOW << "Bitte ein verfügbares Medium zum Entfernen als Zahl auswählen:\n" << WHITE;
	lib.printMediums();

	auto books = lib._regale.getBuecherRegal();
	int r = books->size();
	int input = inputNumber(r);

	auto it = books->begin();
	auto ite = books->end();
	int i = 1;

	while (i < input && it != ite) {
		it++;
		i++;
	}

	//Failsafe, falls der Nullterminator im Container erreicht wird.
	if (it == ite)
		it--;

	std::cout << RED << it->getTitle() << " wurde aus der Bibliothek entfernt.\n\n" << WHITE;
	books->erase(it);
}

//	Hier wird ein Nutzer ausgewählt, welcher ein Medium zurückgeben soll.

void	returnMedium(Library& lib) {
	if (lib._users.empty()) {
		std::cout << RED << "Es gibt keine Nutzer, ergo wurde nichts verliehen.\n" << WHITE;
		return;
	}

	std::cout << GREEN << "Wähle einen Nutzer als Zahl aus, welcher etwas zurückgeben soll.\n" << WHITE;
	lib.printUsers();
	int user = inputNumber(lib._users.size());
	//std::pair<std::vector<Buch>::iterator, std::vector<Buch>::iterator> books = lib._users[user - 1].getUserBooks();
	auto books = lib._users[user-1].getUserBooks();
	if (books.first == books.second) {
		std::cout << RED << "Dieser Nutzer besitzt keine Medien.\n\n" << WHITE;
		return;
	}

	std::cout << GREEN << "Wähle ein Medium aus, welches zurückgegeben werden soll.\n" << WHITE;
	int i = 1;
	for (auto it = books.first; it != books.second; it++)
	{
		std::cout << i++ << ")";
		it->printBook(0);
		std::cout << "\n";
	}
	int input = inputNumber(i-1);
	auto it = books.first;
	for (int i = 1; i < input; i++)
		it++;

	std::cout << YELLOW << it->getTitle() << WHITE << " wurde zurückgegeben von "
		<< GREEN << (lib._users[user - 1].getUserData())[0] << "\n\n" << WHITE;
	lib._users[user-1].returnBook(it, lib);
}

void	borrowMedium(Library& lib) {
	auto books = lib._regale.getBuecherRegal();
	if (!availableMedium(lib, 0)) {
		std::cout << RED << "Es sind keine Medien zum Verleih verfügbar.\n\n" << WHITE;
		return;
	}
	else if (lib._users.empty())
	{
		std::cout << RED << "Es gibt keine Nutzer, welche etwas ausleihen könnten.\n\n" << WHITE;
		return;
	}

	std::cout << YELLOW << "Bitte ein verfügbares Medium als Zahl auswählen:\n" << WHITE;
	lib.printMediums();
	int r = books->size();
	int input = inputNumber(r);
	if (books->at(input-1).getBorrowedStatus()) {
		std::cout << RED << "Dieses Medium ist nicht verfügbar.\n\n" << WHITE;
		return;
	}

	std::cout << YELLOW << "Bitte einen Nutzer als Zahl auswählen zum Erhalt des Mediums.\n" << WHITE;
	lib.printUsers();
	int user = inputNumber(lib._users.size());

	auto it = lib._regale.getBuecherRegalStart();
	for (int i = 1; i < input; i++)
		it++;

	std::cout << YELLOW << it->getTitle() << WHITE << " wurde verliehen an " 
		<< GREEN << (lib._users[user - 1].getUserData())[0] << "\n" << WHITE;
	lib._users[user-1].borrowBook(it, lib);
}

void	mediumOptions(Library& lib) {
	std::cout << GREEN << " Bitte Option via Zahlen-Eingabe auswählen:\n" << WHITE;
	std::cout << "  1) Medien hinzufügen.\n";
	std::cout << "  2) Medien verleihen.\n";
	std::cout << "  3) Medien zurückgeben.\n";
	std::cout << "  4) " << RED << "Medien entfernen.\n" << WHITE;
	std::cout << "  5) Zurück zum Hauptmenü.\n";
	int input = inputNumber(5);
	if (input == 1)
		registerMediums(lib);
	else if (input == 2)
		borrowMedium(lib);
	else if (input == 3)
		returnMedium(lib);
	else if (input == 4)
		removeMedium(lib);
}

void	displayMenu() {
	std::cout << YELLOW << "Willkommen in der digitalen Bibliothek!\n" << WHITE;
	std::cout << GREEN << " Bitte Option via Zahlen-Eingabe auswählen:\n" << WHITE;
	std::cout << "  1) Medien hinzufügen/verleihen/zurückgeben/entfernen.\n";
	std::cout << "  2) Liste der Medien und ihr Verleihstatus.\n";
	std::cout << "  3) Neuen Nutzer anmelden.\n";
	std::cout << "  4) Liste der Nutzer einsehen.\n";
	std::cout << "  5) " << RED << "Programm beenden.\n" << WHITE;
}

int main() {
	Library lib;

	//	Vorerstellter Nutzer für Debugzwecke
	//	lib._users.push_back(Nutzer("Adrian Grun", "Semmelstrasse 13, 10999", "123-456789"));

	while (1) {
		displayMenu();
		int input = inputNumber(5);
		if (input == 1)
			mediumOptions(lib);
		else if (input == 2)
			lib.printMediums();
		else if (input == 3)
			registerUser(lib);
		else if (input == 4)
			lib.printUsers();
		else if (input == 5)
			break;
	}
	return 0;
}