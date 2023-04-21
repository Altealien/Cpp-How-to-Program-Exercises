// Body Mass Index Calculator

#include <iostream>

int main(){
    double weight{0};// weight in kilograms
    double height{0};// height in meters
    double bodyMassIndex{0};// Body Mass Index

    std::cout << "\nBMI VALUES\n";
    std::cout << "Underweight: less than 18.5\n";
    std::cout << "Normal: between 18.5 and 24.9\n";
    std::cout << "Overweight: between 25 and 29.9\n";
    std::cout << "Obese: 30 or greater\n\n";

    std::cout << "Enter weight in kilograms:";
    std::cin >> weight;
    std::cout << "Enter height in centimeters:";
    std::cin >> height;

    height /= 100;
    bodyMassIndex = weight /(height * height);
    printf("Body Mass Index is %.1f",bodyMassIndex);

    return 0;
}