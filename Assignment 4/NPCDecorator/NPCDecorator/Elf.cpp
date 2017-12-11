#include "Elf.h"



Elf::Elf (std::string name) {
	this->name = name;
}

void Elf::render () {
	std::cout << "An elf named " << name << " has been rendered." << std::endl;
}


Elf::~Elf () {
}
