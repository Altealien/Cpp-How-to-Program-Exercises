// Arithmetic calculator and  minimum/ maximum values for three integer values
#include <iostream>
#include<bits/stdc++.h> 

int main(){

    int num1{0}, num2{0}, num3{0}, sum{0}, product{0}, average{0}, smallest{0}, largest{0};

    std::cout << "Input three different integers: ";
    std::cin >> num1>>num2>>num3;

    sum = num1 + num2 + num3;
    product = num1 * num2 * num3;
    average = sum/3;
    // use of std::min/ max functions from bits/stdc++ header file
    smallest = std::min({num1, num2, num3});
    largest = std::max({num1, num2, num3});

    // brute force method
    /*if( num1<= num2 && num1<= num3 ){
        smallest = num1;
    }
    else if( num2<= num1 && num2<= num3 ){
        smallest = num2;
    }
    else{
        smallest = num3;
    }

    if( num1>= num2 && num1>= num3 ){
        largest = num1;
    }
    else if( num2>= num1 && num2>= num3 ){
        largest = num2;
    }
    else{
        largest = num3;
    }*/

    std::cout << "Sum is " << sum << std::endl;
    std::cout << "Average is " << average << std::endl;
    std::cout << "Product is " << product << std::endl;
    std::cout << "Smallest is " << smallest << std::endl;
    std::cout << "Largest is " << largest << std::endl;
    
}