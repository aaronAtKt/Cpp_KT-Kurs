#include "Nutzer.hpp"

//	Die Initialien des Nutzers müssen extrahiert werden.
//	Danach wird die Nutzernummer erstellt.
//	Wir generieren vier zufällige Zahlen und fügen das Result der Endsumme nach Modulo 10 hinzu.

Nutzer::Nutzer(std::string name, std::string address, std::string contact) {
	_name = name;
	_address = address;
	_contact = contact;
	
	std::string userID;
	bool letter_found = false;
	for (size_t i = 0; i < name.size(); i++)
	{
		if (isalpha(name[i]) && !letter_found) {
			userID += name[i];
			if (userID.size() == 2)
				break;
			letter_found = true;
		}
		else if (iswspace(name[i]))
			letter_found = false;
	}

	srand(time(0));
	int random;
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		random = rand();
		while (random > 10)
			random %= 10;
		userID += (random + 48);
		total += random;
	}
	total %= 10;
	userID += total;
	_userID = userID;
}

Nutzer::~Nutzer() {
	_books.clear();
	//_cds.clear();
}

//	We remove the book from the user's inventory after we returned it to the library.

void	Nutzer::returnBook(std::vector<Buch>::iterator b, Library &lib) {
	for (auto it = _books.begin(); it != _books.end(); it++)
	{
		if (it == b) {
			std::vector<Buch> &r = *lib._regale.getBuecherRegal();
			b->setBorrowedStatus(false);

			Buch nb(*b);
			r.push_back(nb);
			_books.erase(b);
			break;
		}
	}
}

std::string	Nutzer::getTime() {
	struct tm newtime;
	char am_pm[] = "AM";
	__time64_t long_time;
	char timebuf[26];
	errno_t err;

	// Get time as 64-bit integer.
	_time64(&long_time);
	// Convert to local time.
	err = _localtime64_s(&newtime, &long_time);
	if (err)
	{
		printf("Invalid argument to _localtime64_s.");
		exit(1);
	}
	if (newtime.tm_hour > 12)					 // Set up extension.
		strcpy_s(am_pm, sizeof(am_pm), "PM");
	if (newtime.tm_hour > 12)					 // Convert from 24-hour
		newtime.tm_hour -= 12;					 // to 12-hour clock.
	if (newtime.tm_hour == 0)					 // Set hour to 12 if midnight.
		newtime.tm_hour = 12;

	// Convert to an ASCII representation.
	asctime_s(timebuf, 26, &newtime);

	for (int i = 0; i < 26; i++)
		if (timebuf[i] == 10 || timebuf[i] == 13)
			timebuf[i] = 0;
	return timebuf;
}

//	First we create a timestamp, then we record the moment the book was taken by the user.
//	We also make sure to save the name of the user within the book attributes.

void	Nutzer::borrowBook(std::vector<Buch>::iterator b, Library &lib) {
/*
	time_t timestamp = time(NULL);
	struct tm datetime = *localtime(&timestamp);

	char output[50];
	strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
	std::string date = output;
*/
	b->setTimestamp(getTime());
	b->setBorrowedStatus(true);
	b->setLastUser(this->_name);

	Buch nb(*b);
	_books.push_back(nb);
	lib._regale.getBuecherRegal()->erase(b);
}

//	Useful function which returns all user-data as a compact vector-container.

std::vector<std::string>	Nutzer::getUserData() {
	std::vector<std::string>	strings;
	strings.push_back(_name);
	strings.push_back(_address);
	strings.push_back(_contact);
	strings.push_back(_userID);
	return strings;
}

//	This will return the start and end of the book iterator array.

std::pair<std::vector<Buch>::iterator, std::vector<Buch>::iterator>	Nutzer::getUserBooks() {
	auto pair = std::make_pair<std::vector<Buch>::iterator,
		std::vector<Buch>::iterator>(_books.begin(), _books.end());
	return pair;
}

//	Prints out all borrowed books by this user.

bool		Nutzer::printBooks() {
	std::string		RED = "\x1B[31m";
	std::string		GREEN = "\x1b[32m";
	std::string		YELLOW = "\x1b[33m";
	std::string		WHITE = "\x1B[0m";

	auto books = getUserBooks();
	if (books.first == books.second) {
		std::cout << RED << "Dieser Nutzer hat keine Medien ausgeliehen.\n" << WHITE;
		return false;
	}
	int i = 1;
	for (auto it = books.first; it != books.second; it++) {
		std::cout << i++ << ")";
		it->printBook(0);
	}
	return true;
}