#include <iostream>

int main(){
    int counter{1};
    int number;
    int largest{0};

    while(counter <=10){
        std::cout << "Enter number: ";
        std::cin >> number;
        if (number > largest){
            largest = number;
        }
        counter++;
    }
    std::cout << "The largest number is " << largest << std::endl;
}