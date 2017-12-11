#pragma once
#include "NPC.h"

class NPCDecorator : public NPC {
public:
	NPCDecorator (NPC* npc);
	~NPCDecorator ();

	virtual void render ();
	NPC* npc;
};

