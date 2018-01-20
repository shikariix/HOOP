#pragma once
#include <vector>
#include "Transactie.h"

class Bankrekening {
public:
	Bankrekening ();
	Bankrekening (double saldo);
	Bankrekening operator+(const Transactie& t1);
	Bankrekening operator-(const Transactie& t1);
	std::string operator<<(const Bankrekening& b) const;
	double getSaldo () const;
	~Bankrekening ();

private:
	double saldo;
	std::vector<Transactie> transacties;
};

