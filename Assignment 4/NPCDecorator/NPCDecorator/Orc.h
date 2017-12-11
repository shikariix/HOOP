#pragma once
#include <iostream>
#include <string>
#include "NPC.h"

class Orc : public NPC {
public:
	Orc (std::string name);
	void render () override;
	~Orc ();
private:
	std::string name;
};

