#include "Bankrekening.h"


Bankrekening::Bankrekening () {
	saldo = 0;
}

Bankrekening::Bankrekening (double saldo) {
	this->saldo = saldo;
}

Bankrekening Bankrekening::operator+(Transactie& t1) {
	saldo = saldo + t1.getAmount ();
	transacties.push_back (t1);
	return *this;
}

Bankrekening Bankrekening::operator-(Transactie& t1) {
	saldo = saldo - t1.getAmount ();
	transacties.push_back (t1);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bankrekening& b) {
	os << "Huidig Saldo: " << b.saldo << "\nTransactie Geschiedenis: " << b.transacties.size() << " transacties" << std::endl;
	for (int i = 0; i < b.transacties.size (); ++i) {
		os << "Type: " << b.transacties[i].getType() << ", " << b.transacties[i].getAmount () << ", " << b.transacties[i].getDate () << std::endl;
	}

	return os;
}

Bankrekening::~Bankrekening () {
}
