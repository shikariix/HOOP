#include "NPCFactory.h"
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Shaman.h"
#include "Soldier.h"
#include <iostream>


NPCFactory::NPCFactory () = default;

NPC* NPCFactory::makeNPC (int type, std::string name) {
	NPC* temp;
	try {
		switch(type)
		{
		case NPC::type_elf:
			temp = new Elf (name);
			break;
		case NPC::type_elf_farmer:
			temp = new Farmer( new Elf (name));
			break;
		case NPC::type_elf_shaman:
			temp = new Shaman (new Elf (name));
			break;
		case NPC::type_elf_soldier:
			temp = new Soldier (new Elf (name));
			break;
		case NPC::type_elf_shaman_farmer:
			temp = new Shaman (new Farmer (new Elf (name)));
			break;
		case NPC::type_elf_shaman_soldier:
			temp = new Shaman (new Soldier (new Elf (name)));
			break;
		case NPC::type_orc:
			temp = new Orc (name);
			break;
		case NPC::type_orc_soldier:
			temp = new Soldier (new Orc (name));
			break;
		case NPC::type_orc_farmer:
			temp = new Farmer (new Orc (name));
			break;
		case NPC::type_orc_shaman:
			temp = new Shaman (new Orc (name));
			break;
		case NPC::type_orc_shaman_farmer:
			temp = new Shaman (new Farmer (new Orc (name)));
			break;
		case NPC::type_orc_soldier_farmer:
			temp = new Farmer (new Soldier (new Orc (name)));
			break;
		default: 
			throw type;
		}
		return temp;
	}
	catch (int type) {
		std::cout << "Invalid type " << type << ". Defaulting to elf." << std::endl;
		return new Elf (name);
	}
}


NPCFactory::~NPCFactory () = default;
