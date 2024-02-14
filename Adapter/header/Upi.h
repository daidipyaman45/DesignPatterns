#ifndef UPI_H
#define UPI_H

#include "Bank.h"
#include "PaymentService.h"

class Upi {
public:
	void adapter(int accountnum, int pwd, int mode, int amount);
};

#endif // !UPI_H

