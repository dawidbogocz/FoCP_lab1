#include <iostream>
#include <array>

int main(){

    std::array<int, 10> data = {5,1,2,6,4,0,8,7,9,3};

    int smallest = data[0];

    for(int i=0;i<10;i++)
    {
        if(data[i]<smallest)
            smallest=data[i];
    }

    std::cout << "Smallest number is: " << smallest << std::endl;
    return 0;
}
