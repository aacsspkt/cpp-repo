#include <iostream>

int main() {
    // memory address is a location in memory where data is stored.
    // a memory address can accessed with & (address-of operator)

    std::string name = "Ashish";
    int age = 24;
    bool student = true;

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";

    return 0;
}