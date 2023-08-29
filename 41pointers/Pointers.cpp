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
    std::cout << "First value of freePizzas: " << *pFreePizzas << "\n";


    /*
    Null value is a special value that means something has no value.
    When a pointer is holding a null value, that pointer is not pointing
    at anything (null pointer)

    nullptr = keyword represents a null pointer literal

    nullptrs are helpful when determining if an address was
    successfully assigned to a pointer.
    */

    int *pointer = nullptr;
    int x = 123;

    // uncomment below to assigne address to pointer
    // pointer = &x;

    if(pointer == nullptr) {
        std::cout << "Address was not assigned\n";
    } else {
        std::cout << "Address was assigned\n";
        std::cout << "Value at that address is: " << *pointer;
    }
    return 0;
}