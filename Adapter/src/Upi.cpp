#include <iostream>
#include "../header/Upi.h"

void Upi::adapter(int accountnum, int pwd, int mode, int amount) {
	Bank* b = new Bank(accountnum, pwd);
	PaymentService* ps = new PaymentService();

	if (b->checkAccount()) {
		ps->doPayment(mode, amount);
	}
	else {
		std::cout << "Incorrect Bank Details";
	}
}