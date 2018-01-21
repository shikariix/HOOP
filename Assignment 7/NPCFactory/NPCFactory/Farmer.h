#pragma once
#include "NPC_Decorator.h"
class Farmer :
	public NPC_Decorator {
public:
	Farmer (NPC* npc);
	~Farmer ();
	void render ();
};