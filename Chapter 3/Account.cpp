#include <iostream>
#include <string>
#include "Account.h"

int main(){
    Account myAccount;
    int choice{0};
    do{
        std::cout <<"*********************WELCOME TO ALT BANK!*********************"<<std::endl;
        std::cout <<" What will you like to do today? "<<std::endl;
        std::cout <<"1. Create an Account." <<std::endl;
        std::cout <<"2. Deposit" << std::endl;
        std::cout <<"3. Withdraw" << std::endl;
        std::cout <<"4. Display account details" << std::endl;
        std::cout <<"5. Exit" << std::endl;
        std::cout <<"Enter your choice: ";
        std::cin >> choice;
        switch(choice){
            case 1:
            myAccount.setAccountDetails();
            break;
            case 2:
            myAccount.deposit();
            break;
            case 3:
            myAccount.withdraw();
            break;
            case 4:
            myAccount.displayAccountDetails();
            break;
            case 5:
            std::cout << "Thank you for banking with us." << std::endl;
            break;
            default:
            std::cout << "Invalid choice." << std::endl;
        }
        }while(choice != 5);
    
   return 0;
}