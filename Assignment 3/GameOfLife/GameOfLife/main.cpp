#include <iostream>

#include "Cell.h"
#include "Grid.h"


int main () {
	//stack around this variable is being corrupted
	Grid* activeGrid = new Grid ();
	std::cout << "Press 1 to reload!" << std::endl;

	int c;
	
	while (1) {
		std::cin >> c;
		if (c == 1) {
			activeGrid->refreshGrid ();
			std::cout << "Press 1 to reload!" << std::endl;
		}
		else {
			break;
		}
	}
	
	return 0;
}
