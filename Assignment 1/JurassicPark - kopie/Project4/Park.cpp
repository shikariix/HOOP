#include "Park.h"

#include <iostream>

Park::Park () {}

void Park::addDinosaur (Dinosaur d) {
	dinosaurs[count] = d;
	count++;
}

void Park::list () {
	std::cout << "----- In the park:" << std::endl;
	for (int i = 0; i < count; ++i) {
		std::cout << dinosaurs[i].getName () << std::endl;
	}
	std::cout << "-----" << std::endl;
}

void Park::openGate () {

	Dinosaur* temp = new Dinosaur[count-1];

	for (int i = 0; i < count-1; i++) {
		temp[i] = dinosaurs[i];
	}
	count--;
	delete[] dinosaurs;
	dinosaurs = temp;
}