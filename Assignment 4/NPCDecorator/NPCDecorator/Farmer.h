#pragma once
#include "NPCDecorator.h"
class Farmer :
	public NPCDecorator {
public:
	Farmer (NPC* npc);
	~Farmer ();
	void render ();
};

