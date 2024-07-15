#include <iostream>
#include "SimpleATMController.h"

using namespace std;

int main() {

	// Test 1
	SimpleATMController atm1 = SimpleATMController();

	cout << "Insert Card" << endl;

	int pin_number = 12345678;
	cout << "핀번호 입력 : " << pin_number << endl;

	if (atm1.insertCard(pin_number)) {
		atm1.checkBalance();

		
		atm1.deposit(100);
		cout << "100달러 입금" << endl;

		atm1.checkBalance();

		cout << "500달러 인출" << endl;

		if (atm1.withdraw(500))
			cout << "500달러 인출 성공" << endl;
		else
			cout << "잔액 부족" << endl;
		atm1.checkBalance();
		atm1.done();
	}
	else {
		cout << "잘못 입력하셨습니다." << endl;
	}

	cout << endl;

	// Test 2 *잔액이 부족할 경우
	SimpleATMController atm2 = SimpleATMController();

	cout << "Insert Card" << endl;

	 pin_number = 12345678;
	 cout << "핀번호 입력 : " << pin_number << endl;
	if (atm2.insertCard(pin_number)) {
		atm2.checkBalance();

		
		atm2.deposit(100);
		cout << "100달러 입금" << endl;

		atm2.checkBalance();

		cout << "2000달러 인출" << endl;

		if (atm2.withdraw(2000))
			cout << "2000달러 인출 성공" << endl;
		else
			cout << "잔액 부족" << endl;
		atm2.checkBalance();
		atm2.done();
	}
	else {
		cout << "잘못 입력하셨습니다." << endl;
	}
	cout << endl;

	// Test 3 *잘못된 pin number 입력
	SimpleATMController atm3 = SimpleATMController();

	cout << "Insert Card" << endl;

	pin_number = 11111111;
	cout << "핀번호 입력 : " << pin_number << endl;
	if (atm3.insertCard(pin_number)) {
		atm3.checkBalance();


		atm3.deposit(100);
		cout << "100달러 입금" << endl;

		atm3.checkBalance();

		cout << "2000달러 인출" << endl;
		if (atm3.withdraw(2000))
			cout << "2000달러 인출 성공" << endl;
		else
			cout << "잔액 부족" << endl;
		atm3.checkBalance();

		atm3.done();
	}
	else {
		cout << "잘못 입력하셨습니다." << endl;
	}
	cout << endl;

	return 0;

}