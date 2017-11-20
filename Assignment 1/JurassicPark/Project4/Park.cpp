#include "Park.h"
#include <iostream>


Park::Park () {
}

void Park::add (Dinosaur* d) {
	dinosaurs.push_back(d);
}

void Park::list () {
	for (int i = 0; i < dinosaurs.size(); i++) {
		std::cout << dinosaurs[i]->getName () << std::endl;
	}
}

void Park::openGate () {
	dinosaurs.pop_back ();
}
