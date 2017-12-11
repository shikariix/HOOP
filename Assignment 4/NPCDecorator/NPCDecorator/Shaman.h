#pragma once
#include "NPCDecorator.h"
class Shaman :
	public NPCDecorator {
public:
	Shaman (NPC* npc);
	~Shaman ();
	void render ();
};

