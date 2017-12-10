#include "RulesetOne.h"
#include "Cell.h"


RulesetOne::RulesetOne () {
}

void RulesetOne::behave (int livingNeighbors, Cell* cell) {
	if (livingNeighbors > 3 || livingNeighbors < 2) {
		cell->setLiving (false);
	}
	else if (livingNeighbors == 3 && !cell->getLivingBool()) {
		cell->setLiving (true);
	}
}


RulesetOne::~RulesetOne () {
}
