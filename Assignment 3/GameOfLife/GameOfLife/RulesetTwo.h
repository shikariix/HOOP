#pragma once
#include "CellBehaviour.h"
class RulesetTwo : public CellBehaviour {
public:
	RulesetTwo ();
	void behave (int livingNeighbors, Cell* cell) override;
	~RulesetTwo ();
};

