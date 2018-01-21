#include "Shaman.h"

Shaman::Shaman (NPC* npc) : NPC_Decorator (npc) {
}


Shaman::~Shaman () {
}

void Shaman::render () {
	NPC_Decorator::render ();
	std::cout << "- This NPC is a Shaman." << std::endl;
}