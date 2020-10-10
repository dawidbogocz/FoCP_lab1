#include <iostream>

int main(){

    int total_money;
    int banknotes=0;

    std::cout << "Please introduce an amount of money" << std::endl;
    std::cin >> total_money;

    while(total_money >= 50){
        total_money -= 50;
        banknotes += 1;
    }

    std::cout << "Number of banknotes: " << banknotes << std::endl;
    return 0;
}
