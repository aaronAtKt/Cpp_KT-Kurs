#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Buch.hpp"
//#include "CD.hpp"

class Buch;
//class CD;

class Regale {
	protected:
		std::vector<Buch>	_buecher;
		//std::vector<CD>		_cds;

	public:
		Regale();
		~Regale();

		Regale& operator=(const Regale& reg) = delete;
		Regale(Regale& reg) = delete;
		Regale(Regale&& reg) = delete;

		void	addBook(Buch& b);
		void	removeBook(std::vector<Buch>::iterator b);

		std::vector<Buch>			*getBuecherRegal();
		std::vector<Buch>::iterator	getBuecherRegalStart();
		std::vector<Buch>::iterator	getBuecherRegalEnd();
		//std::vector<CD>			&getCDRegal();
};