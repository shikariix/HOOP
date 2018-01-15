#include "Bankrekening.h"



Bankrekening::Bankrekening () {
	saldo = 0;
}

Bankrekening::Bankrekening (double saldo) {
	this->saldo = saldo;
}

Bankrekening Bankrekening::operator+(const Transactie t1) {
	transacties.push_back (t1);
	return Bankrekening (saldo + t1.getAmount ());
}

Bankrekening Bankrekening::operator-(const Transactie & t1) {
	transacties.push_back (t1);
	return Bankrekening (saldo - t1.getAmount ());
}

Bankrekening Bankrekening::operator+=(const Transactie t1) {
	transacties.push_back (t1);
	if (t1.getType() == Transactie::BIJSCHRIJVING) {
		saldo += t1.getAmount ();
	}
	else if (t1.getType () == Transactie::AFSCHRIJVING) {
		saldo -= t1.getAmount ();
	}
	return *this;
}

std::string Bankrekening::operator<<(const Bankrekening& b) const {
	return "Huidig Saldo: " + b.getSaldo() + "\nTransactie Geschiedenis: \n stuff";
}

double Bankrekening::getSaldo () const {
	return saldo;
}


Bankrekening::~Bankrekening () {
}
