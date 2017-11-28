#pragma once
#include <string>
#include <vector>
#include "Student.h"
#include "Docent.h"

class Student; // forward declaration

class Module {
public:
	Module ();
	Module (std::string naam, int ECs);
	int getECs ();
	void setDocent (Docent* newDocent);
	void addStudent (Student* newStudent);
	void printModule ();
	~Module ();

private:
	std::string naam;
	int ECs;
	std::vector<Student*> studenten;
	Docent* docent;
};

