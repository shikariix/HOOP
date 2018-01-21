#include "Orc.h"


Orc::Orc (std::string name) {
	this->name = name;
}

void Orc::render () {
	std::cout << "An orc named " << name << " has been rendered." << std::endl;
}


Orc::~Orc () = default;
