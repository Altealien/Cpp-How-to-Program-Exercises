// Arithmetic calculator
#include<iostream>

int main(){
    
    int num1{0}, num2{0}, sum{0}, product{0}, difference{0}, quotient{0}; // declaration and initialization

    std::cout << "Enter two integers:"; // prompts user for input
    std::cin >>num1>>num2; // stores user input in the declared variables num1 and num2

    sum = num1 + num2; // adds the two numbers together
    product = num1 * num2; // multiplies the two numbers
    difference = num1 - num2; // subtracts num2 from num1
    quotient = num1/num2; // num1 is divided by num2

    std::cout << "The sum is " << sum <<std::endl;
    std::cout << "The product is " << product <<std::endl;
    std::cout << "The difference is " << difference <<std::endl;
    std::cout << "The quotient is " << quotient <<std::endl;

    return 0; // indicates the program ended successfully
}