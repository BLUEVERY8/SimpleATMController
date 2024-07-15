#include <iostream>
#include "SimpleATMController.h"

using namespace std;

int main() {

	// Test 1 ordinary case
	SimpleATMController atm1 = SimpleATMController();

	cout << "Insert Card" << endl;

	int pin_number = 12345678;
	cout << "Type pin number : " << pin_number << endl;

	if (atm1.insertCard(pin_number)) {
		atm1.checkBalance();
		cout << endl;

		
		atm1.deposit(100);
		cout << "Deposit 100 dollar " << endl;

		atm1.checkBalance();
		cout << endl;

		cout << "Withdraw 500 dollar" << endl;

		if (atm1.withdraw(500))
			cout << "Success withdraw" << endl;
		else
			cout << "Not enough money" << endl;
		atm1.checkBalance();
		atm1.done();
	}
	else {
		cout << "Wrong pin number" << endl;
	}

	cout << endl;
	cout << endl;
	cout << "-------------------------------------------------------------" << endl;

	// Test 2 not enough balance
	SimpleATMController atm2 = SimpleATMController();

	cout << "Insert Card" << endl;

	 pin_number = 12345678;
	 cout << "Type pin number : " << pin_number << endl;
	if (atm2.insertCard(pin_number)) {
		atm2.checkBalance();
		cout << endl;
		
		atm2.deposit(100);
		cout << "Deposit 100 dollar " << endl;

		atm2.checkBalance();

		cout << endl;

		cout << "Withdraw 2000 dollar" << endl;

		if (atm2.withdraw(2000))
			cout << "Success withdraw" << endl;
		else
			cout << "Not enough money" << endl;
		atm2.checkBalance();
		atm2.done();
	}
	else {
		cout << "Wrong pin number" << endl;
	}
	cout << endl;
	cout << endl;
	cout << "-------------------------------------------------------------" << endl;

	// Test 3 wrong pin number
	SimpleATMController atm3 = SimpleATMController();
	cout << "Insert Card" << endl;

	pin_number = 11111111;
	cout << "Type pin number : " << pin_number << endl;
	if (atm3.insertCard(pin_number)) {
		atm3.checkBalance();
		cout << endl;

		atm3.deposit(100);
		cout << "Deposit 100 dollar " << endl;

		atm3.checkBalance();

		cout << endl;

		cout << "Withdraw 2000 dollar" << endl;
		if (atm3.withdraw(2000))
			cout << "Success withdraw" << endl;
		else
			cout << "Not enough money" << endl;
		atm3.checkBalance();

		atm3.done();
	}
	else {
		cout << "Wrong pin number" << endl;
	}
	cout << endl;

	return 0;

}