#include "Farmer.h"


Farmer::Farmer (NPC* npc) : NPC_Decorator (npc) {
	this->npc = npc;
}


Farmer::~Farmer () {
}

void Farmer::render () {
	NPC_Decorator::render ();
	std::cout << "- This NPC is a Farmer." << std::endl;
}