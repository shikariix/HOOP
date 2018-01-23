#include <iostream>
#include <thread>
#include <vector>
#include "concurrent_vector.h"

concurrent_vector<int>* v1 = new concurrent_vector<int> ();


void newFunction () {
	v1->push_back (5);
	std::cout << "Pushed" << std::endl;
	v1->push_back (10);
	std::cout << "Pushed" << std::endl;
	v1->pop_back ();
	std::cout << "Popped" << std::endl;

	std::cout << "Newfunction done. Vector contains: " << v1->size () << std::endl;
}

void otherfunction() {
	v1->pop_back ();
	std::cout << "Popped" << std::endl;
	v1->push_back (7);
	std::cout << "Pushed" << std::endl;

	std::cout << "Otherfunction done. Vector contains: " << v1->size() << std::endl;
}

int main () {

	std::thread t1 (newFunction);
	t1.join ();

	std::thread t2 (otherfunction);
	t2.join ();


	char c;
	std::cin >> c;
	return 0;
}