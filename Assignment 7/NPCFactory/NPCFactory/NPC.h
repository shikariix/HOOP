#pragma once
#include <iostream>

class NPC {
public:
	virtual void render () = 0;

	static const int type_orc = 1;
	static const int type_elf = 2;

	static const int type_elf_shaman = 3;
	static const int type_elf_soldier = 4;
	static const int type_elf_farmer = 5;

	static const int type_elf_shaman_farmer = 6;
	static const int type_elf_shaman_soldier = 7;


	static const int type_orc_shaman = 8;
	static const int type_orc_soldier = 9;
	static const int type_orc_farmer = 10;

	static const int type_orc_soldier_farmer = 11;
	static const int type_orc_shaman_farmer = 12;
};

