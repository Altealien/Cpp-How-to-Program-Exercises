#include <iostream>

using namespace std;

//Calculates the product of three integers
int main(){
    int x{0}; // declaration and initialization of first integer
    int y{0}; // declaration and initialization of second integer
    int z{0}; // declaration and initialization of third integer
    int result{0}; // declaration and initialization of result variable

    cout<<"Enter three integers: "; // prompts the user for input
    cin>>x>>y>>z; // takes input of the three integers

    result = x*y*z; // product calculation is stored in the result variable

    cout<<"The product is "<<result<<endl; // outputs result

    return 0;//  indicates the program ended successfully

}