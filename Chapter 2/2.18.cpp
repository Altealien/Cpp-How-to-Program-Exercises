// Compares two integer values to see which one is greater or if they are equal
#include <iostream>

int main(){

    int num1{0},num2{0}; // declaration and initialization of numbers

    std::cout << "Enter two integers:"; // prompts user for input
    std::cin >>num1>>num2;// stores user input in num1 and num 2

    if(num2 > num1){ // checks if number 2 is greater than number 1
        std::cout << num2 << " is larger.\n";
    }
    else if(num1 == num2){ // checks if numbers are equal
        std::cout << "These numbers are equal.\n";
    }
    else{ // if numbers are not equal && number 2 isn't greater than number 1 then number 1 is greater than number
        std::cout << num1 << " is larger.\n";
    }

    return 0;  // indicates the program ended successfully
}