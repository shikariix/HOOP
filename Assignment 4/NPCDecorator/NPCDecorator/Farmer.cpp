#include "Farmer.h"



Farmer::Farmer (NPC* npc) : NPCDecorator (npc) {
	this->npc = npc;
}


Farmer::~Farmer () {
}

void Farmer::render () {
	NPCDecorator::render ();
	std::cout << "- This NPC is a Farmer." << std::endl;
}
