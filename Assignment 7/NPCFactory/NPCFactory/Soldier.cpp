#include "Soldier.h"

Soldier::Soldier (NPC* npc) : NPC_Decorator (npc) {
}


Soldier::~Soldier () {
}

void Soldier::render () {
	NPC_Decorator::render ();
	std::cout << "- This NPC is a Soldier." << std::endl;
}