#include <iostream>


int main() {
    /*
    Ternary operator is replacement for if/else statement.
    Syntax: condition ? expression1: expression2;
    */

    int grade = 50;
    
    // if (grade >= 60) {
    //     std::cout << "You pass";
    // } else {
    //     std::cout << "You failed";
    // }
    
    // ternary operator for above code is
    grade >= 60 ? std::cout << "You pass\n": std::cout << "You failed\n";

    // another example
    int number = 8;
    number % 2 ? std::cout << "Odd": std::cout << "Even";

    return 0;
}