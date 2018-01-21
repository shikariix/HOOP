#pragma once
#include "NPC_Decorator.h"
class Soldier :
	public NPC_Decorator {
public:
	Soldier (NPC* npc);
	~Soldier ();

	void render ();
};