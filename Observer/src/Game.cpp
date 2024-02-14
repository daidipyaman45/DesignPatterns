#include <iostream>
#include "../header/Game.h"

using namespace std;

void Game::randomNum() {
	num1 = rand() % 10;
	num2 = rand() % 10;
	num3 = rand() % 10;
}

int Game::getNum1() {
	return num1;
}

int Game::getNum2() {
	return num2;
}
int Game::getNum3() {
	return num3;
}

void Game::won(bool result) {
	result ? cout << "You Won the Game!\n" : cout << "Try Again!\n";
}