/* This is the main file. It creates an Account object and allows the user to deposit or withdraw money from the account.
*/
#include <iostream>
#include "Account.hpp"

int main() {
    // Create an Account object
    Account myAccount("Kashif", 123, 0.1);

    // Display initial information
    std::cout << "Name: " << myAccount.getName() << std::endl;
    std::cout << "ID: " << myAccount.getID() << std::endl;
    std::cout << "Initial Balance: " << myAccount.getBalance() << std::endl;

    char choice;
    double amount;

    do {
        // Display menu
        std::cout << "\nMenu:\n";
        std::cout << "  d: Deposit\n";
        std::cout << "  w: Withdraw\n";
        std::cout << "  q: Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Perform action based on user's choice
        switch(choice) {
            case 'd':
                std::cout << "Enter the amount you want to deposit: ";
                std::cin >> amount;
                myAccount.deposit(amount);
                std::cout << "Deposit successful. New balance: " << myAccount.getBalance() << std::endl;
                break;
            case 'w':
                std::cout << "Enter the amount you want to withdraw: ";
                std::cin >> amount;
                if (amount > myAccount.getBalance()) {
                    std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
                } else {
                    myAccount.withdraw(amount);
                }
                break;
            case 'q':
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 'q');

    return 0;
}
