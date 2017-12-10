#pragma once
#include "Cell.h"

class Cell;

class CellBehaviour {
public:
	CellBehaviour ();
	virtual void behave (int livingNeighbors, Cell* cell) = 0;
	virtual ~CellBehaviour ();
};

