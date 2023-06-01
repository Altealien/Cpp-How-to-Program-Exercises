#include <iostream>

int main(){
    int counter{1};
    int largest{0}, secondLargest{0};

    while(counter <=10){
        std::cout << "Enter number: ";
        int number;
        std::cin >> number;

        /* PROGRAM LOGIC 
            It checks if number is larger than largest. If true it sets secondLargest to the value of largest
            and largest to the value of number. If false it goes to the else-if statement and checks if number
            is greater than secondLargest.It then sets secondLargest to the value of number.
            Example:
            First input = 10, 10 > 0(value of largest at execution), secondLargest = 0, largest = 10
            Second input = 4, 4 < largest but  > secondLargest, secondLargest = 4, largest =10
            Third input = 20, 20 > largest, secondLargest = 10, largest = 20*/

        if (number > largest){
            secondLargest = largest; 
            largest = number;     
        }
        else if (number > secondLargest){
            secondLargest = number;
        }
      
        counter++;
    }
    std::cout << "The largest number is " << largest << std::endl;
    std::cout << "The second largest number is " << secondLargest << std::endl;
}