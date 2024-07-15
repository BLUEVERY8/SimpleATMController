#include <string>
#include "Account.h"

Account::Account() {};
Account::Account(string client_name, int pin_number, int balance) {
	this->client_name_ = client_name;
	this->pin_number_ = pin_number;
	this->balance_ = balance;
}

Account::~Account() {}

string Account::get_client_name() {
	return this->client_name_;
}

int Account::get_balance() {
	return balance_;
}

int Account::get_pin_number() {
	return pin_number_;
}


bool Account::update_balance(int difference) {
	// 잔액 부족 시 인출 불가
	if (this->balance_ + difference < 0)
		return false;
	this->balance_ += difference;
	return true;
}