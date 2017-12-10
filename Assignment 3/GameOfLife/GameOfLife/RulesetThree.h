#pragma once
#include "CellBehaviour.h"
class RulesetThree : public CellBehaviour {
public:
	RulesetThree ();
	void behave (int livingNeighbors, Cell* cell) override;
	~RulesetThree ();
};

