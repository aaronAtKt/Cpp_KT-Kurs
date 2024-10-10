/*
Standard Template Library
*************************

- Sammlung von Klassen und Algorithmen
- häufig verwendete Datenstrukturen und Algorithmen effizienter zu gestalten und immer wieder
  zu verwenden.
- Container (Sequenzcontainer, assoziative Container, unordered Container) [alles aus std::]
	- Sequence Container: vector, list, deque (speichern Elemente in einer bestimmten Reihenfolge)
	- Associative Container: set, map, multiset, multimap (Speichert Schlüssel-Wert-Paare <K, V> in sortierter Reihenfolge)
	- Unordered Container: unordered_set, unordered_map (hash-basierte Speicherung, keine Duplikate)
*/
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>

void _main_() {
	/*std::cout << "-------------------------------------------------\n";
	std::cout << "\tExperimente mit 'map'-Containern\n";
	std::cout << "-------------------------------------------------\n\n";*/
	/* {
		std::map<std::string, int> testmap;				//	Key (string) & Value (int) zur Navigation
		std::map<std::string, int>::iterator it;		//	Iterator zum Durchgehen von Map-Elementen

		//	"Maps" beinhalten Paare von Datentypen
		//	"Maps" sortieren ihre Inhalte nach dem Key, "Hallo" wird also vor "Welt" stehen.

		testmap.insert(std::make_pair("Test", 42));		//	Das hier wird die Zahl '42' unter "Freunde" abspeichern.
		testmap.insert(std::make_pair("Welt", 42));		//	Das hier wird die Zahl '42' unter "Welt" abspeichern.
		testmap.insert(std::make_pair("Hallo", 1));		//	Das hier wird die Zahl '1' unter "Hallo" abspeichern.
		testmap["Hallo"] = 0;							//	In der eckigen Klammer steht der Key, NICHT die Stelle!

		it = testmap.begin();							//	So erhalten wir Zugriff auf den Anfang im Map-Array.
		auto ite = testmap.end();						//	Beinhaltet den Null-Terminator im Array.

		while (it != ite)
		{
			std::cout << "\t  Key: " << it->first << "\n\tValue: " << it->second << "\n\n";
			it++;
		}

		testmap.clear();								//	Bei komplexen Datentypen muss schon mehr getan werden!
		//	Vorerst reicht das Clearen aber hier.
	}*/


	//std::cout << "-------------------------------------------------\n";
	//std::cout << "  Experimente mit 'unordered_map'-Containern\n";
	//std::cout << "-------------------------------------------------\n\n";
	//{
	//	std::unordered_map<std::string, int> testmap;

	//	//	Unsortierte "Maps" sortieren nicht.

	//	testmap.insert(std::make_pair("Test", 42));
	//	testmap.insert(std::make_pair("Welt", 42));
	//	testmap.insert(std::make_pair("Hallo", 1));

	//	for (auto it = testmap.begin(); it != testmap.end(); it++)
	//		std::cout << "\t  Key: " << it->first << "\n\tValue: " << it->second << "\n\n";
	//	testmap.clear();
	//}

	//std::cout << "-------------------------------------------------\n";
	//std::cout << "\tExperimente mit 'set'-Containern\n";
	//std::cout << "-------------------------------------------------\n\n";

	//{
	//	std::set<int> testset;

	//	//	Sets speichern ausschließlich Keys, sie sortieren automatisch. Sind eher langsam.

	//	testset.insert(4);
	//	testset.insert(2);
	//	testset.insert(2);									// Sets speichern keine Duplikate!
	//	testset.insert(1);

	//	for (auto it = testset.begin(); it != testset.end(); it++)
	//		std::cout << "\t" << *it;
	//	testset.clear();
	//}

	std::cout << "\n\n-------------------------------------------------\n";
	std::cout << "   Experimente mit 'unordered_set'-Containern\n";
	std::cout << "-------------------------------------------------\n\n";

	//	Wie der Name bereits nahelegt: hier wird nicht sortiert. Keine Duplikate erlaubt.

	{
		std::unordered_set<int> testset = { 4, 2, 2, 1 };
		for (auto it = testset.begin(); it != testset.end(); it++)
			std::cout << "\t" << *it;
		testset.clear();
	}

	std::cout << "\n\n-------------------------------------------------\n";
	std::cout << "    Experimente mit 'multiset' - Containern\n";
	std::cout << "-------------------------------------------------\n\n";

	//	Multi-Sets erlauben das Speichern von Duplikaten.

	{
		std::multiset<int> testset;
		testset.insert(4);
		testset.insert(2);
		testset.insert(2);
		testset.insert(1);

		for (auto it = testset.begin(); it != testset.end(); it++)
			std::cout << "\t" << *it;
		testset.clear();
	}

	std::cout << "\n\n-------------------------------------------------\n";
	std::cout << "Experimente mit 'unordered_multiset' - Containern\n";
	std::cout << "-------------------------------------------------\n\n";

	//	Unsortierte Multisets sortieren nicht.

	{
		std::unordered_multiset<int> testset;
		testset.insert(4);
		testset.insert(2);
		testset.insert(2);
		testset.insert(1);

		for (auto it = testset.begin(); it != testset.end(); it++)
			std::cout << "\t" << *it;
		testset.clear();
	}
	std::cout << "\n\n";


}