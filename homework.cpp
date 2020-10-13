#include <iostream>
#include <cmath>

int main(){

    float a,b,c;
    float x,x1,x2;
    float delta;

    std::cout << "Input A:" << std::endl;
    std::cin >> a;
    std::cout << "Input B:" << std::endl;
    std::cin >> b;
    std::cout << "Input C:" << std::endl;
    std::cin >> c;

    delta=b*b-4*a*c;

    if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        std::cout << "The value of X1 is: " << x1 << std::endl;
        std::cout << "The value of X2 is: " << x2 << std::endl;
    }else if(delta<0){
        std::cout << "Delta is negative so there is no solution" << std::endl;
    }else{
        x=(-b)/(2*a);
        std::cout << "The value of X is: " << x << std::endl;
    }

    return 0;
}
