#include "Person.hpp"

Person::Person() {
	_name = "";
	_id = 0;
};

Person::~Person() {}

std::string	Person::getName() {
	return _name;
}

int	Person::getID() {
	return _id;
}