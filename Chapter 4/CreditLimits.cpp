#include <iostream>
#include <iomanip>

int main(){
    int accountNumber;
    double balance, charges, credits, creditLimit, newBalance{0.0};

    std::cout << "Enter account number(-1 to quit): ";
    std::cin >> accountNumber;

    while(accountNumber != -1){
        std::cout << "Enter balance at the beginning of the month: ";
        std::cin >> balance;
        std::cout << "Enter total charges: ";
        std::cin >> charges;
        std::cout << "Enter total credits: ";
        std::cin >> credits;
        std::cout << "Enter credit limit: ";
        std::cin >> creditLimit;
        std::cout << "\n";
        newBalance = balance + charges - credits;
        std::cout << "New Balance is "<< newBalance << std::endl;

        if(newBalance > creditLimit){
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Credit Limit: " << creditLimit << std::endl;
            std::cout << "Credit Limit Exceeded" << std::endl;
            std::cout << "\n";
        }

        std::cout << "Enter account number(-1 to quit): ";
        std::cin >> accountNumber;

    }
}