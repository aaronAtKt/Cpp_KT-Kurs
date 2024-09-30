#include "Regale.hpp"

Regale::Regale() {}

Regale::~Regale() {
	_buecher.clear();
}

void	Regale::addBook(Buch& b) {
	_buecher.push_back(b);
}

//	In case we want to completely get rid of a book. 
//  Careful: no one will be able to borrow it anymore!

void	Regale::removeBook(std::vector<Buch>::iterator b) {
	_buecher.erase(b);
}

std::vector<Buch> *Regale::getBuecherRegal() {
	return &_buecher;
}

std::vector<Buch>::iterator	Regale::getBuecherRegalStart() {
	return _buecher.begin();
}

std::vector<Buch>::iterator	Regale::getBuecherRegalEnd() {
	return _buecher.end();
}