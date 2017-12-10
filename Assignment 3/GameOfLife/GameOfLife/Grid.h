#pragma once
#include "Cell.h"
#include <vector>

class Grid {
public:
	Grid ();
	void refreshGrid ();
private:
	Cell Cells[25][25];
	std::vector<int> cellGrid;
};