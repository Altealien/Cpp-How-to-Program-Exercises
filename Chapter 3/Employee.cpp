#include <iostream>
#include "Employee.h"

int main(){
    Employee employee1("Andrew","Garfield",1000);
    Employee employee2("Jane","Foster",-10);

   // Test getters
    std::cout << "Name: " << employee1.getFirstName() <<" " << employee1.getLastName() << std::endl;
    std::cout << "Monthly Salary: $" << employee1.getMonthlySalary() << std::endl;
    std::cout << "Yearly Salary: $" << employee1.getYearlySalary() << std::endl;
    std::cout << "\n";

    std::cout << "Name: " << employee2.getFirstName() <<" " << employee2.getLastName() << std::endl;
    std::cout << "Monthly Salary: $" << employee2.getMonthlySalary() << std::endl;
    std::cout << "Yearly Salary: $" << employee2.getYearlySalary() << std::endl;
    std::cout << "\n";

    // Test setters
    employee1.setFirstName("John");
    employee1.setLastName("Doe");
    employee1.setMonthlySalary(1200);

    employee2.setFirstName("James");
    employee2.setLastName("Doge");
    employee2.setMonthlySalary(3000);
    

    // Test getters again
    std::cout << "Name: " << employee1.getFirstName() <<" " << employee1.getLastName() << std::endl;
    std::cout << "Monthly Salary: $" << employee1.getMonthlySalary() << std::endl;
    std::cout << "Yearly Salary: $" << employee1.getYearlySalary() << std::endl;
    std::cout << "\n";

    std::cout << "Name: " << employee2.getFirstName() <<" " << employee2.getLastName() << std::endl;
    std::cout << "Monthly Salary: $" << employee2.getMonthlySalary() << std::endl;
    std::cout << "Yearly Salary: $" << employee2.getYearlySalary() << std::endl;
    std::cout <<"\n";

    // Calling raise function(10% raise for each employee)
    employee1.raise();
    employee2.raise();

    // Testing getters after raise
    std::cout << "Name: " << employee1.getFirstName() <<" " << employee1.getLastName() << std::endl;
    std::cout << "Monthly Salary after 10% raise: $" << employee1.getMonthlySalary() << std::endl;
    std::cout << "Yearly Salary after 10% raise: $" << employee1.getYearlySalary() << std::endl;
    std::cout << "\n";

    std::cout << "Name: " << employee2.getFirstName() <<" " << employee2.getLastName() << std::endl;
    std::cout << "Monthly Salary after 10% raise: $" << employee2.getMonthlySalary() << std::endl;
    std::cout << "Yearly Salary after 10% raise: $" << employee2.getYearlySalary() << std::endl;
    std::cout << "\n";

    return 0;
}