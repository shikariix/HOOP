#pragma once
#include <string>
#include "CellBehaviour.h"

class CellBehaviour;

class Cell {
public:
	Cell ();
	std::string getLivingString ();
	bool getLivingBool ();
	void setLiving (int setAlive);
	void setBehaviour (CellBehaviour* b);
	void doBehave (int livingNeighbors);
	~Cell ();
private:
	bool isAlive;
	CellBehaviour* behaviour;
};

