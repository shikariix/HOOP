#pragma once
#include "NPC.h"
#include <string>

class NPCFactory {
public:
	NPCFactory ();
	NPC* makeNPC (int type, std::string name);
	~NPCFactory ();
};

