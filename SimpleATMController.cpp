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
	// pin number Ȯ�εǸ� �ŷ��� �����ϵ��� ������ �ο�
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

// �ŷ� ����
void SimpleATMController::done() {
	this->permission_ = false;
	cout << "Complete" << endl;
}