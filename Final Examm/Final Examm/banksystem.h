#pragma once
#include <string>
//Hajid Alkindi 21-0099
using namespace std;
class banksystem {
private: //user id, password and password have to be privited because its personal information.
	string userid;
	string password;
	double balance = 0;

public:
	void Withdraw(int w); // The functions we are going to use
	void Deposit(int d);
	void displayBalance();
	void Quit();
	string Login(string b, string c);
	void createAccount(string a, string b); //id and password setter

};
