#include <iostream>
#include "header/Factory.h"

using namespace std;

int main() {
	int dimension;
	Factory* factory = new Factory();

	cout << "Enter the Dimension (1/2/3): ";
	cin >> dimension;

	Shape* shape = factory->factoryShape(dimension);
	shape->drawShape();

	return 0;
}