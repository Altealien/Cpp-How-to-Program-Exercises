#include <iostream>
#include <iomanip>

int main(){
   unsigned int hoursWorked;
   double hourlyRate , salary;

   std::cout << "Enter hours worked(-1 to end):";
   std::cin >> hoursWorked;

   while(hoursWorked != -1){
    std::cout << "Enter hourly rate of the employee($00.00):";
    std::cin >> hourlyRate;
    if(hoursWorked <= 40){
        salary = hourlyRate * hoursWorked;
        std::cout << std::fixed;
        std::cout << "Salary is $" << std::setprecision(2) << salary << std::endl;
        std::cout <<"\n";
    }
    else{
        salary = (hourlyRate * hoursWorked) + ((hoursWorked - 40)* hourlyRate/2);
        std::cout << std::fixed;
        std::cout << "Salary is $" <<std::setprecision(2) << salary << std::endl;
        std::cout <<"\n";
    }
       std::cout << "Enter hours worked(-1 to end):";
       std::cin >> hoursWorked;
   } 
}