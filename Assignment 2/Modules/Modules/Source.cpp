#include <iostream>
#include "Student.h"
#include "Module.h"
#include "Docent.h"

int main () {
	std::vector<Module*> modules;
	std::vector<Student*> studenten;

	//maak 10 studenten
	Student* s1 = new Student ("Sara Sweets");
	Student* s2 = new Student ("Cecille Skarsgard");
	Student* s3 = new Student ("Oskar Helvig");
	Student* s4 = new Student ("Lori Campbell");
	Student* s5 = new Student ("Kayin Winfrey");
	Student* s6 = new Student ("Anna van Houten");
	Student* s7 = new Student ("Barbara Jackson");
	Student* s8 = new Student ("Penelope Free");
	Student* s9 = new Student ("Laura Montoya");
	Student* s10 = new Student ("Tiffany Marchetti");

	//maak 3 docenten
	Docent* d1 = new Docent ("Kiyoko Amari");
	Docent* d2 = new Docent ("Emily Pricefield");
	Docent* d3 = new Docent ("Amber Valor");

	//maak 3 modules
	Module* m1 = new Module ("Heavy OOP", 2);
	Module* m2 = new Module ("Kernmodule", 4);
	Module* m3 = new Module ("Project Hybrid Space", 5);
	
	//wijs een docent toe aan elke module
	m1->setDocent (d2);
	m2->setDocent (d1);
	m3->setDocent (d3);

	//wijs student toe aan 1-3 modules
	s1->addModule (m1, m3, m2);
	s2->addModule (m3);
	s3->addModule (m2, m3);
	s4->addModule (m1, m2, m3);
	s5->addModule (m2);
	s6->addModule (m2, m1, m3);
	s7->addModule (m3, m2);
	s8->addModule (m2, m1);
	s9->addModule (m1);
	s10->addModule (m1, m3);

	//print een lijst van modules, met docenten en studenten
	modules.push_back (m1);
	modules.push_back (m2);
	modules.push_back (m3);
	
	
	std::vector<Module*>::iterator it = modules.begin ();

	while (it != modules.end ()) {
		(*it)->printModule ();
		it++;
	}

	//toon ECs per student
	//stop studenten in vector
	studenten.push_back (s1);
	studenten.push_back (s2);
	studenten.push_back (s3);
	studenten.push_back (s4);
	studenten.push_back (s5);
	studenten.push_back (s6);
	studenten.push_back (s7);
	studenten.push_back (s8);
	studenten.push_back (s9);
	studenten.push_back (s10);

	//loop er doorheen met iterator

	std::vector<Student*>::iterator i = studenten.begin ();

	while (i != studenten.end ()) {
		std::cout << (*i)->getNaam() << "'s ECs: " << (*i)->getECs () << std::endl;
		i++;
	}

	char c;
	std::cin >> c;

	return 0;
}