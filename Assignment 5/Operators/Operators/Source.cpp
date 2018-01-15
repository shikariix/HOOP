#include <iostream>
#include "Bankrekening.h"
#include "Transactie.h"

int main () {

	/*
	Opdracht volgende keer
	Modelleer een bankrekening, met een transactie-log

	class 
		Bankrekening (saldo, transactie-historie)

	class
		Transactie (bij/afschrijving, hoeveelheid, datum)
	Definieer + / - operators om bij/afschrijvingen te verwerken
	Definieer outputstream insertion operators:
		std::cout << bankrekening << std::endl;
		geeft saldo, en historie van transacties..
*/

	Bankrekening* bankrekening = new Bankrekening(0);
	Transactie t1 = Transactie(Transactie::BIJSCHRIJVING, 100, "14-01-2018");
	bankrekening += t1;
	std::cout << bankrekening << std::endl;
	return 0;
}