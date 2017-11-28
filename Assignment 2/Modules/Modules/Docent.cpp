#include "Docent.h"


Docent::Docent () {
}

Docent::Docent (std::string naam) {
	this->naam = naam;
}

std::string Docent::getNaam () {
	return naam;
}


Docent::~Docent () {
}
