#include "banksystem.h"
#include <iostream>
#include <string>
//Hajid Alkindi 21-0099
using namespace std;
// Here im defining my methods.
void banksystem::Withdraw(int w) { //if with withdraw amount less or equal to balance it will work 
	if (w <= balance) { 
		balance = balance - w;
	} else {
		cout << "insufficient funds\n"; //if the withdraw amount is more then balance it will give an error.
	};
};
void banksystem::Deposit(int d) {
	balance = balance + d;
};
void banksystem::displayBalance() {
	cout << "Your balance is " << balance << "$"; // displays balance.
};
string banksystem::Login(string b, string c) {
	if (userid == b && password == c) { //if user and password correct it will return 1, and 0 i manipulated this data to my advantage in the following code.
		return "1";
	}
	else {
		return "0";
	};

};

void banksystem::createAccount(string a, string b) {
	userid = a;
	password = b;
};
