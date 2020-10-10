#include <iostream>

int main(){

    int total_money;
    int banknote_value;
    int banknotes=0;

    std::cout << "Please introduce an amount of money" << std::endl;
    std::cin >> total_money;

    std::cout << "Please introduce the value of banknote" << std::endl;
    std::cin >> banknote_value;

    /*while(total_money >= banknote_value){
        total_money -= banknote_value;
        banknotes += 1;
    }
    */

    for (banknotes; total_money >= banknote_value; banknotes++)
        total_money -= banknote_value;

    std::cout << "Number of banknotes: " << banknotes << std::endl;
    return 0;
}
