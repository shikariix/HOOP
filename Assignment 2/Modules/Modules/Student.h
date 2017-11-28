#pragma once
#include <string>
#include <vector>
#include "Module.h"

class Module; // forward declaration

class Student {
public:
	Student (std::string naam);
	void addModule (Module* m1);
	void addModule (Module* m1, Module* m2);
	void addModule (Module* m1, Module* m2, Module* m3);
	int getECs ();
	std::string getNaam ();
	~Student ();

private:
	std::string naam;
	std::vector<Module*> modules;
	int ECs = 0;
};

