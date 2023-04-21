//Checks if an integer value is even or odd
#include <iostream> // enables program to output data to the screen 

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n % 2 == 0){
        std::cout << "The number is even" << std::endl;
    }
    else{
        std::cout << "The number is odd" << std::endl;
    }
}