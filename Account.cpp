/* This file contains the implementation of the Account class.
*/
#include "Account.hpp"
#include <iostream>
#include <string>

Account::Account() : Name("Kashif"), ID(123), Balance(0.1) {} 

Account::Account(const std::string &name, int id, double balance) : Name(name), ID(id), Balance(balance) {} //constructor

void Account::deposit(double amount) { //deposit function
    Balance += amount;
}

void Account::withdraw(double amount) {
    if (Balance >= amount) {
        Balance -= amount;
        std::cout << "Withdrawal successful. New balance: " << Balance << std::endl;
    } else {
        std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
    }
}

double Account::getBalance() const { //get balance function
    return Balance;
}

void Account::setBalance(double balance) { //set balance function
    Balance = balance;
}

std::string Account::getName() const { //get name function
    return Name;
}

int Account::getID() const { //get ID function
    return ID;
}
