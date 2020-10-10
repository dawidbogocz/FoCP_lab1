#include <iostream>
#include <array>

int main(){

    std::array<int, 5> data = {0,1,2,3,4};

    std::cout << "First array" << std::endl;
    for(int i=0;i<5;i++)
    std::cout << data[i] << std::endl;

    std::array<int, 5> data2;
    data2[0] = 0;
    data2[1] = 1;
    data2[2] = 2;
    data2[3] = 3;
    data2[4] = 4;

    std::cout << "Second array" << std::endl;
    for(int i=0;i<5;i++)
    std::cout << data2[i] << std::endl;

    std::array<int, 100> data3;
    for(int i=0;i<100;i++)
        data3[i] = i;

    std::cout << "Third array" << std::endl;
    for(int i=0;i<100;i++)
        std::cout << data3[i] << std::endl;

    return 0;
}
