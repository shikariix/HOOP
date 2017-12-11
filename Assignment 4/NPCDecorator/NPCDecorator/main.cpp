#include <iostream>
#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "NPCDecorator.h"
#include "Shaman.h"
#include "Soldier.h"
#include "Farmer.h"


int main () {

	NPC* npc1 = new Shaman (new Orc ("Brutus"));
	NPC* npc2 = new Soldier (new Farmer (new Elf ("Legolas")));

	npc1->render ();
	npc2->render ();

	char c;
	std::cin >> c;

	return 0;
}