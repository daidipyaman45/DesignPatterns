#ifndef FACTORY_H
#define FACTORY_H

#include "OneD.h"
#include "TwoD.h"
#include "ThreeD.h"

class Factory {
public:
	Shape* factoryShape(int dimension);
};

#endif // !FACTORY_H

