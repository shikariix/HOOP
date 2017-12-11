#include "NPCDecorator.h"



NPCDecorator::NPCDecorator (NPC* npc) {
	this->npc = npc;
}


NPCDecorator::~NPCDecorator () {
}

void NPCDecorator::render () {
	npc->render ();
}
