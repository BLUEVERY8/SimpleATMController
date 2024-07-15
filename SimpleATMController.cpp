#include "SimpleATMController.h"
#include "Account.h"
#include "BankAPI.h"
#include <iostream>

SimpleATMController::SimpleATMController() {
	this->bank_api_ = BankAPI();
}

SimpleATMController::~SimpleATMController() {

}

bool SimpleATMController::insertCard(int pin_number) {
	this->permission_ = this->bank_api_.checkPinNumber(pin_number);
	
	return this->permission_;
}

void SimpleATMController::checkBalance() {
	cout << "잔액 :" << this->bank_api_.checkBalance(this->permission_) << "달러" << endl;
}

bool SimpleATMController::deposit(int money) {
	return this->bank_api_.deposit(this->permission_, money);
}

bool SimpleATMController::withdraw(int money) {
	return this->bank_api_.withdraw(this->permission_, money);
}

void SimpleATMController::done() {
	this->permission_ = false;
	cout << "거래가 완료되었습니다" << endl;
}