#pragma once
#include "Account.h"
#include "BankAPI.h"

class SimpleATMController {

public:
	SimpleATMController();
	
	~SimpleATMController();

	bool insertCard(int pin_number);

	void checkBalance();

	bool deposit(int money);

	bool withdraw(int money);

	void done();
private:
	bool permission_;
	BankAPI bank_api_;

};
