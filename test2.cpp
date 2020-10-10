#include <iostream>

int main(){

    int times;

    std::cout << "Please introduce the number of times you want to repeat the sentence" << std::endl;
    std::cin >> times;

    for(int i = 0 ; i < times ; i++)
    {
        std::cout << "I will not talk in class" << std::endl;
    }

    return 0;
}
