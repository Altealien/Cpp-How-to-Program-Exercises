// Seperates the integer into its digits and prints them separated by three spaces

#include<iostream> // enables program to output data to the screen

int main(){

    int number{0};
    int firstDigit{0},secondDigit{0},thirdDigit{0}, fourthDigit{0}, fifthDigit{0};
    int firstRemainder{0},secondRemainder{0},thirdRemainder{0}, fourthRemainder{0};

    std::cout << "Enter a number:"; // prompts the user to enter a number
    std::cin >> number;

    firstDigit = number / 10000;// gets the first digit
    firstRemainder = number % 10000;// gets the remaining digits

    secondDigit = firstRemainder / 1000;// gets the second digit by dividing the remaining digits
    secondRemainder = firstRemainder % 1000;//gets the second remaining digits

    thirdDigit = secondRemainder / 100;// gets the third digit
    thirdRemainder = secondRemainder % 100;// gets the  third remaining digits

    fourthDigit = thirdRemainder / 10;// gets the fourth digit
    fourthRemainder = thirdRemainder % 10;// gets the fourth remaing digit

    fifthDigit = fourthRemainder; // sets the fifth digit 

    std::cout << firstDigit << "   " << secondDigit << "   " << thirdDigit << "   " 
    << fourthDigit << "   " << fifthDigit << std::endl;

    return 0;
}