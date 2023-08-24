#include <iostream>

int main() {
    // && operator checks if two conditions are true
    // || operator checks at least one of two conditions is true
    // ! operator reverses the logical state of its operand

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // example usage of &&
    if (temp > 0 && temp < 30){
        std::cout << "The temperature is good!\n";
    } else {
        std::cout << "The temperature is bad!\n2";
    }

    // example usage of ||
    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad!\n";
    } else {
        std::cout << "The temperature is good!\n";
    }

    // example of !
    bool sunny = true;

    if (!sunny) {
        std::cout << "Its cloudy outside";
    } else {
        std::cout << "Its sunny outside";
    }

    return 0;
}