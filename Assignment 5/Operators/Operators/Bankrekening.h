#pragma once
#include <vector>
#include <ostream>
#include "Transactie.h"

class Bankrekening {
public:
	Bankrekening ();
	Bankrekening (double saldo);
	Bankrekening operator+(Transactie& t1);
	Bankrekening operator-(Transactie& t1);
	friend std::ostream& operator<<(std::ostream& os, const Bankrekening& b);
	~Bankrekening ();

private:
	double saldo;
	std::vector<Transactie> transacties;
};

