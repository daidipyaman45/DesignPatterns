#include <iostream>
#include "header/Upi.h"

using namespace std;

int main() {
	int accoutnum, pwd, ammount, mode;
	Upi u;

	cout << "Enter Bank Account Number and Password: ";
	cin >> accoutnum >> pwd;
	cout << "Enter mode (1.GooglePay, 2.PhonePay, 3.Paytm): ";
	cin >> mode;
	cout << "Enter Ammount: ";
	cin >> ammount;

	u.adapter(accoutnum, pwd, mode, ammount);

	return 0;
}