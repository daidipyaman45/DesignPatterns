#ifndef BANK_H
#define BANK_H

class Bank {
private:
	int accountNumber;
	int password;

public:
	Bank(int num, int pwd);
	bool checkAccount();
};

#endif // !BANK_H

