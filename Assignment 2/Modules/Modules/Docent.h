#pragma once
#include <string>

class Docent {
public:
	Docent ();
	Docent (std::string naam);
	std::string getNaam ();
	~Docent ();

private:
	std::string naam;
};

