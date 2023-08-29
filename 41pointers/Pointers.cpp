#include <iostream>

int main()
{
    /*
    Pointers are variable that stores a memory address of another vaiable.
    Sometime it's easier to work with an address
    '&': address-of operator
    '*': dereference operator
    */

    std::string name = "Ashish";
    int age = 24;

    std::string *pName = &name;
    int *pAge = &age;

    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pFreePizzas = freePizzas; // here freePizzas is already a address

    std::cout << "Address of name: " << pName << "\n";
    std::cout << "Value of name: " << *pName << "\n";
    
    std::cout << "Address of age: " << pAge << "\n";
    std::cout << "Value of age: " << *pAge << "\n";

    std::cout << "Address of freePizzas: " << pFreePizzas << "\n";
    std::cout << "First value of freePizzas: " << *pFreePizzas;

    return 0;
}