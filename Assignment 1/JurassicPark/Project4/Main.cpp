#include <iostream>
#include "Dinosaur.h"
#include "Park.h"

int main () {
	Park jurassicPark = Park ();
	Dinosaur* stegosaurus = new Dinosaur ("Stegosaurus");

	jurassicPark.add (stegosaurus);

	jurassicPark.add (new Dinosaur ("Velociraptor"));
	jurassicPark.add (new Dinosaur("TRex"));

	jurassicPark.list ();
	std::cout << "-----" << std::endl;
	jurassicPark.openGate ();
	jurassicPark.list ();
	std::cout << "-----" << std::endl;
	jurassicPark.add (stegosaurus);
	jurassicPark.list ();

	char c;
	std::cin >> c;

	return 0;
}