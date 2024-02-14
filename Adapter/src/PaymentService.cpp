#include <iostream>
#include "../header/PaymentService.h"

void PaymentService::doPayment(int mode, int amount) {
	if (mode == 1) std::cout << amount << " Received on GooglePay";
	else if (mode == 2) std::cout << amount << " Received on PhonePay";
	else if (mode == 3) std::cout << amount << " Received on Paytm";
}