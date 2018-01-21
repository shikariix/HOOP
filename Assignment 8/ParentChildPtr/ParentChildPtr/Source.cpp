#include <iostream>
#include <memory>
#include "Parent.h"

using namespace std;

int main () {

	auto p1 = make_shared<Parent> ("Parent1");
	cout << "P1:" << *p1 << endl;

	auto p2 = p1; // roept de copy constructor aan
	cout << "P2:" << *p2 << endl;

	Parent* p3 = new Parent ("Parent3");
	cout << "P3:" << *p3 << endl;

	*p3 = *p1; // roept de assignment operator aan
	cout << "P3:" << *p3 << endl;

	//Klopt het dat alle children ChildOfParent1 heten?
	delete p3;

	char c;
	cin >> c;

	return 0;
}