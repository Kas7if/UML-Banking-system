/* Kashif Mohammed Week 11 UMl bank .h file

*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account {
private:
    std::string Name = "Kashif";
    int ID = 123;
    double Balance = 0.1;
public:
    // Constructors
    Account();
    Account(const std::string &name, int id, double balance);

    // declare prototype functions
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    void setBalance(double balance);
    std::string getName() const;
    int getID() const;
};

#endif // ACCOUNT_H
