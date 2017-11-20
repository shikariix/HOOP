#pragma once
#include "Dinosaur.h"
#include <vector>


class Park {
public:
	Park ();
	
	void add (Dinosaur* d);
	void list ();
	void openGate ();

private:
	//Dinosaur dinosaurs[5];
	std::vector<Dinosaur*> dinosaurs;
	//int count = 0;
};

