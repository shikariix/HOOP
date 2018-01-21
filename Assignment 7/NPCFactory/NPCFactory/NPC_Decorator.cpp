#include "NPC_Decorator.h"



NPC_Decorator::NPC_Decorator (NPC* npc) {
	this->npc = npc;
}


void NPC_Decorator::render () {
	npc->render ();
}
