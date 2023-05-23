#include <iostream>
#include <iomanip>

int main(){
    int totalMilesDriven{0}, totalGallonsUSed{0};
    int milesDriven , gallonsUsed;

    std::cout << "Enter miles driven(-1 to quit):";
    std::cin >> milesDriven;
    
    while(milesDriven != -1){
        std::cout << "Enter gallons used:";
        std::cin >> gallonsUsed;

        double milesPerGallon{static_cast<double>(milesDriven)/gallonsUsed};
        std::cout << std::fixed;
        std::cout << "MPG this trip:"<<std::setprecision(6)<<milesPerGallon<<std::endl;

        totalMilesDriven += milesDriven;
        totalGallonsUSed +=gallonsUsed;
        double totalMPG{static_cast<double>(totalMilesDriven)/totalGallonsUSed};
        std::cout << "Total MPG:" <<std::setprecision(6) << totalMPG <<std::endl;
        std::cout << "\n";

        std::cout << "Enter miles driven(-1 to quit):";
        std::cin >> milesDriven;
    }
}