#include <iostream>


void printNum(int num);

int myNum = 3;

int main() {
    // local variable
    // its scope is within the main function
    int myNum = 1;

    // in order for printNum to know about myNum
    // it must be passed as variable.
    printNum(myNum);

    return 0;
}

void printNum(int num) {
    // variable passed from argument.
    std::cout << "Variable from argument: " << num << "\n"; 

    // its scope in within this function so duplicate name is ok.
    // a function will resort to local varialble
    // first then to global variable, so 2 should 
    // be printed here.
    int myNum = 2;
    std::cout << "Local variable: " << myNum << "\n";

    // to use global variable, use scope resolution operator => '::'
    // before variable
    std::cout << "Global variable: " << ::myNum;
}