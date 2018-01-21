#pragma once
#include <iostream>
#include <string>
#include "NPC.h"

class Elf : public NPC {
public:
	Elf (std::string name);
	void render () override;
	~Elf ();
private:
	std::string name;
};

