#include <iostream>
#include "NPCFactory.h"
#include "NPC.h"
#include "Orc.h"
#include "Elf.h"


int main () {

	NPCFactory npcf = NPCFactory ();

	NPC* npc1 = npcf.makeNPC (1, "Bob");
	npc1->render ();

	NPC* npc2 = npcf.makeNPC (2, "Fred");
	npc2->render ();

	NPC* npc3 = npcf.makeNPC (4, "Ed");
	npc3->render ();


	char c;
	std::cin >> c;

	return 0;
}