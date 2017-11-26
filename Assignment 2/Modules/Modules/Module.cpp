#include "Module.h"
#include <iostream>


Module::Module () {
}

Module::Module (std::string naam, int ECs) {
}

int Module::getECs () {
	return ECs;
}

void Module::setDocent (Docent* newDocent) {
	docent = newDocent;
}

void Module::addStudent (Student* newStudent) {
	studenten.push_back (newStudent);
}

void Module::printModule () {
	std::cout << "Module: " + naam << std::endl;
	std::cout << "Docent: " << docent->getNaam() << std::endl;
	for each (Student* student in studenten) {
		std::cout << student->getNaam() << std::endl;
	}
}

Module::~Module () {
}
