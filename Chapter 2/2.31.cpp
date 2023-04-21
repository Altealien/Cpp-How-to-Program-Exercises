// Car-Pool Savings Calculator
/* NOT COMPLETED YET, DON'T UNDERSTAND WHAT EXACTLY I AM MEANT TO DO */
#include <iostream>

int main(){
    double totalMilesPerDay{0};
    double costPerGallon{0};// price in dollars per gallon
    double numberOfGallons{0};// number of gallons
    double moneySpent{0};// amount spent on gallons = costPerGallon * numberOfGallons
    double averageMilesPerGallon{0};// totalMilesPerDay/numberOfGallons
    double parkingFeesPerDay{0}; 
    double tollsPerDay{0};
    double dailyDrivingCost{0};
    double carPoolCost{0};
    double saved{0};// money that can be saved by carpooling 

    std::cout << "Enter total miles per day: ";
    std::cin >> totalMilesPerDay;
    std::cout << "Enter cost per gallon:$ ";
    std::cin >> costPerGallon;
    std::cout << "Enter number of gallons purchased:";
    std::cin >> numberOfGallons;
}