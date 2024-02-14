#include "../header/Factory.h"

Shape* Factory::factoryShape(int dimension) {
	Shape* shape = nullptr;

	if (dimension == 1) shape = new OneD();
	else if (dimension == 2) shape = new TwoD();
	else if (dimension == 3) shape = new ThreeD();

	return shape;
}