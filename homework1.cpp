#include <iostream>

int main(){

    float a1,a2,b1,b2,c1,c2; //numbers added by user
    float x,y; //numbers we are looking for

    std::cout << "Input A1:" << std::endl;
    std::cin >> a1;
    std::cout << "Input B1:" << std::endl;
    std::cin >> b1;
    std::cout << "Input C1:" << std::endl;
    std::cin >> c1;

    std::cout << "Input A2:" << std::endl;
    std::cin >> a2;
    std::cout << "Input B2:" << std::endl;
    std::cin >> b2;
    std::cout << "Input C2:" << std::endl;
    std::cin >> c2;

    /*
    Multiply the first equation by −a2/a1 and add to the second
    {a1x + b1y = c1 | a1x + b1y = c1
    {a2x + b2y = c2 | (a2 − a2/a1*a1)*x + (b2 − a2/a1*b1)y = c2 − a2/a1*c1,

    {a1x + b1y = c1
    {(b2 − a2/a1*b1)y = c2 − a2/a1*c1.

    Thus
    y = (c2 − a2*c1/a1)/b2 −a2*b1/a1 = (a1*c2 − a2*c1)/(a1*b2 − a2*b1)

    and the back substitution gives
    x = (c1*b2 − c2*b1)/(a1*b2 − a2*b1)
    */

    x=((b2*c1)-(b1*c2))/((a1*b2)-(a2*b1));
    y=((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1));

    std::cout << "The value of X is: " << x << std::endl;
    std::cout << "The value of Y is: " << y << std::endl;

    return 0;
}
