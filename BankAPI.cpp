#include "BankAPI.h"
#include "Account.h"

BankAPI::BankAPI() {
	this->accounts_ = new Account[10];
	this->accounts_[0] = Account("Daehan Kang", 12345678, 1000);
}

BankAPI::~BankAPI() {
	if (this->accounts_)
		delete[] accounts_;
}

bool BankAPI::checkPinNumber(int pin_number) {
	// pin number 확인되면 true
	if (accounts_[0].get_pin_number() == pin_number)
		return true;

	return false;
}

int BankAPI::checkBalance(bool permission) {
	if (permission)
		return accounts_[0].get_balance();

}

bool BankAPI::deposit(bool permission, int money) {
	if (permission)
		return accounts_[0].update_balance(money);
}

bool BankAPI::withdraw(bool permission, int money) {
	if (permission)
		return accounts_[0].update_balance(-money);
}