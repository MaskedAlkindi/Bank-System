#include <iostream>
#include <string>
#include "banksystem.h"
//Hajid Alkindi 21-0099
using namespace std; 
/*The code is split to three files, using OOP and functions.*/
void mainMenu() {
    char input;
    int num;
    int n = 0;
    banksystem user;
    while (true) {
        cout << "\nd -> Deposit Money\nw -> Withdraw Money\nb -> Request Balance\nq -> Quit\n";
        cout << ">"; // bank menu 
        cin >> input;
        switch (input) {
        case 'q':
        case 'Q':
            cout << "\n Thanks for stopping by! \n";
            n = 1;
            break;
        case 'd':
        case 'D':
            cout << "\nAmount of deposit: ";
            cin >> num;
            user.Deposit(num);
            break;
        case 'w':
        case 'W':
            cout << "\nAmount of withdrawal: ";
            cin >> num;
            user.Withdraw(num);
            break;
        case 'b':
        case 'B':
            //Note that the picture asked the input for displaying balance as r, but the instruction paper said b, so i followed the instruction paper
            user.displayBalance();
            break;
        default:
            cout << "Wrong input\n";
            break;

        }
        if (n == 1) {
            break;
        }
    };
}
void introMenu() { // this is the main function
    char option;
    string id, pass, id_1, pass_2;
    banksystem user;
    int n = 0;
    while (true) {
        cout << "Hi! Welcome to the ATM Machine! \nPlease select an option from the menu below : \nl->Login \nc->Create New Account";
        cout << "\n<"; // outputting the main menu
        cin >> option;
        switch (option) {
        case 'l':
        case 'L':
            cout << "Please enter your user id :";
            cin >> id;
            cout << "Please enter your password :";
            cin >> pass;
            n = 1;
            break;
        case 'c':
        case 'C':
            cout << "Please enter your user id :";
            cin >> id_1;
            cout << "Please enter your password :";
            cin >> pass_2;
            user.createAccount(id_1, pass_2);
            cout << "\nThank You! Your account has been created!\n";
            break;
        default:
            cout << "Wrong input\n";
            break;

        }
        if (n == 1) {
            if (user.Login(id, pass) == "1") {
                cout << "\nAccess Granted!\n";
            }
            else if (user.Login(id, pass) == "0") {
                cout << "\n******** LOGIN FAILED! ********\n";
                continue;
            };
            if (user.Login(id, pass) == "1") {
                mainMenu(); // if login is successful the main menu of the bank will apear calling the other function.
                break;
            }
        }
        else {
            continue;
        }
    }
}
int main() {
	introMenu();
}
