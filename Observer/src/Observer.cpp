#include <iostream>
#include "../header/Observer.h"

using namespace std;

bool Observer::gameResult(Game game) {
	int a, b, c;
	a = game.getNum1();
	b = game.getNum2();
	c = game.getNum3();

	cout << "Number1: " << a << endl;
	cout << "Number2: " << b << endl;
	cout << "Number3: " << c << endl;

	return (a==b && b==c);
}