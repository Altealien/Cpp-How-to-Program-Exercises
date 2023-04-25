#include <iostream>
#include "Date.h"

int main(){
    Date date1(04,26,2023);
    date1.displayDate();
    std::cout <<"\n";

    //Test getters
    std::cout << "The day is:" << date1.getDay() << std::endl;
    std::cout << "The month is:" << date1.getMonth() << std::endl;
    std::cout << "The year is:" <<date1.getYear() << std::endl;
    std::cout <<"\n";

    //Test setters
    date1.setDay(27);
    date1.setMonth(05);
    date1.setYear(2030);

    //Test getters again
    std::cout << "The day is:" << date1.getDay() << std::endl;
    std::cout << "The month is:" << date1.getMonth() << std::endl;
    std::cout << "The year is:" <<date1.getYear() << std::endl;
    std::cout <<"\n";

    date1.displayDate();

}