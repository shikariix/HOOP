#include "RulesetTwo.h"



RulesetTwo::RulesetTwo () {
}

void RulesetTwo::behave (int livingNeighbors, Cell* cell) {
	if (livingNeighbors > 5 || livingNeighbors < 3) {
		cell->setLiving (false);
	}
	else if (livingNeighbors == 3 && !cell->getLivingBool ()) {
		cell->setLiving (true);
	}
}

RulesetTwo::~RulesetTwo () {
}
