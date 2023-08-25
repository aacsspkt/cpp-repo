#include <iostream>

int main() {
    std::string name;

    while(name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << "\n";
    // infinite loop
    // while(1==1) {
    //     std::cout << "Enter your name: ";
    // }

    // do - while loop runs some block of code first 
    // then repeat again if condition is true

    std::cout << "\n";

    int number;

    do {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The # is " << number << "\n";
    std::cout << "\n";

    // for loop
    for (int i = 1; i <= 10; i++) {
        std::cout << i << "\n";
    }
    std::cout << "Happy New Year" << "\n";
    
    std::cout << "\n";
    // break keyword break out of loop
    // continue keyword skip current iteration

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            break;
        }
        std::cout << i << " ";
    }

    std::cout << "\n";

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue;
        }
        std::cout << i << " ";
    }

    std::cout << "\n";

    // nested loop
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    int rows;
    int columns;
    char symbol;
    
    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            std::cout << symbol;
        }
        std::cout << "\n";
    }
}