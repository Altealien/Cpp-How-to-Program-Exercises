#include <iostream>

int main(){
    int number{1};
    std::cout <<"N\t10*N\t100*N\t1000*N"<< std::endl;
    while(number <= 5){
        std::cout <<number<<"\t"<<number*10<<"\t"<<number*100<<"\t"<<number*1000<<std::endl;
        number++;
    }
}