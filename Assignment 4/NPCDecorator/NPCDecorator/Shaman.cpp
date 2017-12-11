#include "Shaman.h"



Shaman::Shaman (NPC* npc) : NPCDecorator (npc) {
}


Shaman::~Shaman () {
}

void Shaman::render () {
	NPCDecorator::render ();
	std::cout << "- This NPC is a Shaman." << std::endl;
}
