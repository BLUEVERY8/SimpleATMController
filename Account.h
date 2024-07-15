#pragma once
#include <string>

using namespace std;

class Account {
public:
	Account();
	Account(string client_name, int pin_number, int balance = 0);

	~Account();

	string get_client_name();
	int get_balance();
	int get_pin_number();
	bool update_balance(int difference);

private:
	string client_name_;
	int balance_;
	int pin_number_;

};