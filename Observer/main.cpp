#include <iostream>
#include "header/Game.h"
#include "header/Observer.h"

using namespace std;

int main() {
	Game g;
	Observer b;
	bool result;
	int start;
	StartGame:
	cout << "Enter Numeric value to start(1.Start, 0.Stop): ";
	cin >> start;
	if (start) {
		g.randomNum();
		result = b.gameResult(g);
		if (result) {
			g.won(result);
		}
		else {
			g.won(result);
			goto StartGame;
		}
	}
	return 0;
}