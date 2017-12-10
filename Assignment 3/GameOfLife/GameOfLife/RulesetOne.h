#pragma once
#include "CellBehaviour.h"
class RulesetOne : public CellBehaviour {
public:
	RulesetOne ();
	void behave (int livingNeighbors, Cell* cell) override;
	~RulesetOne ();
};

