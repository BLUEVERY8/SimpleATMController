#pragma once
#include "Account.h"

class BankAPI {
public:
	BankAPI();
	
	~BankAPI();

	bool checkPinNumber(int pin_number);

	int checkBalance(bool permission);

	bool deposit(bool permission, int money);

	bool withdraw(bool permission, int money);

private:
	Account* accounts_ = nullptr;
};