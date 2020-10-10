#include <iostream>

int main(){

    int variable; //empty variable to store input

    std::cout << "Input a number" << std::endl;

    std::cin >> variable; //read input from cin and put it in variable

    std::cout << "Your number is: " << variable << std::endl; //print variable using cout

    if(variable%2==0)
        std::cout << "This number is even" << std::endl;
    else
        std::cout << "This number is odd" << std::endl;

    return 0;
}
