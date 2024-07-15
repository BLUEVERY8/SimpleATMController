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
	cout << "�ܾ� :" << this->bank_api_.checkBalance(this->permission_) << "�޷�" << endl;
}

bool SimpleATMController::deposit(int money) {
	return this->bank_api_.deposit(this->permission_, money);
}

bool SimpleATMController::withdraw(int money) {
	return this->bank_api_.withdraw(this->permission_, money);
}

void SimpleATMController::done() {
	this->permission_ = false;
	cout << "�ŷ��� �Ϸ�Ǿ����ϴ�" << endl;
}