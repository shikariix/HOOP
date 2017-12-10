#include "RulesetThree.h"



RulesetThree::RulesetThree () {
}

void RulesetThree::behave (int livingNeighbors, Cell* cell) {
	if (livingNeighbors > 2) {
		cell->setLiving (false);
	}
	else if (livingNeighbors <= 1 && !cell->getLivingBool ()) {
		cell->setLiving (true);
	}
}

RulesetThree::~RulesetThree () {
}
