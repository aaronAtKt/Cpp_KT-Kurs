#pragma once
#include <string>
using std::string;

class Person {
private:
	string name;
	int age;

public:
	// Konstruktor
	Person(const string& name, int age);
	Person();

	// Getter f�r Name und Alter
	string getName() const;
	int getAge() const;

	// Setter f�r Name und Alter
	void setName(const string& name);
	void setAge(int age);

	// Methode, um die Person zu beschreiben
	void introduce() const;

	// Destruktor
	~Person();
};