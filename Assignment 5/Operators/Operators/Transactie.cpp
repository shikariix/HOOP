#include "Transactie.h"
#include <iostream>


Transactie::Transactie () {
}

Transactie::Transactie (int type, double amount, std::string date) {
	if (type == Transactie::AFSCHRIJVING) {
		this->type = "Afschrijving";
	}
	else if (type == Transactie::BIJSCHRIJVING) {
		this->type = "Bijschrijving";
	} 
	else {
		std::cout << "Ongeldig transactietype. Transactie niet verwerkt." << std::endl;
		return;
	}
	this->amount = amount;
	this->date = date;
}

double Transactie::getAmount() const {
	return amount;
}

int Transactie::getType () const {
	if (type == "Afschrijving") {
		return Transactie::AFSCHRIJVING;
	}
	if (type == "Bijschrijving") {
		return Transactie::BIJSCHRIJVING;
	}
	else {
		std::cout << "There is an Error with transaction type. Defaulting to BIJSCHRIJVING." << std::endl;
	}
	return 0;
}

void Transactie::setType (int type) {
	this->type = type;
}

Transactie::~Transactie () {
}
