#include "Bankrekening.h"



Bankrekening::Bankrekening () {
	saldo = 0;
}

Bankrekening::Bankrekening (double saldo) {
	this->saldo = saldo;
}

Bankrekening Bankrekening::operator+(const Transactie& t1) {
	t1.setType (Transactie::BIJSCHRIJVING);
	transacties.push_back (t1);
	return Bankrekening (saldo + t1.getAmount ());
}

Bankrekening Bankrekening::operator-(const Transactie& t1) {
	t1.setType (Transactie::AFSCHRIJVING);
	transacties.push_back (t1);
	return Bankrekening (saldo - t1.getAmount ());
}

std::string Bankrekening::operator<<(const Bankrekening& b) const {
	return "Huidig Saldo: " + b.getSaldo() + "\nTransactie Geschiedenis: \n stuff";
}

double Bankrekening::getSaldo () const {
	return saldo;
}


Bankrekening::~Bankrekening () {
}
