#include "Person.hpp"
#include <iostream>

// Konstruktor
Person::Person(const string &name, int age) : name(name), age(age) {}

Person::Person() : name("Armin"), age(22) {}

// Getter
string Person::getName() const {
	return name;
}

int Person::getAge() const {
	return age;
}

// Setter
void Person::setName(const string& name) {
	this->name = name;
}

void Person::setAge(int age) {
	this->age = age;
}

// Beschreibungsmethode
void Person::introduce() const {
	std::cout << "Hallo, mein Name ist " << name
		<< "und ich bin " << age << " Jahre alt." << std::endl;
}

// Destruktor
Person::~Person() {}
