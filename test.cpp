#include <iostream>

int main(){

    float a,b,c;
    float x;

    std::cout << "Input A:" << std::endl;
    std::cin >> a;
    std::cout << "Input B:" << std::endl;
    std::cin >> b;
    std::cout << "Input C:" << std::endl;
    std::cin >> c;

    x=(c-b)/a;

    std::cout << "The value of X is: " << x << std::endl;

    return 0;
}
