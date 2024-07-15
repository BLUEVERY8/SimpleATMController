#include <iostream>
#include "SimpleATMController.h"

using namespace std;

int main() {

	// Test 1
	SimpleATMController atm1 = SimpleATMController();

	cout << "Insert Card" << endl;

	int pin_number = 12345678;
	cout << "�ɹ�ȣ �Է� : " << pin_number << endl;

	if (atm1.insertCard(pin_number)) {
		atm1.checkBalance();

		
		atm1.deposit(100);
		cout << "100�޷� �Ա�" << endl;

		atm1.checkBalance();

		cout << "500�޷� ����" << endl;

		if (atm1.withdraw(500))
			cout << "500�޷� ���� ����" << endl;
		else
			cout << "�ܾ� ����" << endl;
		atm1.checkBalance();
		atm1.done();
	}
	else {
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}

	cout << endl;

	// Test 2 *�ܾ��� ������ ���
	SimpleATMController atm2 = SimpleATMController();

	cout << "Insert Card" << endl;

	 pin_number = 12345678;
	 cout << "�ɹ�ȣ �Է� : " << pin_number << endl;
	if (atm2.insertCard(pin_number)) {
		atm2.checkBalance();

		
		atm2.deposit(100);
		cout << "100�޷� �Ա�" << endl;

		atm2.checkBalance();

		cout << "2000�޷� ����" << endl;

		if (atm2.withdraw(2000))
			cout << "2000�޷� ���� ����" << endl;
		else
			cout << "�ܾ� ����" << endl;
		atm2.checkBalance();
		atm2.done();
	}
	else {
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}
	cout << endl;

	// Test 3 *�߸��� pin number �Է�
	SimpleATMController atm3 = SimpleATMController();

	cout << "Insert Card" << endl;

	pin_number = 11111111;
	cout << "�ɹ�ȣ �Է� : " << pin_number << endl;
	if (atm3.insertCard(pin_number)) {
		atm3.checkBalance();


		atm3.deposit(100);
		cout << "100�޷� �Ա�" << endl;

		atm3.checkBalance();

		cout << "2000�޷� ����" << endl;
		if (atm3.withdraw(2000))
			cout << "2000�޷� ���� ����" << endl;
		else
			cout << "�ܾ� ����" << endl;
		atm3.checkBalance();

		atm3.done();
	}
	else {
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}
	cout << endl;

	return 0;

}