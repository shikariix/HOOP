#pragma once
#include "NPC.h"

class NPC_Decorator : public NPC {
public:
	NPC_Decorator (NPC* npc);

	virtual void render ();
	NPC* npc;
};

