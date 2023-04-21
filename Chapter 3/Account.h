#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

class Account{
    public:
        void setAccountDetails(){
            std::cout << "Enter Account Name: ";
            std::cin.ignore();
            std::getline(std::cin,name);
            deposit();
        }

        void setAccountNumber(){
            srand(1234);
            int min = 2000000000;
            int max = 2999999999;
            accountNumber = rand() % (max - min + 1) + min;
            std::cout << "Account Number: " << accountNumber << std::endl;
        }

        void deposit(){
            float depositAmount;
            std::cout << "Enter amount to deposit(Minimum if this is a new account is $5000):$ ";
            std::cin >> depositAmount;
            if(depositAmount >= 0){
                accountBalance += depositAmount;
                std::cout << "Deposit Succesful. New account balance is:$ " << accountBalance << std::endl 
                << std::endl;
            }
        }

        void withdraw(){
            float withdrawAmount;
            std::cout << "Enter amount to withdraw:$ ";
            std::cin >> withdrawAmount;
            if(withdrawAmount < accountBalance){
                accountBalance -= withdrawAmount;
                std::cout << "Withdrawal Succesful. New account balance is:$ " << accountBalance << std::endl
                <<std::endl;
            }
            else{
                std::cout << "Insufficient funds." << std::endl <<std::endl;
            }
        }

        float getAccountBalance(){
            return accountBalance;
        }

        void displayAccountDetails(){
            std::cout << "Name: " << name << std::endl;
            setAccountNumber();
            std::cout << "Account Balance:$ " << accountBalance << std::endl
            <<std::endl;

        }
    private:
        std::string name{""};
        float accountBalance{0};
        int accountNumber{0};

};