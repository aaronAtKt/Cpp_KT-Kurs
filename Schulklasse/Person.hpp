#pragma once
#include <iostream>
#include <string>

class Person {
	protected:
		std::string _name;
		int			_id;

	public:
		Person();
		virtual ~Person() = 0;

		std::string getName();
		int			getID();
};