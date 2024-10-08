#include "Person.hpp"

//int Person::lastid = 0; (Vorschlag von Felix)

Person::Person() {	 //id ist immer 0. Paramter ergänzen Person::Person(std::string n, int id) : _name(n), _id(id) { ... }
	_name = "";	 //Person(std::string name) : name(name) { id = lastId; lastId++; }; (Vorschlag von Felix)
	_id = 0;
};

Person::~Person() {}

std::string	Person::getName() {
	return _name;
}

int	Person::getID() {
	return _id;
}
