// It prints the integer equivalent of a character
#include <iostream>// enables program to output data to the screen

int main(){

    char c;// declaration of character variable

    std::cout << "Enter a single character:"; // prompts user to enter a single character
    std::cin >> c;

    std::cout << "The character is " << c << std::endl;// prints the character
    std::cout << "The integer equivalent is " << static_cast<int>(c) << std::endl;// prints the integer equivalent

    return 0;
}