#include "Child.h"
#include <iostream>

Child::Child (string name) {
	this->name = name;
}

Child::Child (const unique_ptr<Child> other) {
	this->name = other->name;
}

Child::~Child()
{
	std::cout << "deleting " + name << std::endl;
}

ostream& operator<<(ostream& os, const Child& child) {
	os << "name: " << child.name;
	return os;
}
