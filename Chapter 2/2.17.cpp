// Printing exercise
#include <iostream>

int main(){

    std::cout << "1 2 3 4\n"; // printing using one statement with one stream insertion operator
    std::cout << "1 " << "2 " << "3 "<< "4\n";// printing using one statement with four stream insertion operators
    //using four statements
    std::cout <<"1 ";
    std::cout <<"2 ";
    std::cout <<"3 ";
    std::cout <<"4\n";

    return 0;  // indicates the program ended successfully
}