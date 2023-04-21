//Checks if the first value is a multiple of the second
#include <iostream> // enables program to output data to the screen

int main(){

    int num1{0}, num2{0};

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if(num2 % num1 == 0){
        std::cout << "The first number is a multiple of the second.\n";
    }
    else{
        std::cout << "The first number is not a multiple of the second.\n";
    }

}
