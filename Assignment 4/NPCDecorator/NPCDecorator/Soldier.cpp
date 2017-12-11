#include "Soldier.h"



Soldier::Soldier (NPC* npc) : NPCDecorator(npc) {
}


Soldier::~Soldier () {
}

void Soldier::render () {
	NPCDecorator::render ();
	std::cout << "- This NPC is a Soldier." << std::endl;
}
