#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Schueler.hpp"
#include "Lehrer.hpp"

class Klasse{
	private:
		std::string				_klassenname;
		Lehrer					_klassenlehrer;
		std::vector<Schueler>	_schuelerliste;

	public:
		Klasse() = delete;
		Klasse(std::string name, Lehrer lehrer, std::vector<Schueler> schueler);
		~Klasse();

		void	addSchueler(Schueler schueler);
		void	setKlassenlehrer(Lehrer lehrer);
		void	printKlasse();

		class KlasseUngueltig : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};
};