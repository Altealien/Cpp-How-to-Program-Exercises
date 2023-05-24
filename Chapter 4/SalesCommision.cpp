#include <iostream>
#include <iomanip>

int main(){
    int const weeklyPay{200};
    double sales, salary;

    std::cout << "Enter sales in dollars(-1 to end):";
    std::cin >> sales;

    while (sales != -1){
        double commission{0.09*sales};
        salary = commission + weeklyPay;
        std::cout << std::fixed;
        std::cout << "Salary is $" << std::setprecision(2) << salary<< std::endl;
        std::cout << "\n";
        std::cout << "Enter sales in dollars(-1 to end):";
        std::cin >> sales;
    }

}
    
   