#include "../header/Bank.h"

Bank::Bank(int num, int pwd) {
	accountNumber = num;
	password = pwd;
}

bool Bank::checkAccount() {
	return accountNumber == 9999 && password == 1234;
}