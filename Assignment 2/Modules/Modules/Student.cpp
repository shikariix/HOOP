#include "Student.h"


Student::Student (std::string naam) {
	this->naam = naam;
}

void Student::addModule (Module * m1) {
	modules.push_back (m1);
	ECs = m1->getECs ();
	m1->addStudent (this);
}

void Student::addModule (Module * m1, Module * m2) {
	modules.push_back (m1);
	modules.push_back (m2);
	ECs = m1->getECs () + m2->getECs ();
	m1->addStudent (this);
	m2->addStudent (this);
}

void Student::addModule (Module * m1, Module * m2, Module * m3) {
	modules.push_back (m1);
	modules.push_back (m2);
	modules.push_back (m3);
	ECs = m1->getECs () + m2->getECs () + m3->getECs ();
	m1->addStudent (this);
	m2->addStudent (this);
	m3->addStudent (this);
}

int Student::getECs () {
	return ECs;
}

std::string Student::getNaam () {
	return naam;
}


Student::~Student () {
}
