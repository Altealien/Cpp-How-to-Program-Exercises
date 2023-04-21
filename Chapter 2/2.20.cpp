// Diameter, Circumference and Area of a Circle
#include <iostream> // enables program to output data to the screen

int main(){
    
    int radius{0}; // declaring and initializing radius variable
    const double pi = 3.14159; // setting the constant value of pi

    std::cout << "Enter radius: "; // prompts user to enter radius
    std::cin >> radius; // stores the value

    std::cout << "Diameter: " << 2 * radius << std::endl; // calculates the diameter and outputs it
    std::cout << "Circumference: " << 2 * pi * radius<< std::endl;// calculates the circumference and outputs it
    std::cout << "Area: " << pi * (radius * radius)<< std::endl; // calculates the area and outputs it

    return 0; // indicates program ended successfully
}