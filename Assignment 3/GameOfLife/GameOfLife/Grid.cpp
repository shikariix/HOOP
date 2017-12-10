#include "Grid.h"
#include "RulesetOne.h"
#include "RulesetTwo.h"
#include "RulesetThree.h"
#include <iostream>
#include <string>
#include <windows.h>

Grid::Grid () {

	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			int setAlive = rand ();
			Cells[i][j].setLiving (setAlive);
			std::cout << Cells[i][j].getLivingString ();
		}
		std::cout << std::endl;
	}
}
void Grid::refreshGrid () {
	COORD cur = {0, 0};
	SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), cur);
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			Cells[i][j].setBehaviour(new RulesetThree());
			Cell Neighbors[8] = {Cells[i - 1][j - 1], Cells[i - 1][j],
								 Cells[i - 1][j + 1], Cells[i][j + 1],
								 Cells[i + 1][j + 1], Cells[i + 1][j],
								 Cells[i + 1][j - 1], Cells[i][j - 1]};
			bool NeighborState[8];
			int livingNeighbors;
			for (int k = 0; k < 8; k++) {
				livingNeighbors = 0;
				bool neighborState = Neighbors[k].getLivingBool ();
				NeighborState[k] = neighborState;
				for (int h = 0; h < k; h++) {
					if (NeighborState[h] == true) {
						livingNeighbors++;
					}
				}
			}
			bool currentState = Cells[i][j].getLivingBool();

			//plug this part into the behaviour 
			//send the cell[i][j] and livingNeighbors with it
			Cells[i][j].doBehave (livingNeighbors);
			std::cout << Cells[i][j].getLivingString ();
		}
		std::cout << std::endl;
	}
}