#include <vector>

#include "Dinosaur.h"

class Park {
public:
	Park ();

	void addDinosaur (Dinosaur d);

	void list ();

	void openGate ();

private:
	Dinosaur* dinosaurs = new Dinosaur[5];
	int count;
};