#include <iostream>

int main() {
    // if statement: do something if a condition is true else do nothing
    // if else part is given and if condition is not fulfilled then else
    // part is executed

    int age;

    std::cout << "Enter you age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "Wow! you have lived long-10. You are still eligible for voting";
    } else if (age >= 18) {
        std::cout << "You are elgible for voting";
    } else if (age <= 0) {
        std::cout << "Invalid age input";
    } else {
        std::cout << "You are not eligible for voting";
    }

    return 0;
}