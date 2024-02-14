#ifndef GAME_H
#define GAME_H

class Game {
private:
	int num1, num2, num3;
public:
	void randomNum();
	int getNum1();
	int getNum2();
	int getNum3();
	void won(bool result);
};

#endif // !GAME_H

