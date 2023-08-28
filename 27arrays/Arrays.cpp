#include <iostream>

int main()
{
    /*
    An array is a data structure that can hold multiple values.
    Values are accessed by an index number. It's kind of like
    a variable that holds multiple values.
    */

    std::string cars[] = {"Corvetter", "Mustang", "Camry"};

    // array index start from 0.
    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n";

    // value in array can be mutated using its index.
    cars[0] = "Camaro";
    std::cout << cars[0] << "\n";

    // array also can be defined first and assigned later
    // however it size must be specified while defining.
    double prices[4];

    prices[0] = 5.00;
    prices[1] = 7.50; 
    prices[2] = 9.99;
    prices[3] = 15.00;

    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";
    std::cout << prices[3] << "\n";

    return 0;
}