#pragma once
#include "NPC_Decorator.h"
class Shaman :
	public NPC_Decorator {
public:
	Shaman (NPC* npc);
	~Shaman ();
	void render ();
};