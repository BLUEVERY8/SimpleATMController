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
	// pin number 확인되면 거래가 가능하도록 권한을 부여
	this->permission_ = this->bank_api_.checkPinNumber(pin_number);
	
	return this->permission_;
}

void SimpleATMController::checkBalance() {
	cout << "Balance :" << this->bank_api_.checkBalance(this->permission_) << "dollar" << endl;
}

bool SimpleATMController::deposit(int money) {
	return this->bank_api_.deposit(this->permission_, money);
}

bool SimpleATMController::withdraw(int money) {
	return this->bank_api_.withdraw(this->permission_, money);
}

// 거래 종료
void SimpleATMController::done() {
	this->permission_ = false;
	cout << "Complete" << endl;
}