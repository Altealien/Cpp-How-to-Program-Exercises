#include <iostream>

int main(){
    unsigned int passes{0};
    unsigned int failures{0};
    unsigned int studentCount{1};

    while(studentCount <=10){
        std::cout << "Enter result(1 = pass, 2 = fail):";
        int result;
        std::cin >> result;

        if(result == 1){
            passes++;
        }
        else if (result == 2){
            failures++;
        }
        else{
            std::cout << "INVALID RESULT!!" << std::endl;
            studentCount--;
        }
        studentCount++;
    }

    std::cout << "Passed: " << passes << "\nFailed: " << failures << std::endl;

    if(passes > 8){
        std::cout << "Bonus to Instructor!" << std::endl;
    }
}