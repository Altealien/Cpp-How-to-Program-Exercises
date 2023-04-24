#include <string>

class Employee{
    public:
        explicit Employee(std::string name,std::string surname,int salary){
            firstName = name;
            lastName = surname;
            if (salary < 0){
                monthlySalary = 0;
            }
            else{
                monthlySalary = salary;
            }
            
        }

        void setFirstName(std::string name){
            firstName = name;
        }
        std::string getFirstName() const {
            return firstName;
        }

        void setLastName(std::string surname){
            lastName = surname;
        }
        std::string getLastName() const {
            return lastName;
        }

        void setMonthlySalary(int salary){
            if(salary < 0){
                monthlySalary = 0;
            }
            else{
                monthlySalary = salary;
            }
            
        }
        int getMonthlySalary() const {
            return monthlySalary;
        }

        int getYearlySalary() const {
            int yearlySalary = monthlySalary * 12;
            return yearlySalary;
        }

        void raise(){
            monthlySalary = (monthlySalary * 0.1) + monthlySalary;
        }

    private:
        std::string firstName;
        std::string lastName;
        int monthlySalary;
};