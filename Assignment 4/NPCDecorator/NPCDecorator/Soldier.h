#pragma once
#include "NPCDecorator.h"
class Soldier :
	public NPCDecorator {
public:
	Soldier (NPC* npc);
	~Soldier ();

	void render ();
};

