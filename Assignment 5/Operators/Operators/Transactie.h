#pragma once
#include <string>


class Transactie {
public:
	Transactie ();
	Transactie (int type, double amount, std::string date);
	double getAmount () const;
	int getType () const;
	std::string getDate () const;

	static const int BIJSCHRIJVING = 0;
	static const int AFSCHRIJVING = 1;

	~Transactie ();

private:
	std::string type;
	double amount;
	std::string date;
};

