#include "Person.hpp"

int _main() {
	Person person1("Max Mustermann", 36);
	Person person2("Erika Musterfrau", 40);
	Person person3;
	Person person4 = {};
	Person person5 = { "Sabine Heinz", 55 };

	person1.introduce();
	person2.introduce();
	person3.introduce();

	person1.setName("Maximilian Mustermann");
	person1.setAge(37);

	// Aktualisierte Informationen anzeigen
	person1.introduce();

	return 0;
}