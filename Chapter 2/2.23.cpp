// Largest and smallest integers
#include <iostream> // enables program to output data to the screen

int main(){

    int num1{0}, num2{0}, num3{0}, num4{0}, num5{0};
    int smallest{0};
    int largest{0};

    std::cout << "Input five different integers: ";
    std::cin >> num1>>num2>>num3>>num4>>num5;

    if( num1<= num2 && num1<= num3 && num1<= num4 && num1<= num5){
        smallest = num1;
    }
    else if( num2<= num1 && num2<= num3 && num2<= num4 && num2<= num5){
        smallest = num2;
    }
    else if( num3<= num1 && num3<= num2 && num3<= num4 && num3<= num5){
        smallest = num3;
    }
    else if( num4<= num1 && num4<=num2 && num4<=num3 && num4<=num5){
        smallest = num4;
    }
    else{
        smallest = num5;
    }

    if( num1>= num2 && num1>= num3 && num1>= num4 && num1>= num5 ){
        largest = num1;
    }
    else if( num2>= num1 && num2>= num3 && num2>= num4 && num2>= num5 ){
        largest = num2;
    }
    else if (num3>= num1 && num3>= num2 && num3>= num4 && num3>= num5){
        largest = num3;
    }
    else if (num4>= num1 && num4>= num2 && num4>= num3 && num4>= num5){
        largest = num4;
    }
    else{
        largest = num5;
    }

    std::cout << "Smallest is " << smallest << std::endl;
    std::cout << "Largest is " << largest << std::endl;
}