#include "Module.h"
#include <iostream>


Module::Module () {
}

Module::Module (std::string naam, int ECs) {
	this->naam = naam;
	this->ECs = ECs;
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


	std::vector<Student*>::iterator i = studenten.begin ();
	while (i != studenten.end ()) {
		std::cout << (*i)->getNaam () << std::endl;
		i++;
	}

	std::cout << std::endl;
}

Module::~Module () {
}
